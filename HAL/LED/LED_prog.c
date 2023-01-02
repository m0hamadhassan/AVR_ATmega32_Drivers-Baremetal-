/*
 * LED_prog.c
 *
 *  Created on: Aug 24, 2022
 *      Author: Mohamad Hassan
 */
#include"LED_int.h"


/* Name:		LED_vidInit
 * Description: Initialize DIO for led
 * Arguments:	vid
 * Return :		vid
 * */
void LED_vidInit(void)
{
	DIO_vidInit();
}
/* Name:		LED_enuTurnOn
 * Description: Turn led on
 * Arguments:	First Argument :Copy_u8Port,  options :(DIO_u8_PORTA,DIO_u8_PORTB,DIO_u8_PORTC,DIO_u8_PORTD)
 * 				Second Argument:Copy_u8Pin,   options ::(from DIO_u8_PIN0 to DIO_u8_PIN7)
 * Return :		Error Status --> LED_OK , LED_NOK
 * */
LED_tenuErrorStatus LED_enuTurnOn(u8 Copy_u8Port,u8 Copy_u8Pin)
{
	LED_tenuErrorStatus Local_enuErrorStatus= LED_OK;
	if ((Copy_u8Port>DIO_u8_PORTD) || (Copy_u8Pin>DIO_u8_PIN7))
	{
		Local_enuErrorStatus= LED_NOK;
	}
	else
	{
		DIO_enuSetPinValue(Copy_u8Port, Copy_u8Pin, DIO_u8_HIGH);
		
	}
	return Local_enuErrorStatus;
}
/* Name:		LED_enuTurnOff
 * Description: Turn led off
 * Arguments:	First Argument :Copy_u8Port,  options :(DIO_u8_PORTA,DIO_u8_PORTB,DIO_u8_PORTC,DIO_u8_PORTD)
 * 				Second Argument:Copy_u8Pin,   options ::(from DIO_u8_PIN0 to DIO_u8_PIN7)
 * Return :		Error Status --> LED_OK , LED_NOK
 * */

LED_tenuErrorStatus LED_enuTurnOff(u8 Copy_u8Port,u8 Copy_u8Pin)
{

	LED_tenuErrorStatus Local_enuErrorStatus= LED_OK;
	if ((Copy_u8Port>DIO_u8_PORTD) || (Copy_u8Pin>DIO_u8_PIN7))
	{
		Local_enuErrorStatus= LED_NOK;
	}
	else
	{
		DIO_enuSetPinValue(Copy_u8Port, Copy_u8Pin, DIO_u8_LOW);
		
	}
	return Local_enuErrorStatus;
}
/* Name:		LED_enuTurnOff
 * Description: toggle led (if on set off or if off set on)
 * Arguments:	First Argument :Copy_u8Port,  options :(DIO_u8_PORTA,DIO_u8_PORTB,DIO_u8_PORTC,DIO_u8_PORTD)
 * 				Second Argument:Copy_u8Pin,   options ::(from DIO_u8_PIN0 to DIO_u8_PIN7)
 * Return :		Error Status --> LED_OK , LED_NOK
 * */
LED_tenuErrorStatus LED_enuToggleLed(u8 Copy_u8Port,u8 Copy_u8Pin)
{
	u8 Local_u8LedStatus;
	DIO_enuGetPinValue(Copy_u8Port, Copy_u8Pin, &Local_u8LedStatus);
	switch(Local_u8LedStatus)
	{
	case(DIO_u8_LOW):
		DIO_enuSetPinValue(Copy_u8Port, Copy_u8Pin, DIO_u8_HIGH);
			break;
	case(DIO_u8_HIGH):
		DIO_enuSetPinValue(Copy_u8Port, Copy_u8Pin, DIO_u8_LOW);
			break;
	}
}
/**************************************************************/
