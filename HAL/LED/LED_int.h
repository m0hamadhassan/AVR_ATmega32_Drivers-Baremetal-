/*
 * LED_int.h
 *
 *  Created on: Aug 24, 2022
 *      Author: Mohamad Hassan
 */
#include"../../MCAL/DIO/DIO_int.h"
#include"../../LIB/STD_Types.h"
#include"../../LIB/BIT_Utils.h"
#ifndef HAL_LED_LED_INT_H_
#define HAL_LED_LED_INT_H_
/**************************************************************/
/*Error Status*/
typedef enum
{
	LED_OK,
	LED_NOK
}LED_tenuErrorStatus;
/**************************************************************/
/*Needed Functions*/

/**************************************************************/
/* Name:		LED_vidInit
 * Description: Initialize DIO for led
 * Arguments:	vid
 * Return :		vid
 * */
void LED_vidInit(void);
/* Name:		LED_enuTurnOn
 * Description: Turn led on
 * Arguments:	First Argument :Copy_u8Port,  options :(DIO_u8_PORTA,DIO_u8_PORTB,DIO_u8_PORTC,DIO_u8_PORTD)
 * 				Second Argument:Copy_u8Pin,   options ::(from DIO_u8_PIN0 to DIO_u8_PIN7)
 * Return :		Error Status --> LED_OK , LED_NOK
 * */
LED_tenuErrorStatus LED_enuTurnOn(u8 Copy_u8Port,u8 Copy_u8Pin);
/* Name:		LED_enuTurnOff
 * Description: Turn led off
 * Arguments:	First Argument :Copy_u8Port,  options :(DIO_u8_PORTA,DIO_u8_PORTB,DIO_u8_PORTC,DIO_u8_PORTD)
 * 				Second Argument:Copy_u8Pin,   options ::(from DIO_u8_PIN0 to DIO_u8_PIN7)
 * Return :		Error Status --> LED_OK , LED_NOK
 * */
LED_tenuErrorStatus LED_enuTurnOff(u8 Copy_u8Port,u8 Copy_u8Pin);
/* Name:		LED_enuTurnOff
 * Description: toggle led (if on set off or if off set on)
 * Arguments:	First Argument :Copy_u8Port,  options :(DIO_u8_PORTA,DIO_u8_PORTB,DIO_u8_PORTC,DIO_u8_PORTD)
 * 				Second Argument:Copy_u8Pin,   options ::(from DIO_u8_PIN0 to DIO_u8_PIN7)
 * Return :		Error Status --> LED_OK , LED_NOK
 * */
LED_tenuErrorStatus LED_enuToggleLed(u8 Copy_u8Port,u8 Copy_u8Pin);
/**************************************************************/

#endif /* HAL_LED_LED_INT_H_ */
