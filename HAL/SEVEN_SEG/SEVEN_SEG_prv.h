/*
 * SEVEN_SEG_prv.h
 *
 *  Created on: Aug 24, 2022
 *      Author: Mohamad Hassan
 */

#ifndef HAL_SEVEN_SEG_SEVEN_SEG_PRV_H_
#define HAL_SEVEN_SEG_SEVEN_SEG_PRV_H_


/*Define Seven segment values according to type*/
/**************************************************************/
#if SEVEN_SEG_MODE == SEVEN_SEG_COMM_CATHODE
 //Common cathode values
#define SEVEN_SEG_u8ZERO 	0x3F
#define SEVEN_SEG_u8ONE		0x06
#define SEVEN_SEG_u8TWO 	0x5B
#define SEVEN_SEG_u8THREE 	0x4F
#define SEVEN_SEG_u8FOUR 	0x66
#define SEVEN_SEG_u8FIVE 	0x6D
#define SEVEN_SEG_u8SIX 	0x7D
#define SEVEN_SEG_u8SEVEN 	0x07
#define SEVEN_SEG_u8EIGHT	0x7F
#define SEVEN_SEG_u8NINE	0x6F
#elif SEVEN_SEG_MODE == SEVEN_SEG_COMM_ANODE
//Common Anode values
#define SEVEN_SEG_u8ZERO 	0xC0
#define SEVEN_SEG_u8ONE	 	0xF9
#define SEVEN_SEG_u8TWO 	0xA4
#define SEVEN_SEG_u8THREE 	0xB0
#define SEVEN_SEG_u8FOUR 	0x99
#define SEVEN_SEG_u8FIVE 	0x92
#define SEVEN_SEG_u8SIX 	0x82
#define SEVEN_SEG_u8SEVEN 	0xF8
#define SEVEN_SEG_u8EIGHT	0x80
#define SEVEN_SEG_u8NINE	0x90
#endif
/**************************************************************/

#endif /* HAL_SEVEN_SEG_SEVEN_SEG_PRV_H_ */
