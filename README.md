# STM32 4-Digit 7-Segment Display Library

A lightweight **4-digit 7-segment display library** developed for STM32G0 microcontrollers using C.

The project aims to simplify display control by providing high-level functions for characters, numbers, and strings while handling the low-level segment and digit control internally.

## Features

* 4-digit 7-segment display control
* Individual segment control
* Digit selection
* Character display
* Multiplexing support
* String display *(in development)*
* Number display *(planned)*
* Reusable and lightweight C library

## Example

```c
DigitOpener(1);
CharacterShower('T');
```

Planned high-level usage:

```c
DisplayString("TEST");
DisplayNumber(1234);
```

## Hardware

* STM32G031
* 4-Digit 7-Segment Display
* GPIO-controlled segments and digits

## Project Structure

```text
STM32-7Segment-Library/
├── SegmentDigitController.c
├── SegmentDigitController.h
├── CharWriter.c
├── CharWriter.h
├── main.c
└── README.md
```

## Development Status

**In Development**

Current focus is implementing a clean character mapping system and multiplexing architecture that allows strings to be displayed easily.

## Author

**Enes Gazioglu**

Embedded Systems • STM32 • C • Microcontrollers
