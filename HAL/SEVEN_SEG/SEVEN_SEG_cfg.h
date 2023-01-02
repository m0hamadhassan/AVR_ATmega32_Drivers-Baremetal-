/*
 * SEVEN_SEG_cfg.h
 *
 *  Created on: Aug 24, 2022
 *      Author: Mohamad Hassan
 */

#ifndef HAL_SEVEN_SEG_SEVEN_SEG_CFG_H_
#define HAL_SEVEN_SEG_SEVEN_SEG_CFG_H_
/**************************************************************/
/*Select operating mode of seven segment
 *  Options :
 * 			1- SEVEN_SEG_COMM_ANODE
 * 			2- SEVEN_SEG_COMM_CATHODE
 * */
#define SEVEN_SEG_COMM_ANODE   0
#define SEVEN_SEG_COMM_CATHODE 1

#define SEVEN_SEG_MODE SEVEN_SEG_COMM_CATHODE

/**************************************************************/
/* select connected port of seven segment
 * Options :
 * 			1- DIO_u8_PORTA 	
			2- DIO_u8_PORTB 	
			3- DIO_u8_PORTC 	
			4- DIO_u8_PORTD
 * */
#define SEVEN_SEG_PORT DIO_u8_PORTD
/**************************************************************/
#endif /* HAL_SEVEN_SEG_SEVEN_SEG_CFG_H_ */



