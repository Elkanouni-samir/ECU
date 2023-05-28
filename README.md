# ECU
This project is developed for the STM32F103C6T6 microcontroller and includes the main code for the project.

# Description
The main.c file contains the main program body for the project. The code implements various functionalities and features using the STM32F103C6T6 microcontroller.

# Features
ADC: The code initializes and configures the ADC module to perform analog-to-digital conversions.
DMA: Direct Memory Access (DMA) is used for ADC data transfer.
CAN: The code initializes and configures the CAN module for communication.
TIM: The code initializes and configures timers for generating PWM signals.
Interrupts: The code handles external interrupts and timer interrupts.
Lookup Tables: The code includes a header file "Lookup_Tables.h" for lookup table functionality.
Debugging: The code includes variables and callbacks for debugging purposes.
Usage
To use this code, follow these steps:

Configure the system clock in the SystemClock_Config function.
Initialize and configure the required peripherals in the MX_*_Init functions.
Customize the code according to your specific application requirements.
Compile and upload the code to the STM32F103C6T6 microcontroller.
# License
This software is licensed under the terms that can be found in the LICENSE file in the root directory of this software component. If no LICENSE file is provided, the software is provided "AS-IS".

# Disclaimer
The code provided in this project is for demonstration purposes and may need modifications or improvements for production use. Use it at your own risk.

# Authors
[Elkanouni Samir]
[Elkanouni.samir2019@gmail.com]
