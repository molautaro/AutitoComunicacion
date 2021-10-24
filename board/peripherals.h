/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PERIPHERALS_H_
#define _PERIPHERALS_H_

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "fsl_common.h"
#include "fsl_uart.h"
#include "fsl_clock.h"
#include "usb_device_composite.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/
/* Definitions for BOARD_InitPeripherals functional group */
/* Definition of peripheral ID */
#define UART3_PERIPHERAL UART3
/* Definition of the clock source frequency */
#define UART3_CLOCK_SOURCE CLOCK_GetFreq(UART3_CLK_SRC)
/* UART3 interrupt vector ID (number). */
#define UART3_SERIAL_RX_TX_IRQN UART3_RX_TX_IRQn
/* UART3 interrupt handler identifier. */
#define UART3_SERIAL_RX_TX_IRQHANDLER UART3_RX_TX_IRQHandler
/* UART3 interrupt vector ID (number). */
#define UART3_SERIAL_ERROR_IRQN UART3_ERR_IRQn
/* UART3 interrupt handler identifier. */
#define UART3_SERIAL_ERROR_IRQHANDLER UART3_ERR_IRQHandler

/***********************************************************************************************************************
 * Global variables
 **********************************************************************************************************************/
extern const uart_config_t UART3_config;

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/

void BOARD_InitPeripherals(void);

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void);

#if defined(__cplusplus)
}
#endif

#endif /* _PERIPHERALS_H_ */
