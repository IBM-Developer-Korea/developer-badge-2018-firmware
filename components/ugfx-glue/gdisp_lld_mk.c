/*
 * This file is subject to the terms of the GFX License. If a copy of
 * the license was not distributed with this file, you can obtain one at:
 *
 *              http://ugfx.org/license.html
 */

#include "gdisp_lld_ILI9341.c"

#include "lcd_adapter_mk.h"
LLDSPEC	void gdisp_lld_deinit(GDisplay *g) {
    board_lcd_deinit();
}