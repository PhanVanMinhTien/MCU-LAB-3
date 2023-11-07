/*
 * led_display.h
 *
 *  Created on: Nov 7, 2023
 *      Author: mitph
 */

#ifndef INC_LED_DISPLAY_H_
#define INC_LED_DISPLAY_H_

void display7SED();
void setRED1();
void setRED2();
void setGRE1();
void setGRE2();
void setYEL1();
void setYEL2();

void set_led();

void update7SEG();
void updateBufferMode1();
void updateBufferMode2();
void updateBufferMode3();
void updateBufferMode4();
void led_blinky();
#endif /* INC_LED_DISPLAY_H_ */
