/*
 * SegmentController.c
 *
 *  Created on: 25 Ağu 2026
 *      Author: enesg
 */
#include "stm32g031xx.h"
#include "stm32g0xx.h"
#include "SegmentDigitController.h"

// PB1-PB7 SEGMENT connections
#define SEGMENT_A_PIN_NUMBER 1 //PB1 CONNECTED
#define SEGMENT_B_PIN_NUMBER 2 //PB2 CONNECTED
#define SEGMENT_C_PIN_NUMBER 3 //PB3 CONNECTED
#define SEGMENT_D_PIN_NUMBER 4 //PB4 CONNECTED
#define SEGMENT_E_PIN_NUMBER 5 //PB5 CONNECTED
#define SEGMENT_F_PIN_NUMBER 6 //PB6 CONNECTED
#define SEGMENT_G_PIN_NUMBER 7 //PB7 CONNECTED
#define SEGMENT_DOT_PIN_NUMBER 8 //PB8 CONNECTED

#define DIGIT_1 0 // PA0 CONNECTED digit en sagdaki en kucuk
#define DIGIT_2 1 // PA1 CONNECTED
#define DIGIT_3 4 // PA4 CONNECTED
#define DIGIT_4 5 // PA5 CONNECTED digit en soldaki en buyuk

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
	case '.':
		SegmentOpener(SEGMENT_DOT_PIN_NUMBER);
		break;

	}
}

void SegmentOpener(int segmentConnectedNumber) {

	// SETUP PB6 AS output
	GPIOB->MODER &= ~(3U << 2 * segmentConnectedNumber);
	GPIOB->MODER |= (1U << 2 * segmentConnectedNumber);

	//open gpiob port
	GPIOB->ODR &= ~(1U << segmentConnectedNumber);

}


/*
 * GPIOA DIGITLER ICIN SECILDI
 * GPIOA0, GPIOA1, GPIOA4, GPIOA5
 * GPI0A0 = EN DUSUK ANLAMLI 1.BASAMAK
 * GPIOA1 = 2.BASAMAK
 * GPI0A4 = 3.BASAMAK
 * GPIOA5 = 4.BASAMAK
 */
void DigitOpener(int digitNumber) {


	switch (digitNumber) {

	case 1 :
		DigitController(DIGIT_1);
		break;
	case 2 :
		DigitController(DIGIT_2);
		break;
	case 3 :
		DigitController(DIGIT_3);
		break;
	case 4 :
		DigitController(DIGIT_4);
		break;

	}


}


void DigitController(int gpioAconnectedNumber){

	/* Enable GPIOA clock */
	RCC->IOPENR |= (1U);

	// SETUP PA AS output
	GPIOA->MODER &= ~(3U << 2 * gpioAconnectedNumber);
	GPIOA->MODER |= (1U << 2 * gpioAconnectedNumber);

	// open gpioa port
	GPIOA->ODR |= (1U << gpioAconnectedNumber);


}
