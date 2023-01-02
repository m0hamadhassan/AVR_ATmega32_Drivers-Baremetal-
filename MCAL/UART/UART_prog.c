/*
 * UART_prog.c
 *
 *  Created on: Sep 8, 2022
 *      Author: Mohamad Hassan
 */
#include"UART_cfg.h"
#include"UART_prv.h"
#include"UART_int.h"
void UART_vidInit( )
{
	/*1-setting baud rate*/
	ASSIGN_REG(UART_u8_UBRRL_REG,UART_u8_BAUD_RATE);
	/*2- setting mode */
	/*in order to access UCSRC URSEL bit must be set first */
	SET_BIT(UART_u8_UCSRC_REG,UART_u8_UCSRC_URSEL_BIT);
	/*Select synchronous or asynchronous*/
	ASSIGN_BIT(UART_u8_UCSRC_REG,UART_u8_UCSRC_UMSEL_BIT,UART_u8_MODE);
	/*3 setting parity mode */
	ASSIGN_REG(UART_u8_UCSRC_REG,(UART_u8_PARITY_MODE<<4));
	/*4- setting stop bits*/
	ASSIGN_BIT(UART_u8_UCSRC_REG,UART_u8_UCSRC_USBS_BIT,UART_u8_STOP_BITS);
	/*5- setting data size*/
	ASSIGN_REG(UART_u8_UCSRC_REG,(UART_DATA_SIZE_8_BIT<<1));
	
}
UART_tenu_LocalErrprStatus UART_enuSendData(u8 Copy_u8Data)
{
	/*1- enable TXEN */
	SET_BIT(UART_u8_UCSRB_REG,UART_u8_UCSRB_TXEN_BIT);
	/*wait for empty transmit buffer*/
	while(GET_BIT(UART_u8_UCSRA_REG,UART_u8_UCSRA_UDRE_BIT)==0);
	/*write data to UDR*/
	ASSIGN_REG(UART_u8_UDR_REG,Copy_u8Data);
	/*clear TXEN */
	CLR_BIT(UART_u8_UCSRB_REG,UART_u8_UCSRB_TXEN_BIT);
	
}
UART_tenu_LocalErrprStatus UART_enuRecieveData(u8* Copy_pu8Data)
{
	/*1* Enable RXEN*/
	SET_BIT(UART_u8_UCSRB_REG,UART_u8_UCSRB_RXEN_BIT);
	/*wait for data to be recieved in UDR*/
	while(GET_BIT(UART_u8_UCSRA_REG,UART_u8_UCSRA_RXC_BIT));
	/*assignm data to variable*/
	* Copy_pu8Data=UART_u8_UDR_REG;
}
