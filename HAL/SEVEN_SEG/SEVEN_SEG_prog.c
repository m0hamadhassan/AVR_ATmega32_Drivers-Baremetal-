/*
 * SEVEN_SEG_prog.c
 *
 *  Created on: Aug 24, 2022
 *      Author: Mohamad Hassan
 */

#include"SEVEN_SEG_int.h"

/**************************************************************/
/* Name:		SEVEN_SEG_vidInit
 * Description: Initialize DIO for seven segment
 * Arguments:	vid
 * Return :		vid
 * */
void SEVEN_SEG_vidInit(void)
{
	DIO_vidInit();
}
/**************************************************************/
/* Name:		SEVEN_SEG_tenuDisplayNumber
 * Description: assign the desired value to the desired pin
 * Arguments:	 Copy_u8Number,    options( ZERO : NINE )
 * Return :		Error Status --> SEVEN_SEG_OK , SEVEN_SEG_NOK
 * */
SEVEN_SEG_tenuErrorStatus SEVEN_SEG_tenuDisplayNumber(u8 Copy_u8Number)
{
	SEVEN_SEG_tenuErrorStatus SEVEN_SEG_tenuErrorStatus=SEVEN_SEG_OK;
	/*checking arguments */
	if(Copy_u8Number>NINE)
	{
		SEVEN_SEG_tenuErrorStatus=SEVEN_SEG_NOK;
	}
	else
	{	/*implementation*/
		switch(Copy_u8Number)
			{
			case(ZERO):
				DIO_enuSetPortValue(SEVEN_SEG_PORT, SEVEN_SEG_u8ZERO);
				break;
			
			case(ONE):
				DIO_enuSetPortValue(SEVEN_SEG_PORT, SEVEN_SEG_u8ONE);
				break;
			
			case(TWO):
				DIO_enuSetPortValue(SEVEN_SEG_PORT, SEVEN_SEG_u8TWO);
				break;
			
			case(THREE):
				DIO_enuSetPortValue(SEVEN_SEG_PORT, SEVEN_SEG_u8THREE);
				break;
			
			case(FOUR):
				DIO_enuSetPortValue(SEVEN_SEG_PORT, SEVEN_SEG_u8FOUR);
				break;
			
			case(FIVE):
				DIO_enuSetPortValue(SEVEN_SEG_PORT, SEVEN_SEG_u8FIVE);
				break;
			
			case(SIX):
				DIO_enuSetPortValue(SEVEN_SEG_PORT, SEVEN_SEG_u8SIX);
				break;
			
			case(SEVEN):
				DIO_enuSetPortValue(SEVEN_SEG_PORT, SEVEN_SEG_u8SEVEN);
				break;
			
			case(EIGHT):
				DIO_enuSetPortValue(SEVEN_SEG_PORT, SEVEN_SEG_u8EIGHT);
				break;
			
			case(NINE):
				DIO_enuSetPortValue(SEVEN_SEG_PORT, SEVEN_SEG_u8NINE);
				break;
		}
		
		
	}
}
	
/**************************************************************/
