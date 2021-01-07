import lvgl as lv

import ttgo
from axp_constants import *

watch = ttgo.Watch()
tft = watch.tft
power = watch.pmu


def init():
    power.adc1Enable(AXP202_VBUS_VOL_ADC1
                     | AXP202_VBUS_CUR_ADC1 |
                     AXP202_BATT_CUR_ADC1 | AXP202_BATT_VOL_ADC1, True)
    watch.lvgl_begin()


def interface():
    def update_task(task):
        set_usb_voltage(power.getVbusVoltage())
        set_usb_pwr(power.getVbusCurrent())
        if power.isBatteryConnect():
            set_batt_voltage(power.getBattVoltage())
            if power.isChargeing():
                set_batt_pwr("Charging", power.getBattChargeCurrent())
                batt_percent.set_hidden(True)
            else:
                set_batt_pwr("Discharging", power.getBattDischargeCurrent())
                set_batt_per(power.getBattPercentage())
                batt_percent.set_hidden(False)

    def event_cb(obj, event):
        if event == lv.EVENT.VALUE_CHANGED:
            tft.set_backlight_level(obj.get_value())

    def set_usb_pwr(pwr):
        usb_pwr.set_text("USB current: {} mA".format(pwr))

    def set_usb_voltage(volts):
        usb_voltage.set_text("USB voltage: {} mV".format(volts))

    def set_batt_voltage(volts):
        batt_voltage.set_text("Battery voltage: {} mV".format(volts))

    def set_batt_pwr(mode, pwr):
        batt_pwr.set_text("{} battery \ncurrent: {} mA".format(mode, pwr))

    def set_batt_per(per):
        batt_percent.set_text("Battery percent: {}%".format(per))

    scr = lv.obj()
    tabview = lv.tabview(scr)
    vbus_tab = tabview.add_tab("USB")
    usb_voltage = lv.label(vbus_tab)
    usb_pwr = lv.label(vbus_tab)
    usb_pwr.set_y(usb_voltage.get_y() + 20)
    la = lv.switch(vbus_tab)
    batt_tab = tabview.add_tab("Battery")
    batt_voltage = lv.label(batt_tab)
    batt_pwr = lv.label(batt_tab)
    batt_pwr.set_y(batt_voltage.get_y() + 20)
    batt_percent = lv.label(batt_tab)
    batt_percent.set_y(batt_pwr.get_y() + 40)
    brightness_slider = lv.slider(batt_tab)
    brightness_slider.align(None, lv.ALIGN.IN_BOTTOM_MID, 0, 0)
    brightness_slider.set_range(0, 100)
    brightness_slider.set_value(100, 1)
    brightness_slider.set_event_cb(event_cb)
    update_task(None)
    lv.scr_load(scr)
    watch.tft.backlight_fade(100)
    lv.task_create(update_task, 1000, 5, None)



init()
interface()
