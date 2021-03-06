/****************************************************************************
 * configs/olimex-lpc2378/include/board.h
 *
 *   Copyright (C) 2010 Rommel Marcelo. All rights reserved.
 *   Author: Rommel Marcelo
 *
 * This is part of the NuttX RTOS and based on the LPC2148 port:
 *
 *   Copyright (C) 2010 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

#ifndef __ARCH_BOARD_BOARD_H
#define __ARCH_BOARD_BOARD_H

#ifdef __cplusplus
   extern "C" {
#endif

/* If  USB is enabled, PLL must be configured for 48MHz to provide USB clocking */
//--  F_pll = (2 * M * F_in)/N
//--  F_out = ((2 * (PLL_M + 1 ) * FOSC)/(0+1))/(CCLK_DIV+1)  = 288/5 = 57 600 000 Hz
//~ #ifdef CONFIG_USBDEV
 //~ #	define FOSC		(12000000)	/* Oscillator frequency */
 //~ #	define CCLK		(57600000)	/* CPU running clock */
 //~ #	define FCCO		(288000000)	/* CPU CCO clock */
//~ #else
 #	define FOSC		(12000000)	/* Oscillator frequency */
 #	define CCLK		(57600000)	/* CPU running clock */
 #	define FCCO		(288000000)	/* CPU CCO clock */
 //~ #	define CCLK		(72000000)	/* CPU running clock */
 //~ #	define FCCO		(360000000)	/* CPU CCO clock */
//~ #endif 

//~#define PLL_M	( (FCCO / (2 * FOSC))-1 ) 
//~ #define PLL_N	( ((2 * PLL_M * FOSC) / FCCO)-1 )
#define PLL_M	11
#define PLL_N	0

#define CCLK_DIV	4
#define USBCLK_DIV	6

 /* LED definitions **********************************************************/

#define LED_STARTED       0
#define LED_HEAPALLOCATE  1
#define LED_IRQSENABLED   2
#define LED_STACKCREATED  3
#define LED_INIRQ         4
#define LED_SIGNAL        5
#define LED_ASSERTION     6
#define LED_PANIC         7
 
#ifdef __cplusplus
   }
#endif
 
/****************************************************************************
 * Inline Functions
 ****************************************************************************/

#endif  /* __ARCH_BOARD_BOARD_H */
