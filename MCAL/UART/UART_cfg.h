/*
 * UART_cfg.h
 *
 *  Created on: Sep 8, 2022
 *      Author: Mohamad Hassan
 */

#ifndef MCAL_UART_UART_CFG_H_
#define MCAL_UART_UART_CFG_H_
/*		options:
 * 				UART_BR_8M_2400
 * 				UART_BR_8M_4800
 * 				UART_BR_8M_9600
 * 				
 * 				UART_BR_16M_2400
 * 				UART_BR_16M_4800
 * 				UART_BR_16M_9600
 */
#define UART_u8_BAUD_RATE UART_BR_16M_9600


/*			options: 
 * 					UART_MODE_ASYNCHRONOUS 0
 *	 				UART_MODE_SYNCHRONOUS 1
 **/
#define UART_u8_MODE UART_MODE_ASYNCHRONOUS
/*		options:
 * 				UART_DATA_SIZE_5_BIT
 * 				UART_DATA_SIZE_6_BIT
 * 				UART_DATA_SIZE_7_BIT
 * 				UART_DATA_SIZE_8_BIT
 * 				UART_DATA_SIZE_9_BIT
 * */
#define UART_u8_DATA_SIZE UART_DATA_SIZE_8_BIT

/*		options:
 * 				UART_PARITY_MODE_NO_PARITY
 * 				UART_PARITY_MODE_EVEN_PARITY
 * 				UART_PARITY_MODE_ODD_PARITY
 * */
#define UART_u8_PARITY_MODE UART_PARITY_MODE_NO_PARITY

/*		options:
 * 				UART_STOP_BITS_1_BIT
 * 				UART_STOP_BITS_2_BIT
 * */
#define UART_u8_STOP_BITS UART_STOP_BITS_2_BIT





#endif /* MCAL_UART_UART_CFG_H_ */
