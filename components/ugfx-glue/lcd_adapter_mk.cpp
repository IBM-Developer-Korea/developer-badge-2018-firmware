#include "lcd_adapter_mk.h"

#include "ILI9341_adapter.cpp"

void board_lcd_deinit() {
    if (lcd_obj != NULL) {
        delete lcd_obj;
        lcd_obj = NULL;
        
        spi_bus_free(VSPI_HOST);
    }
}

#include "iot_lcd.cpp"
