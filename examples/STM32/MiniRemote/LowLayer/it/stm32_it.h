/** ____________________________________________________________________
 *
 * 	@file		stm32_it.h
 *
 *	@brief 		STM32 interrupts header file
 *
 *				<center><a href="https://www.basecamelectronics.com">
 *				www.basecamelectronics.com</a>
 *	____________________________________________________________________
 *
 *	@attention	<center><h3>
 *	Copyright © 2023 BaseCam Electronics™.</h3></center>
 *	<center>All rights reserved.</center>
 *
 *	Licensed under the Apache License, Version 2.0 (the "License");
 *	you may not use this file except in compliance with the License.
 *	You may obtain a copy of the License at
 *
 *	http://www.apache.org/licenses/LICENSE-2.0
 *
 *	Unless required by applicable law or agreed to in writing, software
 *	distributed under the License is distributed on an "AS IS" BASIS,
 *	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
 *	implied. See the License for the specific language governing
 *	permissions and limitations under the License.
 *	____________________________________________________________________
 */

#ifndef		_STM32_IT_H_
#define 	_STM32_IT_H_

#ifdef		__cplusplus
extern		"C" {
#endif
/*  = = = = = = = = = = = = = = = = = = = = = = = */

#include	"gimbal.h"

/* Other includes */
#include	"digitalJoystick.h"
#include	"analogInput.h"


/* ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 * 								 Function Prototypes
 */
void NMI_Handler (void);
void HardFault_Handler (void);
void MemManage_Handler (void);
void BusFault_Handler (void);
void UsageFault_Handler (void);
void DebugMon_Handler (void);
#if (DRV_USE_FREERTOS == 0)
	void SVC_Handler (void);
	void PendSV_Handler (void);
	void SysTick_Handler (void);
#endif

#if (DRV_USE_CUBEMX == SET_OFF)
	#if defined (DRV_HAL_TIMER) || defined (DRV_LL_TIMER)
		void SBGC_TIMER_IRQ_HANDLER (void);
	#endif

	void SBGC_UART_IRQ_HANDLER (void);

	#if (DRV_HAL_DMA_UART) || (DRV_LL_DMA_UART)
		void SBGC_UART_DMA_TX_CH_IRQ_HANDLER (void);
		void SBGC_UART_DMA_RX_CH_IRQ_HANDLER (void);
	#endif
#endif

void DJOY_XCH_TIM_IRQ_HANDLER (void);
void DJOY_YCH_TIM_IRQ_HANDLER (void);
void GENERAL_ADC_DMA_IRQ_HANDLER (void);

/*  = = = = = = = = = = = = = = = = = = = = = = = */
#ifdef		__cplusplus
			}
#endif

#endif		/* _STM32_IT_H_ */
