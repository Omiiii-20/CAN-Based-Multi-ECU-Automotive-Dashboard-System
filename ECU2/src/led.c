/*
 * File:   led.c
 * Author: Ajinkya
 *
 * Created on November 4, 2025, 12:06 PM
 */


#include <xc.h>
#include "led.h"

void init_led(void) {
    LED_PORT_DDR = LED_PORT_DDR & 0X3C;
    LED_PORT = LED_PORT & 0X3C;
}