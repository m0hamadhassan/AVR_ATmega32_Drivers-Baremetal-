/*
 * GPT_prog.c
 *
 *  Created on: Sep 6, 2022
 *      Author: Mohamad Hassan
 */

#include"GPT_int.h"
#include"GPT_prv.h"
#include "../G_INT/G_INT_int.h"



u16 Global_u16Prescaler=0;



struct ptr
{
	func_ptr GPT_TIMER0_FuncPtr;
	func_ptr GPT_TIMER1_FuncPtr;
	func_ptr GPT_TIMER2_FuncPtr;

}GPT_ISR;

void GPT_vidConfigure(GPT_tenuTimerSelect Copy_enuTimer,GPT_tenuGenerationMode Copy_enuTimerMode,u16 Copy_u16Preload,u16 Copy_u16OutCompare)
{
	
	switch(Copy_enuTimer)
	{
	case GPT_Timer0:
		
		/*1-Enable Timer interrupt and global interrupt and ocr value */
		G_INT_vidEnable();
		switch(Copy_enuTimerMode)
		{
		case GPT_Normal_Mode: 
		SET_BIT(GPT_u8_TIMSK_REG,GPT_u8_TIMSK_TOIE0_BIT);
		
		CLR_BIT(GPT_u8_TCCR0_REG,GPT_u8_TCCR0_WGM00_BIT);
		CLR_BIT(GPT_u8_TCCR0_REG,GPT_u8_TCCR0_WGM01_BIT);
		ASSIGN_REG(GPT_u8_TCNT0_REG,(u8)Copy_u16Preload);
		
		break;
		case  GPT_CTC_Mode: 
		SET_BIT(GPT_u8_TIMSK_REG,GPT_u8_TIMSK_OCIE0_BIT);
		
		CLR_BIT(GPT_u8_TCCR0_REG,GPT_u8_TCCR0_WGM00_BIT);
		SET_BIT(GPT_u8_TCCR0_REG,GPT_u8_TCCR0_WGM01_BIT);
		
		ASSIGN_REG(GPT_u8_TCCR0_REG,(u8)Copy_u16OutCompare);
		break;
		}
		break;
	}
	
}

GPT_tenuErrorStatus GPT_enuStartTimer(GPT_tenuClkSelection Copy_enuPrescaler)
{
	/*1- configure prescaler for timer 0*/
	ASSIGN_REG(GPT_u8_TCCR0_REG,Copy_enuPrescaler);
}
GPT_tenuErrorStatus GPT_enuChangePreload(GPT_tenuTimerSelect Copy_enuTimer,u16 Copy_u16Preload)
{

	switch(Copy_enuTimer)
	{
	case GPT_Timer0:
	ASSIGN_REG(GPT_u8_TCNT0_REG,(u8)Copy_u16Preload);
	break;
	}
}
GPT_tenuErrorStatus GPT_enuStopTimer(GPT_tenuTimerSelect Copy_enuTimer)
{

	switch(Copy_enuTimer)
		{
		case GPT_Timer0:
			CLR_BIT(GPT_u8_TCCR0_REG,GPT_u8_TCCR0_CS00_BIT);
			CLR_BIT(GPT_u8_TCCR0_REG,GPT_u8_TCCR0_CS01_BIT);
			CLR_BIT(GPT_u8_TCCR0_REG,GPT_u8_TCCR0_CS02_BIT);
			break;
			
		}
}
GPT_tenuErrorStatus GPT_vidRegisterCBF(GPT_tenuTimerSelect Copy_enuTimer,func_ptr Add_pfunCBF)
{
	switch(Copy_enuTimer)
	{
	case GPT_Timer0:
		GPT_ISR.GPT_TIMER0_FuncPtr=Add_pfunCBF;
		break;
	case GPT_Timer1:
		GPT_ISR.GPT_TIMER1_FuncPtr=Add_pfunCBF;
		break;
	case GPT_Timer2:
		GPT_ISR.GPT_TIMER2_FuncPtr=Add_pfunCBF;
		break;
	}
}

/*Timer0 ISR*/
void __vector_11(vid) __attribute((signal,used));
void __vector_11(vid)
{
	GPT_ISR.GPT_TIMER0_FuncPtr();
}


