/*
 * global.h
 *
 *  Created on: Nov 5, 2023
 *      Author: mitph
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "main.h"

// 4 trạng thái của fsm
#define INIT		1
#define RED1_GRE2	2
#define RED1_YEL2	3
#define GRE1_RED2	4
#define YEL1_RED2	5

#define MODE1		6
#define MODE2		7
#define MODE3		8
#define MODE4		9

#define MAN_RED 	12
#define MAN_GRE		13
#define MAN_YEL		14

#define AUTO_RED	15
#define AUTO_GRE	16
#define AUTO_YEL	17

extern int status;
extern int GREEN;
extern int RED;
extern int YEL;
extern int led_buffer[4];
extern int counter0;
extern int counter1;
extern int counter2;
extern int counter3;
extern int counter4;
extern int led_index;
#endif /* INC_GLOBAL_H_ */

