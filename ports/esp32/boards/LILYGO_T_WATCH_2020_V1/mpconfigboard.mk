FLASH_MODE = dio
FLASH_FREQ = 40m
PART_SRC ?= $(BOARD_DIR)/partitions-16MiB.csv
FROZEN_MANIFEST ?= $(BOARD_DIR)/manifest.py

SDKCONFIG += boards/sdkconfig.base
SDKCONFIG += boards/sdkconfig.spiram
SDKCONFIG += boards/sdkconfig.ble
SDKCONFIG += boards/sdkconfig.240mhz

# $(shell cp $(BOARD_DIR)/files/lv_conf.h ../../lib/lv_bindings/lv_conf.h)
# $(shell cp $(BOARD_DIR)/files/modlvesp32.c ../../lib/lv_bindings/driver/esp32/modlvesp32.c)
