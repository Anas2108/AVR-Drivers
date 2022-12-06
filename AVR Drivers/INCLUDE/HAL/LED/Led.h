/*
 * Led.h
 *
 *  Created on: Sep 4, 2022
 *      Author: ANOOS
 */

#ifndef INCLUDE_HAL_LED_LED_H_
#define INCLUDE_HAL_LED_LED_H_

#include "../../../SERVICES/STD_TYPES.h"





typedef struct {

	u8 portId;
	u8 pinId;
	u8 Active_State;
	u8 Curent_State;


}Led_str;

//FOR active high and active low

#define LED_u8_Active_High 1

#define LED_u8_Active_Low 0


//for the value of active H OR L
#define LED_u8_Active_Low_L 1
#define LED_u8_Active_Low_H 0

#define LED_u8_Active_High_H 1
#define LED_u8_Active_High_L 0


/* To turn the led on */
void Led_voidTurnOn(Led_str * Add_ledStrPointer);

/* To turn the led off */
void Led_voidTurnOff(Led_str * Add_ledStrPointer);

/* set the direction of led (OUTPUT) */
void Led_voidSetLedDir(Led_str *Add_ledStrPointer);

/* To toggle the led H>>L or L>>H */
void Led_voidToggle(Led_str * Add_ledStrPointer);





#endif /* INCLUDE_HAL_LED_LED_H_ */
