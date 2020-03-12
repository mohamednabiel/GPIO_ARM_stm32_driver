/*
 * GPIOR.h
 *
 *  Created on: Jul 18, 2019
 *      Author: GEEK
 */

#ifndef GPIOR_H_
#define GPIOR_H_

#include "std_types.h"

#define PORTA_BASE           ((u32)0x40020000) /*!< Peripheral base address in the alias region    */
#define PORTB_BASE           ((u32)0x40020400) /*!< Peripheral base address in the alias region    */
#define PORTC_BASE           ((u32)0x40020800) /*!< Peripheral base address in the alias region    */
#define PORTD_BASE           ((u32)0x40020C00) /*!< Peripheral base address in the alias region    */
#define PORTE_BASE           ((u32)0x40021000) /*!< Peripheral base address in the alias region    */
#define PORTF_BASE           ((u32)0x40021400) /*!< Peripheral base address in the alias region    */
#define PORTG_BASE           ((u32)0x40021800) /*!< Peripheral base address in the alias region    */
#define PORTH_BASE           ((u32)0x40021C00) /*!< Peripheral base address in the alias region    */
#define PORTI_BASE           ((u32)0x40022000) /*!< Peripheral base address in the alias region    */
#define PORTJ_BASE           ((u32)0x40022400) /*!< Peripheral base address in the alias region    */
#define PORTK_BASE           ((u32)0x40022800) /*!< Peripheral base address in the alias region    */
#define RCC_BASE		     ((u32)0x40023800) /*!< Peripheral base address in the alias region    */

//RCC

#define SYSCFG_CMPCR   *((volatile u32*)(RCC_BASE)+(0x20)) /*!< GPIO alternate function high register,    Address offset: 0x20 */
#define RCC_AHB1ENR    *((volatile u32*)(RCC_BASE)+(0x30)) /*!< GPIO alternate function high register,    Address offset: 0x30 */
#define RCC_APB2ENR    *((volatile u32*)(RCC_BASE)+(0x44)) /*!< GPIO alternate function high register,    Address offset: 0x44 */


//portA


#define MODER_PORTA    *((volatile u32*)(PORTA_BASE)+(0x00)) /*!< GPIO port mode               register,    Address offset: 0x00      */
#define OTYPER_PORTA   *((volatile u32*)(PORTA_BASE)+(0x04)) /*!< GPIO port output type        register,    Address offset: 0x04      */
#define OSPEEDR_PORTA  *((volatile u32*)(PORTA_BASE)+(0x08)) /*!< GPIO port output speed       register,    Address offset: 0x08      */
#define PUPDR_PORTA    *((volatile u32*)(PORTA_BASE)+(0x0C)) /*!< GPIO port pull-up/pull-down  register,    Address offset: 0x0C      */
#define IDR_PORTA      *((volatile u32*)(PORTA_BASE)+(0x10)) /*!< GPIO port input data         register,    Address offset: 0x10      */
#define ODR_PORTA      *((volatile u32*)(PORTA_BASE)+(0x14)) /*!< GPIO port output data        register,    Address offset: 0x14      */
#define BSRRL_PORTA    *((volatile u32*)(PORTA_BASE)+(0x18)) /*!< GPIO port bit set/reset low  register,    Address offset: 0x18      */
#define BSRRH_PORTA    *((volatile u32*)(PORTA_BASE)+(0x1A)) /*!< GPIO port bit set/reset high register,    Address offset: 0x1A      */
#define LCKR_PORTA     *((volatile u32*)(PORTA_BASE)+(0x1C)) /*!< GPIO port configuration lock register,    Address offset: 0x1C      */
#define AFRL_PORTA     *((volatile u32*)(PORTA_BASE)+(0x20)) /*!< GPIO alternate function low  register,    Address offset: 0x20-0x24 */
#define AFRH_PORTA     *((volatile u32*)(PORTA_BASE)+(0x24)) /*!< GPIO alternate function high register,    Address offset: 0x20-0x24 */

//PORTB

#define MODER_PORTB   *((volatile u32*)(PORTB_BASE)+(0x00)) /*!< GPIO port mode               register,    Address offset: 0x00      */
#define OTYPER_PORTB   *((volatile u32*)(PORTB_BASE)+(0x04)) /*!< GPIO port output type        register,    Address offset: 0x04      */
#define OSPEEDR_PORTB  *((volatile u32*)(PORTB_BASE)+(0x08)) /*!< GPIO port output speed       register,    Address offset: 0x08      */
#define PUPDR_PORTB    *((volatile u32*)(PORTB_BASE)+(0x0C)) /*!< GPIO port pull-up/pull-down  register,    Address offset: 0x0C      */
#define IDR_PORTB      *((volatile u32*)(PORTB_BASE)+(0x10)) /*!< GPIO port input data         register,    Address offset: 0x10      */
#define ODR_PORTB      *((volatile u32*)(PORTB_BASE)+(0x14)) /*!< GPIO port output data        register,    Address offset: 0x14      */
#define BSRRL_PORTB    *((volatile u32*)(PORTB_BASE)+(0x18)) /*!< GPIO port bit set/reset low  register,    Address offset: 0x18      */
#define BSRRH_PORTB    *((volatile u32*)(PORTB_BASE)+(0x1A)) /*!< GPIO port bit set/reset high register,    Address offset: 0x1A      */
#define LCKR_PORTB     *((volatile u32*)(PORTB_BASE)+(0x1C)) /*!< GPIO port configuration lock register,    Address offset: 0x1C      */
#define AFRL_PORTB     *((volatile u32*)(PORTB_BASE)+(0x20)) /*!< GPIO alternate function low  register,    Address offset: 0x20-0x24 */
#define AFRH_PORTB     *((volatile u32*)(PORTB_BASE)+(0x24)) /*!< GPIO alternate function high register,    Address offset: 0x20-0x24 */

//PORTC

#define MODER_PORTC    *((volatile u32*)(PORTC_BASE)+(0x00)) /*!< GPIO port mode               register,    Address offset: 0x00      */
#define OTYPER_PORTC   *((volatile u32*)(PORTC_BASE)+(0x04)) /*!< GPIO port output type        register,    Address offset: 0x04      */
#define OSPEEDR_PORTC  *((volatile u32*)(PORTC_BASE)+(0x08)) /*!< GPIO port output speed       register,    Address offset: 0x08      */
#define PUPDR_PORTC    *((volatile u32*)(PORTC_BASE)+(0x0C)) /*!< GPIO port pull-up/pull-down  register,    Address offset: 0x0C      */
#define IDR_PORTC      *((volatile u32*)(PORTC_BASE)+(0x10)) /*!< GPIO port input data         register,    Address offset: 0x10      */
#define ODR_PORTC      *((volatile u32*)(PORTC_BASE)+(0x14)) /*!< GPIO port output data        register,    Address offset: 0x14      */
#define BSRRL_PORTC    *((volatile u32*)(PORTC_BASE)+(0x18)) /*!< GPIO port bit set/reset low  register,    Address offset: 0x18      */
#define BSRRH_PORTC    *((volatile u32*)(PORTC_BASE)+(0x1A)) /*!< GPIO port bit set/reset high register,    Address offset: 0x1A      */
#define LCKR_PORTC     *((volatile u32*)(PORTC_BASE)+(0x1C)) /*!< GPIO port configuration lock register,    Address offset: 0x1C      */
#define AFRL_PORTC     *((volatile u32*)(PORTC_BASE)+(0x20)) /*!< GPIO alternate function low  register,    Address offset: 0x20-0x24 */
#define AFRH_PORTC     *((volatile u32*)(PORTC_BASE)+(0x24)) /*!< GPIO alternate function high register,    Address offset: 0x20-0x24 */

//PORTD

#define MODER_PORTD    *((volatile u32*)(PORTD_BASE)+(0x00)) /*!< GPIO port mode               register,    Address offset: 0x00      */
#define OTYPER_PORTD   *((volatile u32*)(PORTD_BASE)+(0x04)) /*!< GPIO port output type        register,    Address offset: 0x04      */
#define OSPEEDR_PORTD  *((volatile u32*)(PORTD_BASE)+(0x08)) /*!< GPIO port output speed       register,    Address offset: 0x08      */
#define PUPDR_PORTD    *((volatile u32*)(PORTD_BASE)+(0x0C)) /*!< GPIO port pull-up/pull-down  register,    Address offset: 0x0C      */
#define IDR_PORTD      *((volatile u32*)(PORTD_BASE)+(0x10)) /*!< GPIO port input data         register,    Address offset: 0x10      */
#define ODR_PORTD      *((volatile u32*)(PORTD_BASE)+(0x14)) /*!< GPIO port output data        register,    Address offset: 0x14      */
#define BSRRL_PORTD    *((volatile u32*)(PORTD_BASE)+(0x18)) /*!< GPIO port bit set/reset low  register,    Address offset: 0x18      */
#define BSRRH_PORTD    *((volatile u32*)(PORTD_BASE)+(0x1A)) /*!< GPIO port bit set/reset high register,    Address offset: 0x1A      */
#define LCKR_PORTD     *((volatile u32*)(PORTD_BASE)+(0x1C)) /*!< GPIO port configuration lock register,    Address offset: 0x1C      */
#define AFRL_PORTD     *((volatile u32*)(PORTD_BASE)+(0x20)) /*!< GPIO alternate function low  register,    Address offset: 0x20-0x24 */
#define AFRH_PORTD     *((volatile u32*)(PORTD_BASE)+(0x24)) /*!< GPIO alternate function high register,    Address offset: 0x20-0x24 */

//PORTE

#define MODER_PORTE    *((volatile u32*)(PORTE_BASE)+(0x00)) /*!< GPIO port mode               register,    Address offset: 0x00      */
#define OTYPER_PORTE   *((volatile u32*)(PORTE_BASE)+(0x04)) /*!< GPIO port output type        register,    Address offset: 0x04      */
#define OSPEEDR_PORTE  *((volatile u32*)(PORTE_BASE)+(0x08)) /*!< GPIO port output speed       register,    Address offset: 0x08      */
#define PUPDR_PORTE    *((volatile u32*)(PORTE_BASE)+(0x0C)) /*!< GPIO port pull-up/pull-down  register,    Address offset: 0x0C      */
#define IDR_PORTE      *((volatile u32*)(PORTE_BASE)+(0x10)) /*!< GPIO port input data         register,    Address offset: 0x10      */
#define ODR_PORTE      *((volatile u32*)(PORTE_BASE)+(0x14)) /*!< GPIO port output data        register,    Address offset: 0x14      */
#define BSRRL_PORTE    *((volatile u32*)(PORTE_BASE)+(0x18)) /*!< GPIO port bit set/reset low  register,    Address offset: 0x18      */
#define BSRRH_PORTE    *((volatile u32*)(PORTE_BASE)+(0x1A)) /*!< GPIO port bit set/reset high register,    Address offset: 0x1A      */
#define LCKR_PORTE     *((volatile u32*)(PORTE_BASE)+(0x1C)) /*!< GPIO port configuration lock register,    Address offset: 0x1C      */
#define AFRL_PORTE     *((volatile u32*)(PORTE_BASE)+(0x20)) /*!< GPIO alternate function low  register,    Address offset: 0x20-0x24 */
#define AFRH_PORTE     *((volatile u32*)(PORTE_BASE)+(0x24)) /*!< GPIO alternate function high register,    Address offset: 0x20-0x24 */

//PORTF

#define MODER_PORTF    *((volatile u32*)(PORTF_BASE)+(0x00)) /*!< GPIO port mode               register,    Address offset: 0x00      */
#define OTYPER_PORTF   *((volatile u32*)(PORTF_BASE)+(0x04)) /*!< GPIO port output type        register,    Address offset: 0x04      */
#define OSPEEDR_PORTF  *((volatile u32*)(PORTF_BASE)+(0x08)) /*!< GPIO port output speed       register,    Address offset: 0x08      */
#define PUPDR_PORTF    *((volatile u32*)(PORTF_BASE)+(0x0C)) /*!< GPIO port pull-up/pull-down  register,    Address offset: 0x0C      */
#define IDR_PORTF      *((volatile u32*)(PORTF_BASE)+(0x10)) /*!< GPIO port input data         register,    Address offset: 0x10      */
#define ODR_PORTF      *((volatile u32*)(PORTF_BASE)+(0x14)) /*!< GPIO port output data        register,    Address offset: 0x14      */
#define BSRRL_PORTF    *((volatile u32*)(PORTF_BASE)+(0x18)) /*!< GPIO port bit set/reset low  register,    Address offset: 0x18      */
#define BSRRH_PORTF    *((volatile u32*)(PORTF_BASE)+(0x1A)) /*!< GPIO port bit set/reset high register,    Address offset: 0x1A      */
#define LCKR_PORTF     *((volatile u32*)(PORTF_BASE)+(0x1C)) /*!< GPIO port configuration lock register,    Address offset: 0x1C      */
#define AFRL_PORTF     *((volatile u32*)(PORTF_BASE)+(0x20)) /*!< GPIO alternate function low  register,    Address offset: 0x20-0x24 */
#define AFRH_PORTF     *((volatile u32*)(PORTF_BASE)+(0x24)) /*!< GPIO alternate function high register,    Address offset: 0x20-0x24 */

//PORTG

#define MODER_PORTG    *((volatile u32*)(PORTG_BASE)+(0x00)) /*!< GPIO port mode               register,    Address offset: 0x00      */
#define OTYPER_PORTG   *((volatile u32*)(PORTG_BASE)+(0x04)) /*!< GPIO port output type        register,    Address offset: 0x04      */
#define OSPEEDR_PORTG  *((volatile u32*)(PORTG_BASE)+(0x08)) /*!< GPIO port output speed       register,    Address offset: 0x08      */
#define PUPDR_PORTG    *((volatile u32*)(PORTG_BASE)+(0x0C)) /*!< GPIO port pull-up/pull-down  register,    Address offset: 0x0C      */
#define IDR_PORTG      *((volatile u32*)(PORTG_BASE)+(0x10)) /*!< GPIO port input data         register,    Address offset: 0x10      */
#define ODR_PORTG      *((volatile u32*)(PORTG_BASE)+(0x14)) /*!< GPIO port output data        register,    Address offset: 0x14      */
#define BSRRL_PORTG    *((volatile u32*)(PORTG_BASE)+(0x18)) /*!< GPIO port bit set/reset low  register,    Address offset: 0x18      */
#define BSRRH_PORTG    *((volatile u32*)(PORTG_BASE)+(0x1A)) /*!< GPIO port bit set/reset high register,    Address offset: 0x1A      */
#define LCKR_PORTG     *((volatile u32*)(PORTG_BASE)+(0x1C)) /*!< GPIO port configuration lock register,    Address offset: 0x1C      */
#define AFRL_PORTG     *((volatile u32*)(PORTG_BASE)+(0x20)) /*!< GPIO alternate function low  register,    Address offset: 0x20-0x24 */
#define AFRH_PORTG     *((volatile u32*)(PORTG_BASE)+(0x24)) /*!< GPIO alternate function high register,    Address offset: 0x20-0x24 */

//PORTH

#define MODER_PORTH    *((volatile u32*)(PORTH_BASE)+(0x00)) /*!< GPIO port mode               register,    Address offset: 0x00      */
#define OTYPER_PORTH   *((volatile u32*)(PORTH_BASE)+(0x04)) /*!< GPIO port output type        register,    Address offset: 0x04      */
#define OSPEEDR_PORTH  *((volatile u32*)(PORTH_BASE)+(0x08)) /*!< GPIO port output speed       register,    Address offset: 0x08      */
#define PUPDR_PORTH    *((volatile u32*)(PORTH_BASE)+(0x0C)) /*!< GPIO port pull-up/pull-down  register,    Address offset: 0x0C      */
#define IDR_PORTH      *((volatile u32*)(PORTH_BASE)+(0x10)) /*!< GPIO port input data         register,    Address offset: 0x10      */
#define ODR_PORTH      *((volatile u32*)(PORTH_BASE)+(0x14)) /*!< GPIO port output data        register,    Address offset: 0x14      */
#define BSRRL_PORTH    *((volatile u32*)(PORTH_BASE)+(0x18)) /*!< GPIO port bit set/reset low  register,    Address offset: 0x18      */
#define BSRRH_PORTH    *((volatile u32*)(PORTH_BASE)+(0x1A)) /*!< GPIO port bit set/reset high register,    Address offset: 0x1A      */
#define LCKR_PORTH     *((volatile u32*)(PORTH_BASE)+(0x1C)) /*!< GPIO port configuration lock register,    Address offset: 0x1C      */
#define AFRL_PORTH     *((volatile u32*)(PORTH_BASE)+(0x20)) /*!< GPIO alternate function low  register,    Address offset: 0x20-0x24 */
#define AFRH_PORTH     *((volatile u32*)(PORTH_BASE)+(0x24)) /*!< GPIO alternate function high register,    Address offset: 0x20-0x24 */

//PORTI

#define MODER_PORTI    *((volatile u32*)(PORTI_BASE)+(0x00)) /*!< GPIO port mode               register,    Address offset: 0x00      */
#define OTYPER_PORTI   *((volatile u32*)(PORTI_BASE)+(0x04)) /*!< GPIO port output type        register,    Address offset: 0x04      */
#define OSPEEDR_PORTI  *((volatile u32*)(PORTI_BASE)+(0x08)) /*!< GPIO port output speed       register,    Address offset: 0x08      */
#define PUPDR_PORTI    *((volatile u32*)(PORTI_BASE)+(0x0C)) /*!< GPIO port pull-up/pull-down  register,    Address offset: 0x0C      */
#define IDR_PORTI      *((volatile u32*)(PORTI_BASE)+(0x10)) /*!< GPIO port input data         register,    Address offset: 0x10      */
#define ODR_PORTI      *((volatile u32*)(PORTI_BASE)+(0x14)) /*!< GPIO port output data        register,    Address offset: 0x14      */
#define BSRRL_PORTI    *((volatile u32*)(PORTI_BASE)+(0x18)) /*!< GPIO port bit set/reset low  register,    Address offset: 0x18      */
#define BSRRH_PORTI    *((volatile u32*)(PORTI_BASE)+(0x1A)) /*!< GPIO port bit set/reset high register,    Address offset: 0x1A      */
#define LCKR_PORTI     *((volatile u32*)(PORTI_BASE)+(0x1C)) /*!< GPIO port configuration lock register,    Address offset: 0x1C      */
#define AFRL_PORTI     *((volatile u32*)(PORTI_BASE)+(0x20)) /*!< GPIO alternate function low  register,    Address offset: 0x20-0x24 */
#define AFRH_PORTI     *((volatile u32*)(PORTI_BASE)+(0x24)) /*!< GPIO alternate function high register,    Address offset: 0x20-0x24 */

//PORTJ

#define MODER_PORTJ    *((volatile u32*)(PORTJ_BASE)+(0x00)) /*!< GPIO port mode               register,    Address offset: 0x00      */
#define OTYPER_PORTJ   *((volatile u32*)(PORTJ_BASE)+(0x04)) /*!< GPIO port output type        register,    Address offset: 0x04      */
#define OSPEEDR_PORTJ  *((volatile u32*)(PORTJ_BASE)+(0x08)) /*!< GPIO port output speed       register,    Address offset: 0x08      */
#define PUPDR_PORTJ    *((volatile u32*)(PORTJ_BASE)+(0x0C)) /*!< GPIO port pull-up/pull-down  register,    Address offset: 0x0C      */
#define IDR_PORTJ      *((volatile u32*)(PORTJ_BASE)+(0x10)) /*!< GPIO port input data         register,    Address offset: 0x10      */
#define ODR_PORTJ      *((volatile u32*)(PORTJ_BASE)+(0x14)) /*!< GPIO port output data        register,    Address offset: 0x14      */
#define BSRRL_PORTJ    *((volatile u32*)(PORTJ_BASE)+(0x18)) /*!< GPIO port bit set/reset low  register,    Address offset: 0x18      */
#define BSRRH_PORTJ    *((volatile u32*)(PORTJ_BASE)+(0x1A)) /*!< GPIO port bit set/reset high register,    Address offset: 0x1A      */
#define LCKR_PORTJ     *((volatile u32*)(PORTJ_BASE)+(0x1C)) /*!< GPIO port configuration lock register,    Address offset: 0x1C      */
#define AFRL_PORTJ     *((volatile u32*)(PORTJ_BASE)+(0x20)) /*!< GPIO alternate function low  register,    Address offset: 0x20-0x24 */
#define AFRH_PORTJ     *((volatile u32*)(PORTJ_BASE)+(0x24)) /*!< GPIO alternate function high register,    Address offset: 0x20-0x24 */

//PORTK

#define MODER_PORTK    *((volatile u32*)(PORTK_BASE)+(0x00)) /*!< GPIO port mode               register,    Address offset: 0x00      */
#define OTYPER_PORTK   *((volatile u32*)(PORTK_BASE)+(0x04)) /*!< GPIO port output type        register,    Address offset: 0x04      */
#define OSPEEDR_PORTK  *((volatile u32*)(PORTK_BASE)+(0x08)) /*!< GPIO port output speed       register,    Address offset: 0x08      */
#define PUPDR_PORTK    *((volatile u32*)(PORTK_BASE)+(0x0C)) /*!< GPIO port pull-up/pull-down  register,    Address offset: 0x0C      */
#define IDR_PORTK      *((volatile u32*)(PORTK_BASE)+(0x10)) /*!< GPIO port input data         register,    Address offset: 0x10      */
#define ODR_PORTK      *((volatile u32*)(PORTK_BASE)+(0x14)) /*!< GPIO port output data        register,    Address offset: 0x14      */
#define BSRRL_PORTK    *((volatile u32*)(PORTK_BASE)+(0x18)) /*!< GPIO port bit set/reset low  register,    Address offset: 0x18      */
#define BSRRH_PORTK    *((volatile u32*)(PORTK_BASE)+(0x1A)) /*!< GPIO port bit set/reset high register,    Address offset: 0x1A      */
#define LCKR_PORTK     *((volatile u32*)(PORTK_BASE)+(0x1C)) /*!< GPIO port configuration lock register,    Address offset: 0x1C      */
#define AFRL_PORTK     *((volatile u32*)(PORTK_BASE)+(0x20)) /*!< GPIO alternate function low  register,    Address offset: 0x20-0x24 */
#define AFRH_PORTK     *((volatile u32*)(PORTK_BASE)+(0x24)) /*!< GPIO alternate function high register,    Address offset: 0x20-0x24 */

#endif /* GPIOR_H_ */
