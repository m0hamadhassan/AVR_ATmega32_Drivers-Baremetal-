/*
 * GPT_int.h
 *
 *  Created on: Sep 6, 2022
 *      Author: Mohamad Hassan
 */
#include"../../LIB/STD_Types.h"
#include"../../LIB/BIT_Utils.h"
#ifndef MCAL_GPT_GPT_INT_H_
#define MCAL_GPT_GPT_INT_H_

typedef enum
{
	GPT_OK,
	GPT_NOK
}GPT_tenuErrorStatus;


typedef enum
{
	GPT_Timer0=0,
	GPT_Timer1,
	GPT_Timer2
}GPT_tenuTimerSelect;

typedef enum
{
	GPT_No_ClkSource=0,
	GPT_No_Prescaling,
	GPT_Prescaler_8,
	GPT_Prescaler_64,
	GPT_Prescaler_256,
	GPT_Prescaler_1024,
	GPT_ExternalFallingEdge,
	GPT_ExternalRisingEdge
}GPT_tenuClkSelection;
typedef enum
{
	GPT_Normal_Mode=0,
	GPT_CTC_Mode=2
}GPT_tenuGenerationMode;


void GPT_vidConfigure(GPT_tenuTimerSelect Copy_enuTimer,GPT_tenuGenerationMode Copy_enuTimerMode,u16 Copy_u16Preload,u16 Copy_u16OutCompare);
GPT_tenuErrorStatus GPT_enuStartTimer(GPT_tenuClkSelection Copy_enuPrescaler);
GPT_tenuErrorStatus GPT_enuChangePreload(GPT_tenuTimerSelect Copy_enuTimer,u16 Copy_u16Preload);
GPT_tenuErrorStatus GPT_enuStopTimer(GPT_tenuTimerSelect Copy_enuTimer);
GPT_tenuErrorStatus GPT_vidRegisterCBF(GPT_tenuTimerSelect Copy_enuTimer,func_ptr Add_pfunCBF);





#endif /* MCAL_GPT_GPT_INT_H_ */
 

