import lvgl as lv
import machine
import esp32
import ttgo


def axp_callback(pin):
    power.clearIRQ()
    print("PEK was pressed! Go to sleep!!!!")
    watch.tft.backlight_fade(0)
    watch.tft.display_sleep()
    watch.power_off()
    power.setPowerOutPut(ttgo.axp202.AXP202_LDO2, False)
    esp32.wake_on_ext1((machine.Pin(35), ), esp32.WAKEUP_ALL_LOW)
    power.clearIRQ()
    machine.deepsleep()


# Init watch
watch = ttgo.Watch()
power = watch.pmu
tft = watch.tft

# Init lvgl
lv.init()
watch.lvgl_begin()

# Init interface
scr = lv.obj()
win = lv.win(scr)
win.set_title("PowerKey Sleep Example")
text_label = lv.label(win)
text_label.set_text("Wait for the PEKKey\n interrupt to come...")
lv.scr_load(scr)

# Init irq
watch.pmu_attach_interrupt(axp_callback)
power.enableIRQ(ttgo.axp202.AXP202_PEK_SHORTPRESS_IRQ, True)
power.clearIRQ()

# Enable backlight
watch.tft.backlight_fade(100)
