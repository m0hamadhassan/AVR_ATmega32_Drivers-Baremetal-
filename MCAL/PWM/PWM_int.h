/*
 * PWM_int.h
 *
 *  Created on: Sep 10, 2022
 *      Author: Mohamad Hassan
 */
#include"../../LIB/BIT_Utils.h"
#include"../../LIB/STD_Types.h"

#ifndef MCAL_PWM_PWM_INT_H_
#define MCAL_PWM_PWM_INT_H_

typedef enum
{
	PWM_OK,
	PWM_NOK
}PWM_tenuErrorStatus;
	
	/*******Input Configure ****************/
typedef  struct 
{

	 enum
	{
		PWM_Timer0=0,
		PWM_Timer1,
		PWM_Timer2
	}PWM_tenuTimerSelect;

	enum
	{
		PWM_Fast=0,
		PWM_Phase_Correct=2
	}PWM_tenuGenerationMode;
	
	enum
	{
		PWM_OC1A_Disconnected=0,
		PWM_OC1A_NON_Inverting_Mode=2,
		PWM_OC1A_Inverting_Mode
	}PWM_tenuOC1A_Mode;
	
	enum
	{
		PWM_OC1B_Disconnected=0,
		PWM_OC1B_NON_Inverting_Mode=2,
		PWM_OC1B_Inverting_Mode
	}PWM_tenuOC1B_Mode;
	
	enum
	{
		PWM_Fast_ICR1_Top =14,
		PWM_Fast_OCR1A_Top 
	}PWM_tenuWave_Form_Generation_Mode;
	
	enum
	{
		PWM_No_ClkSource=0,
		PWM_No_Prescaling,
		PWM_Prescaler_8,
		PWM_Prescaler_64,
		PWM_Prescaler_256,
		PWM_Prescaler_1024,
		PWM_ExternalFallingEdge,
		PWM_ExternalRisingEdge
	}PWM_tenuClkSelection;
	

}PWM_tstrConfiguration;

void PWM_vidConfigure(PWM_tstrConfiguration Copy_strConfig);
PWM_tenuErrorStatus PWM_tenuStartGeneration(u16 Copy_u16TopValue,u16 Copy_u16DutyValue);



#endif /* MCAL_PWM_PWM_INT_H_ */
