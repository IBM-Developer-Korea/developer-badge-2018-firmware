#
# Ugfx component makefile.
#
# This Makefile can be left empty. By default, it will take the sources in the 
# src/ directory, compile them and link them into lib(subdirectory_name).a 
# in the build directory. This behaviour is entirely configurable,
# please read the ESP-IDF documents if you need to do this.
#

COMPONENT_ADD_INCLUDEDIRS := .

COMPONENT_EXTRA_INCLUDES := \
	$(UGFX_PATH) \
	$(UGFX_PATH)/src \
	$(UGFX_PATH)/src/gdisp \
	$(ESP_IOT_PATH)/components/hmi/gdrivers/gdisp/ILI9341 \
	$(ESP_IOT_PATH)/components/hmi/ugfx_gui \
	$(ESP_IOT_PATH)/components/spi_devices/lcd \
	$(ESP_IOT_PATH)/components/spi_devices/lcd/include \
	$(IDF_PATH)/components/freertos/include/freertos \

