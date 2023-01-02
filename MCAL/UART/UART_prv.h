/*
 * UART_prv.h
 *
 *  Created on: Sep 8, 2022
 *      Author: Mohamad Hassan
 */

#ifndef MCAL_UART_UART_PRV_H_
#define MCAL_UART_UART_PRV_H_

/*UART Registers*/
#define UART_u8_UDR_REG   *((volatile u8*) 0x2C)
#define UART_u8_UCSRA_REG *((volatile u8*) 0x2B)
#define UART_u8_UCSRB_REG *((volatile u8*) 0x2A)
#define UART_u8_UCSRC_REG *((volatile u8*) 0x40)
#define UART_u8_UBRRL_REG *((volatile u8*) 0x29)
#define UART_u8_UBRRH_REG *((volatile u8*) 0x40)


#define UART_u8_UCSRA_MPCM_BIT 0
#define UART_u8_UCSRA_U2X_BIT 1
#define UART_u8_UCSRA_PE_BIT 2
#define UART_u8_UCSRA_DOR_BIT 3
#define UART_u8_UCSRA_FE_BIT 4
#define UART_u8_UCSRA_UDRE_BIT 5
#define UART_u8_UCSRA_TXC_BIT 6
#define UART_u8_UCSRA_RXC_BIT 7

#define UART_u8_UCSRB_TXB8_BIT 0
#define UART_u8_UCSRB_RXB8_BIT 1
#define UART_u8_UCSRB_UCSZ2_BIT 2
#define UART_u8_UCSRB_TXEN_BIT 3
#define UART_u8_UCSRB_RXEN_BIT 4
#define UART_u8_UCSRB_UDRIE_BIT 5
#define UART_u8_UCSRB_TXCIE_BIT 6
#define UART_u8_UCSRB_RXCIE_BIT 7

#define UART_u8_UCSRC_UCPOL_BIT 0
#define UART_u8_UCSRC_UCSZ0_BIT 1
#define UART_u8_UCSRC_UCSZ1_BIT 2
#define UART_u8_UCSRC_USBS_BIT 3
#define UART_u8_UCSRC_UPM0_BIT 4
#define UART_u8_UCSRC_UPM1_BIT 5
#define UART_u8_UCSRC_UMSEL_BIT 6
#define UART_u8_UCSRC_URSEL_BIT 7


#define UART_u8_UBRRH_URSEL_BIT 7


#define	UART_BR_8M_2400 207
#define	UART_BR_8M_4800 103
#define UART_BR_8M_9600 51 

#define	UART_BR_16M_2400 416
#define	UART_BR_16M_4800 207 
#define	UART_BR_16M_9600 103

#define UART_MODE_ASYNCHRONOUS 0
#define UART_MODE_SYNCHRONOUS 1

#define	UART_DATA_SIZE_5_BIT 0
#define	UART_DATA_SIZE_6_BIT 1
#define	UART_DATA_SIZE_7_BIT 2
#define	UART_DATA_SIZE_8_BIT 3
#define	UART_DATA_SIZE_9_BIT 7


#define UART_PARITY_MODE_NO_PARITY 		0
#define UART_PARITY_MODE_EVEN_PARITY 	2
#define UART_PARITY_MODE_ODD_PARITY		3

#define UART_STOP_BITS_1_BIT 0
#define UART_STOP_BITS_2_BIT 1

#endif /* MCAL_UART_UART_PRV_H_ */
