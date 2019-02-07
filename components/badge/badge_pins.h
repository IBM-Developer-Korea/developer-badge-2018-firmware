/** @file badge_pins.h */
#ifndef BADGE_PINS_H
#define BADGE_PINS_H

#include "sdkconfig.h"

#ifdef CONFIG_DEV_BADGE_V1

// Badge revision 1.0
#define PIN_NUM_LED1         16
#define PIN_NUM_LED2         17

#define PIN_NUM_BUTTON_UP    15
#define PIN_NUM_BUTTON_DOWN  13
#define PIN_NUM_BUTTON_LEFT  12
#define PIN_NUM_BUTTON_RIGHT 14
#define PIN_NUM_BUTTON_MID   32
#define PIN_NUM_BUTTON_A      2
#define PIN_NUM_BUTTON_B      4

#elif defined(CONFIG_DEV_BADGE_PROTOTYPE)

// Badge revision 0.3
#define PIN_NUM_LED1         17
#define PIN_NUM_LED2         16

#define PIN_NUM_BUTTON_UP    12
#define PIN_NUM_BUTTON_DOWN  14
#define PIN_NUM_BUTTON_LEFT  13
#define PIN_NUM_BUTTON_RIGHT 15
#define PIN_NUM_BUTTON_A      4
#define PIN_NUM_BUTTON_B      2


#else

#error "Unknown badge revision!"

#endif

#endif // BADGE_PINS_H
