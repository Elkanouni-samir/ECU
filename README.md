# ENGINE CONTROL MANAGEMENT UNIT

This repository contains the main code for the STM32F103C6T6 microcontroller project.

## Description

The main program is implemented in the `main.c` file. It configures various peripherals such as ADC, DMA, CAN, and timers to control the microcontroller's behavior. The code includes functionality for reading sensor data, calculating RPM, controlling injection and ignition timings, and transmitting data over CAN bus.

## Features

- ADC: The code initializes and configures the ADC module to perform analog-to-digital conversions.
- DMA: Direct Memory Access (DMA) is used for ADC data transfer.
- CAN: The code initializes and configures the CAN module for communication.
- TIM: The code initializes and configures timers for generating PWM signals.
- Interrupts: The code handles external interrupts and timer interrupts.
- Lookup Tables: The code includes a header file "Lookup_Tables.h" for lookup table functionality.

## Getting Started

To compile and run the code on the STM32F103C6T6 microcontroller, follow these steps:

1. Clone this repository to your local machine.
2. Set up the development environment and toolchain for STM32 microcontrollers.
3. Open the project in your preferred IDE or build system.
4. Build the project and generate the binary file.
5. Connect the STM32F103C6T6 microcontroller to your computer.
6. Flash the binary file to the microcontroller using a suitable programming tool.
7. Run the project on the microcontroller.

## Requirements

To build and run the code, you need the following:

- STM32F103C6T6 microcontroller board.
- Development environment and toolchain for STM32 microcontrollers.
- Programming tool for flashing the microcontroller.
- CAN bus module (if you want to use the CAN functionality).

## License

This software is licensed under the terms that can be found in the `LICENSE` file in the root directory of this software component. If no `LICENSE` file is provided, it is provided "AS-IS" without any warranties or conditions.

## Disclaimer
The code provided in this project is for demonstration purposes and may need modifications or improvements for production use. Use it at your own risk.

## Author

This project was developed by:
- [Elkanouni Samir]
- [Mimouni Yasser]
- [Boateng Samuel]
- [Bakadour Imam]
- [Boudribila Rabiaa]

