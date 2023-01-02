/*
 * SEVEN_SEG_int.h
 *
 *  Created on: Aug 24, 2022
 *      Author: Mohamad Hassan
 */
#include"../../LIB/STD_Types.h"
#include"../../MCAL/DIO/DIO_int.h"
#include"SEVEN_SEG_cfg.h"
#include"SEVEN_SEG_prv.h"

#ifndef HAL_SEVEN_SEG_SEVEN_SEG_INT_H_
#define HAL_SEVEN_SEG_SEVEN_SEG_INT_H_

/************************ macros ******************************/
/*macros for numbers from 0 to 9*/
#define ZERO	0
#define ONE		1
#define TWO		2
#define THREE	3
#define FOUR	4
#define FIVE	5
#define SIX		6
#define SEVEN	7
#define EIGHT	8
#define NINE	9
/**************************************************************/
/*Error Status*/
typedef enum
{
	SEVEN_SEG_OK,
	SEVEN_SEG_NOK
}SEVEN_SEG_tenuErrorStatus;
/**************************************************************/
/* Name:		SEVEN_SEG_vidInit
 * Description: Initialize DIO for seven segment
 * Arguments:	vid
 * Return :		vid
 * */
void SEVEN_SEG_vidInit(void);
/**************************************************************/
/* Name:		SEVEN_SEG_tenuDisplayNumber
 * Description: assign the desired value to the desired pin
 * Arguments:	 Copy_u8Number,    options( ZERO : NINE )
 * Return :		Error Status --> SEVEN_SEG_OK , SEVEN_SEG_NOK
 * */
SEVEN_SEG_tenuErrorStatus SEVEN_SEG_tenuDisplayNumber(u8 Copy_u8Number);

/**************************************************************/
#endif /* HAL_SEVEN_SEG_SEVEN_SEG_INT_H_ */
