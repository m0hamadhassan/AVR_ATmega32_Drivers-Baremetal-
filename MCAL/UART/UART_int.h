/*
 * UART_int.h
 *
 *  Created on: Sep 8, 2022
 *      Author: Mohamad Hassan
 */
#include"../../LIB/BIT_Utils.h"
#include"../../LIB/STD_Types.h"

#ifndef MCAL_UART_UART_INT_H_
#define MCAL_UART_UART_INT_H_
typedef enum
{
	UART_OK=0,
	UART_NOK=0,
}UART_tenu_LocalErrprStatus;


void UART_vidInit( );
UART_tenu_LocalErrprStatus UART_enuSendData(u8 Copy_u8Data);
UART_tenu_LocalErrprStatus UART_enuRecieveData(u8* Copy_pu8Data);




#endif /* MCAL_UART_UART_INT_H_ */
