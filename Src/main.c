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
#include "CharWriter.h"
#include "DisplayController.h"

#define LEDDELAY    5000

void delay(volatile uint32_t);

int main(void) {

	DigitControl(1, 1);
	DigitControl(2, 1);
	DigitControl(3, 1);
	DigitControl(4, 1);

	CharacterShower('.');


	DigitCloser(3);


	/*	// All segments working
	 SegmentController('A');
	 SegmentController('B');
	 SegmentController('C');
	 SegmentController('D');
	 SegmentController('E');
	 SegmentController('F');
	 SegmentController('G');
	 SegmentController('.');

	 while (1) {

	 DigitOpener(1);
	 delay(500);
	 DigitOpener(2);
	 delay(500);
	 DigitOpener(3);
	 delay(500);
	 DigitOpener(4);
	 delay(500);

	 return 0;
	 }*/
}
void delay(volatile uint32_t s) {
	for (; s > 0; s--)
		;
}
