/*
 * PWM_prv.h
 *
 *  Created on: Sep 10, 2022
 *      Author: Mohamad Hassan
 */

#ifndef MCAL_PWM_PWM_PRV_H_
#define MCAL_PWM_PWM_PRV_H_

#define PWM_u8_TCCR1A_REG *((volatile u8*) 0x4F)
#define PWM_u8_TCCR1B_REG *((volatile u8*) 0x4E)
#define PWM_u8_TCNT1H_REG *((volatile u8*) 0x4D)
#define PWM_u8_TCNT1L_REG *((volatile u8*) 0x4C)
#define PWM_u8_OCR1AH_REG *((volatile u8*) 0x4B)
#define PWM_u8_OCR1AL_REG *((volatile u8*) 0x4A)
#define PWM_u8_OCR1BH_REG *((volatile u8*) 0x49)
#define PWM_u8_OCR1BL_REG *((volatile u8*) 0x48)
#define PWM_u8_ICR1H_REG  *((volatile u8*) 0x47)
#define PWM_u8_ICR1L_REG  *((volatile u8*) 0x46)
#define PWM_u8_TIMSK_REG  *((volatile u8*) 0x59)
#define PWM_u8_TIFR_REG   *((volatile u8*) 0x58)

#define PWM_u8_TCCR1A_WGM10_PIN 0
#define PWM_u8_TCCR1A_WGM11_PIN 1
#define PWM_u8_TCCR1A_FOC1B_PIN 2
#define PWM_u8_TCCR1A_FOC1A_PIN 3
#define PWM_u8_TCCR1A_COM1B0_PIN 4
#define PWM_u8_TCCR1A_COM1B1_PIN 5
#define PWM_u8_TCCR1A_COM1A0_PIN 6
#define PWM_u8_TCCR1A_COM1A1_PIN 7


#define PWM_u8_TCCR1B_CS10_PIN 0
#define PWM_u8_TCCR1B_CS11_PIN 1
#define PWM_u8_TCCR1B_CS12_PIN 2
#define PWM_u8_TCCR1B_WGM12_PIN 3
#define PWM_u8_TCCR1B_WGM13_PIN 4
#define PWM_u8_TCCR1B_ICES1_PIN 6
#define PWM_u8_TCCR1B_ICNC1_PIN 7

#define PWM_u8_TIMSK_TOIE1_BIT	2
#define PWM_u8_TIMSK_OCIE1B_BIT	3
#define PWM_u8_TIMSK_OCIE1A_BIT	4
#define PWM_u8_TIMSK_TICIE1_BIT	5

#define PWM_u8_TIFR_TOV1_BIT	2
#define PWM_u8_TIFR_OCF1B_BIT	3
#define PWM_u8_TIFR_OCF1A_BIT	4
#define PWM_u8_TIFR_ICF1_BIT	5


#endif /* MCAL_PWM_PWM_PRV_H_ */
