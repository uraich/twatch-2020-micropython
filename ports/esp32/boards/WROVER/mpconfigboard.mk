FLASH_MODE = dio
FLASH_FREQ = 40m
PART_SRC ?= $(BOARD_DIR)/partitions-16MiB.csv
FROZEN_MANIFEST ?= $(BOARD_DIR)/manifest.py

SDKCONFIG += boards/sdkconfig.base
SDKCONFIG += boards/sdkconfig.spiram
SDKCONFIG += boards/sdkconfig.ble
SDKCONFIG += boards/sdkconfig.240mhz

