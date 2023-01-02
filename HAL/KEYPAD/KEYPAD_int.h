/*
 * KEYPAD_int.h
 *
 *  Created on: Aug 29, 2022
 *      Author: Mohamad Hassan
 */

#ifndef HAL_KEYPAD_KEYPAD_INT_H_
#define HAL_KEYPAD_KEYPAD_INT_H_

#define KEYPAD_NOT_PRESSED 0







/*
 * 
 * 
 * 
 */
void KEYPAD_vidInit(void);
/*
 * 
 * 
 * 
 */
void KEYPAD_vidGetPressedKey(u8 *Add_pu8KeyValue);

#endif /* HAL_KEYPAD_KEYPAD_INT_H_ */
