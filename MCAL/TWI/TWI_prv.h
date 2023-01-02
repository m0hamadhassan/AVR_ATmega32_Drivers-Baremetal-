/*
 * TWI_prv.h
 *
 *  Created on: Sep 14, 2022
 *      Author: Mohamad Hassan
 */

#ifndef MCAL_TWI_TWI_PRV_H_
#define MCAL_TWI_TWI_PRV_H_

#define TWI_u8_TWBR_REG *((volatile u8*) 0x20)
#define TWI_u8_TWCR_REG *((volatile u8*) 0x56)
#define TWI_u8_TWSR_REG *((volatile u8*) 0x21)
#define TWI_u8_TWDR_REG *((volatile u8*) 0x23)
#define TWI_u8_TWAR_REG *((volatile u8*) 0x22)

/*TWCR register pins */
#define TWI_u8_TWCR_TWINT_PIN 	7
#define TWI_u8_TWCR_TWEA_PIN 	6
#define TWI_u8_TWCR_TWSTA_PIN 	5
#define TWI_u8_TWCR_TWSTO_PIN 	4
#define TWI_u8_TWCR_TWWC_PIN 	3
#define TWI_u8_TWCR_TWEN_PIN    2
#define TWI_u8_TWCR_TWIE_PIN 	0
#endif /* MCAL_TWI_TWI_PRV_H_ */
