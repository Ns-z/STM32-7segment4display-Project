/*
 * SegmentController.c
 *
 *  Created on: 25 Ağu 2026
 *      Author: enesg
 */
#include "stm32g031xx.h"
#include "stm32g0xx.h"
#include "SegmentController.h"

// PB1-PB7 SEGMENT connections
#define SEGMENT_A_PIN_NUMBER 1
#define SEGMENT_B_PIN_NUMBER 2
#define SEGMENT_C_PIN_NUMBER 3
#define SEGMENT_D_PIN_NUMBER 4
#define SEGMENT_E_PIN_NUMBER 5
#define SEGMENT_F_PIN_NUMBER 6
#define SEGMENT_G_PIN_NUMBER 7
#define SEGMENT_DOT_PIN_NUMBER 8

void SegmentController(char segment) {

	/* Enable GPIOB clock */
	RCC->IOPENR |= (1U << 1);

	switch (segment) {

	case 'A':
		SegmentOpener(SEGMENT_A_PIN_NUMBER);
		break;
	case 'B':
		SegmentOpener(SEGMENT_B_PIN_NUMBER);
		break;
	case 'C':
		SegmentOpener(SEGMENT_C_PIN_NUMBER);
		break;
	case 'D':
		SegmentOpener(SEGMENT_D_PIN_NUMBER);
		break;
	case 'E':
		SegmentOpener(SEGMENT_E_PIN_NUMBER);
		break;
	case 'F':
		SegmentOpener(SEGMENT_F_PIN_NUMBER);
		break;
	case 'G':
		SegmentOpener(SEGMENT_G_PIN_NUMBER);
		break;
	case 'O':
		SegmentOpener(SEGMENT_DOT_PIN_NUMBER);
		break;

	}
}

void SegmentOpener(int segmentNumber) {

	// SETUP PB6 AS output
	GPIOB->MODER &= ~(3U << 2 * segmentNumber);
	GPIOB->MODER |= (1U << 2 * segmentNumber);

	GPIOB->ODR &= ~(1U << segmentNumber);

}

