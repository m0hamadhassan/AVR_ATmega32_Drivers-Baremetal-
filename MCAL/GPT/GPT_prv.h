/*
 * GPT_prv.h
 *
 *  Created on: Sep 6, 2022
 *      Author: Mohamad Hassan
 */

#ifndef MCAL_GPT_GPT_PRV_H_
#define MCAL_GPT_GPT_PRV_H_


/*Timer Registers*/
#define GPT_u8_TCCR0_REG *((volatile u8*) 0x53)
#define GPT_u8_TCNT0_REG *((volatile u8*) 0x52)
#define GPT_u8_OCR0_REG  *((volatile u8*) 0x5C)

#define GPT_u8_TIMSK_REG *((volatile u8*) 0x59)
#define GPT_u8_TIFR_REG  *((volatile u8*) 0x58)


/*TCCR0 Pins*/
#define GPT_u8_TCCR0_CS00_BIT	0
#define GPT_u8_TCCR0_CS01_BIT	1
#define GPT_u8_TCCR0_CS02_BIT	2
#define GPT_u8_TCCR0_WGM01_BIT	3
#define GPT_u8_TCCR0_COM00_BIT	4
#define GPT_u8_TCCR0_COM01_BIT	5
#define GPT_u8_TCCR0_WGM00_BIT	6
#define GPT_u8_TCCR0_FOC0_BIT	7


/*TIMSK pins*/
#define GPT_u8_TIMSK_TOIE0_BIT	0
#define GPT_u8_TIMSK_OCIE0_BIT	1
#define GPT_u8_TIMSK_TOIE1_BIT	2
#define GPT_u8_TIMSK_OCIE1B_BIT	3
#define GPT_u8_TIMSK_OCIE1A_BIT	4
#define GPT_u8_TIMSK_TICIE1_BIT	5
#define GPT_u8_TIMSK_TOIE2_BIT	6
#define GPT_u8_TIMSK_OCIE2_BIT	7


/*TIFR Pins*/
#define GPT_u8_TIFR_TOV0_BIT	0
#define GPT_u8_TIFR_OCF0_BIT	1
#define GPT_u8_TIFR_TOV1_BIT	2
#define GPT_u8_TIFR_OCF1B_BIT	3
#define GPT_u8_TIFR_OCF1A_BIT	4
#define GPT_u8_TIFR_ICF1_BIT	5
#define GPT_u8_TIFR_TOV2_BIT	6
#define GPT_u8_TIFR_OCF2_BIT	7



#endif /* MCAL_GPT_GPT_PRV_H_ */
