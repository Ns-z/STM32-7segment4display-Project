/*
 * SegmentController.h
 *
 *  Created on: 25 Ağu 2026
 *      Author: enesg
 */

#ifndef SEGMENTDIGITCONTROLLER_H_
#define SEGMENTDIGITCONTROLLER_H_

void SegmentController(char segment);
void SegmentOpener(int segmentConnectedNumber);

void DigitControl(int digitNumber, int state);
void DigitOpener(int gpioAconnectedNumber);
void DigitCloser(int gpioAconnectedNumber);

#endif /* SEGMENTDIGITCONTROLLER_H_ */
