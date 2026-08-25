/*
 * CharWriter.c
 *
 *  Created on: 26 Ağu 2026
 *      Author: enesg
 */

#include "stm32g031xx.h"
#include "stm32g0xx.h"
#include "SegmentDigitController.h"

void CharacterShower(char character) {

	switch (character) {

	case 'A':
		SegmentController('A');
		SegmentController('B');
		SegmentController('C');
		SegmentController('E');
		SegmentController('F');
		SegmentController('G');
		break;
	case 'B':
		SegmentController('A');
		SegmentController('B');
		SegmentController('C');
		SegmentController('D');
		SegmentController('E');
		SegmentController('F');
		SegmentController('G');
		break;

	case 'C':
		SegmentController('A');

		SegmentController('D');
		SegmentController('E');
		SegmentController('F');
		break;

	case 'D':

		SegmentController('B');
		SegmentController('C');
		SegmentController('D');
		SegmentController('E');

		SegmentController('G');
		break;

	case 'E':
		SegmentController('A');

		SegmentController('D');
		SegmentController('E');
		SegmentController('F');
		SegmentController('G');
		break;
	case 'F':
		SegmentController('A');

		SegmentController('E');
		SegmentController('F');
		SegmentController('G');
		break;
	case 'G':
		SegmentController('A');

		SegmentController('C');
		SegmentController('D');
		SegmentController('E');
		SegmentController('F');
		break;

	case 'H':

		SegmentController('C');

		SegmentController('E');
		SegmentController('F');
		SegmentController('G');
		break;
	case 'I':

		SegmentController('B');
		SegmentController('C');
		break;
	case 'i':

		SegmentController('A');
		SegmentController('C');
		break;

	case 'J':

		SegmentController('A');
		SegmentController('C');
		SegmentController('D');
		break;

	case 'K':
		SegmentController('A');

		SegmentController('C');

		SegmentController('E');
		SegmentController('F');
		SegmentController('G');
		break;
	case 'L':

		SegmentController('D');
		SegmentController('E');
		SegmentController('F');
		break;

	case 'M':
		SegmentController('A');

		SegmentController('C');

		SegmentController('E');

		SegmentController('G');
		break;
	case 'N':

		SegmentController('C');

		SegmentController('E');

		SegmentController('G');
		break;
	case 'O':

		SegmentController('C');
		SegmentController('D');
		SegmentController('E');

		SegmentController('G');
		break;
	case 'U':

		SegmentController('C');
		SegmentController('D');
		SegmentController('E');
		break;
	case 'P':
		SegmentController('A');
		SegmentController('B');

		SegmentController('E');
		SegmentController('F');
		SegmentController('G');
		break;
	case 'R':

		SegmentController('E');

		SegmentController('G');
		break;
	case 'S':
		SegmentController('A');

		SegmentController('C');
		SegmentController('D');

		SegmentController('F');
		SegmentController('G');
		break;

	case 'T':

		SegmentController('D');
		SegmentController('E');
		SegmentController('F');
		SegmentController('G');
		break;
	case 'V':
		SegmentController('A');
		SegmentController('B');

		SegmentController('D');
		break;

	case 'Y':

		SegmentController('B');
		SegmentController('C');
		SegmentController('D');

		SegmentController('F');
		SegmentController('G');
		break;
	case 'Z':
		SegmentController('A');
		SegmentController('B');

		SegmentController('D');
		SegmentController('E');

		break;

	case '.':
		SegmentController('.');
		break;

	case '0':
		SegmentController('A');
		SegmentController('B');
		SegmentController('C');
		SegmentController('D');
		SegmentController('E');
		SegmentController('F');
		break;

	case '1':

		SegmentController('B');
		SegmentController('C');
		break;

	case '2':
		SegmentController('A');
		SegmentController('B');

		SegmentController('D');
		SegmentController('E');

		SegmentController('G');
		break;
	case '3':
		SegmentController('A');
		SegmentController('B');
		SegmentController('C');
		SegmentController('D');

		SegmentController('G');
		break;
	case '4':

		SegmentController('B');
		SegmentController('C');

		SegmentController('F');
		SegmentController('G');
		break;
	case '5':
		SegmentController('A');

		SegmentController('C');
		SegmentController('D');

		SegmentController('F');
		SegmentController('G');
		break;
	case '6':
		SegmentController('A');

		SegmentController('D');
		SegmentController('E');
		SegmentController('F');
		SegmentController('G');
		break;
	case '7':
		SegmentController('A');
		SegmentController('B');
		SegmentController('C');

		SegmentController('G');
		break;
	case '8':
		SegmentController('A');
		SegmentController('B');
		SegmentController('C');
		SegmentController('D');
		SegmentController('E');
		SegmentController('F');
		SegmentController('G');
		break;
	case '9':
		SegmentController('A');
		SegmentController('B');
		SegmentController('C');
		SegmentController('D');

		SegmentController('F');
		SegmentController('G');
		break;

	}

}
