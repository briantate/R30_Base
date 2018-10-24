/*
 * debugUart.h
 *
 * Created: 10/23/2018 8:35:26 AM
 *  Author: C41175
 */ 


#ifndef DEBUGUART_H_
#define DEBUGUART_H_

#include "conf_board.h"
#include "asf.h"

#define DEBUG_UART_MODULE       SERCOM0
#define DEBUG_UART_MUX_SETTING  USART_RX_1_TX_0_XCK_1
#define DEBUG_UART_PINMUX_PAD0  PINMUX_PA04D_SERCOM0_PAD0
#define DEBUG_UART_PINMUX_PAD1  PINMUX_PA05D_SERCOM0_PAD1
#define DEBUG_UART_PINMUX_PAD2  PINMUX_UNUSED
#define DEBUG_UART_PINMUX_PAD3  PINMUX_UNUSED
//#define DEBUG_UART_DMAC_ID_TX   SERCOM0_DMAC_ID_TX
//#define DEBUG_UART_DMAC_ID_RX   SERCOM0_DMAC_ID_RX

/************************************************************************
 * Function declarations
 ************************************************************************/
void configure_console(void);

#endif /* DEBUGUART_H_ */