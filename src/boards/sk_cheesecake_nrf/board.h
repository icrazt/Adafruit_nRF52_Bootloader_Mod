/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2026 SK
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _SK_CHEESECAKE_NRF_H
#define _SK_CHEESECAKE_NRF_H

#define UICR_REGOUT0_VALUE UICR_REGOUT0_VOUT_3V3

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER          1
#define LED_PRIMARY_PIN      PINNUM(1, 2) // RLED_C, common-anode RGB LED
#define LED_STATE_ON         0

#define LED_RGB_RED_PIN      PINNUM(1, 2)
#define LED_RGB_GREEN_PIN    PINNUM(1, 4)
#define LED_RGB_BLUE_PIN     PINNUM(1, 6)
#define BOARD_RGB_BRIGHTNESS 0x101010

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTON_DFU     PINNUM(0, 18) // RESET, only pad
#define BUTTON_DFU_OTA PINNUM(1, 10) // UBTN1
#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

/*------------------------------------------------------------------*/
/* Power safety pins
 *------------------------------------------------------------------*/
#define SYSOFF_PIN  PINNUM(1, 13)
#define PWR_LSM_PIN PINNUM(0, 12)
#define HEAT_EN_PIN PINNUM(0, 31)

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER "SK"
#define BLEDIS_MODEL        "SK Cheesecake nRF52840"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
// Temporary Adafruit test VID/PID for development boards.
#define USB_DESC_VID          0x239A
#define USB_DESC_UF2_PID      0x0029
#define USB_DESC_CDC_ONLY_PID 0x002A

//--------------------------------------------------------------------+
// UF2
//--------------------------------------------------------------------+
#define UF2_PRODUCT_NAME "SK Cheesecake nRF52840"
#define UF2_VOLUME_LABEL "CHEESEBOOT"
#define UF2_BOARD_ID     "nRF52840-SK-Cheesecake-v1"
#define UF2_INDEX_URL    "https://github.com/icrazt"

#endif // _SK_CHEESECAKE_NRF_H
