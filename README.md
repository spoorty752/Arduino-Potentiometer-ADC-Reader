# Arduino Potentiometer ADC Reader

## Overview
This project reads a potentiometer using the Arduino Uno's analog-to-digital converter (ADC) and displays the ADC reading and estimated input voltage in the Serial Monitor.

## Components
- Arduino Uno
- Potentiometer
- Jumper wires

## Connections
| Potentiometer | Arduino Uno |
|---|---|
| VCC | 5V |
| GND | GND |
| SIG (middle pin) | A0 |

## Concepts demonstrated
- Analog input using `analogRead()`
- 10-bit ADC readings (0–1023)
- Voltage estimation using the ADC reading
- Serial communication using `Serial.begin()` and `Serial.println()`

## Voltage calculation
The code estimates the input voltage using:

`voltage = adcValue * (5.0 / 1023.0)`

This assumes a 5V ADC reference.

## Expected result
Rotating the potentiometer changes the ADC reading. At the lower extreme, the reading approaches 0; at the upper extreme, it approaches 1023.

## Future improvements
- Control LED brightness using PWM
- Compare ADC readings with measured voltages
- Explore non-blocking timing techniques
