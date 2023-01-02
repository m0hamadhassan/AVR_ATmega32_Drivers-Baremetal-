/*
 * PWM_prog.c
 *
 *  Created on: Sep 10, 2022
 *      Author: Mohamad Hassan
 */
#include"PWM_int.h"
#include"PWM_prv.h"


void PWM_vidConfigure(PWM_tstrConfiguration Copy_strConfig)
{
	switch(Copy_strConfig.PWM_tenuTimerSelect)
	{
	case PWM_Timer1: 
		/*1- for fast pwm chose mode for OC1A and OC1B*/
		ASSIGN_REG(PWM_u8_TCCR1A_REG,(Copy_strConfig.PWM_tenuOC1B_Mode)<<4 );
		ASSIGN_REG(PWM_u8_TCCR1A_REG,(Copy_strConfig.PWM_tenuOC1A_Mode)<<6 );
		
		/*2- for fast pwm choose waveform generation mode*/
		ASSIGN_BIT(PWM_u8_TCCR1A_REG,PWM_u8_TCCR1A_WGM10_PIN,GET_BIT(Copy_strConfig.PWM_tenuWave_Form_Generation_Mode,0));
		ASSIGN_BIT(PWM_u8_TCCR1A_REG,PWM_u8_TCCR1A_WGM11_PIN,GET_BIT(Copy_strConfig.PWM_tenuWave_Form_Generation_Mode,1));
		ASSIGN_BIT(PWM_u8_TCCR1B_REG,PWM_u8_TCCR1B_WGM12_PIN,GET_BIT(Copy_strConfig.PWM_tenuWave_Form_Generation_Mode,2));
		ASSIGN_BIT(PWM_u8_TCCR1B_REG,PWM_u8_TCCR1B_WGM13_PIN,GET_BIT(Copy_strConfig.PWM_tenuWave_Form_Generation_Mode,3));
		/*2- choose clock source selection(prescaler)*/
		
		ASSIGN_REG(PWM_u8_TCCR1B_REG,Copy_strConfig.PWM_tenuClkSelection);

	}
}
PWM_tenuErrorStatus PWM_tenuStartGeneration(u16 Copy_u16TopValue,u16 Copy_u16DutyValue)
{
	
		/*set top value to control frequency*/
		PWM_u8_ICR1H_REG=  (u8)(Copy_u16TopValue>>8) ;		
		PWM_u8_ICR1L_REG= (u8)Copy_u16TopValue;
		
		
		 /*set duty value to control duty cycle*/
		PWM_u8_OCR1AH_REG=	(u8) (Copy_u16DutyValue>>8) ;
		PWM_u8_OCR1AL_REG= (u8) Copy_u16DutyValue;
		
}
