/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Enes Gazioglu
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2026 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <SegmentDigitController.h>
#include "stm32g0xx.h"
#include "stm32g031xx.h"

#define LEDDELAY    500000

void delay(volatile uint32_t);

int main(void) {




	DigitOpener(1);

	// All segments working
	SegmentController('A');
	SegmentController('B');
	SegmentController('C');
	SegmentController('D');
	SegmentController('E');
	SegmentController('F');
	SegmentController('G');
	SegmentController('O');


    return 0;
}

void delay(volatile uint32_t s) {
    for(; s>0; s--);
}
