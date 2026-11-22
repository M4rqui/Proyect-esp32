# Two-Way Traffic Light System (ESP32-S3)

Simulation developed in Wokwi that controls a two-way traffic light intersection using an ESP32-S3, ensuring synchronized state transitions without overlapping green/yellow lights and logging real-time status via the Serial Monitor.

## Hardware Components
- ESP32-S3 WROOM-1 Microcontroller
- 6 LEDs (2 Red, 2 Yellow, 2 Green)
- 6 Resistors (220Ω)

## Pinout Configuration
| Component | ESP32-S3 Pin |
| :--- | :--- |
| Traffic Light 1 - LED 1 | GPIO 1 |
| Traffic Light 1 - LED 2 | GPIO 38 |
| Traffic Light 1 - LED 3 | GPIO 20 |
| Traffic Light 2 - LED 4 | GPIO 5 |
| Traffic Light 2 - LED 5 | GPIO 6 |
| Traffic Light 2 - LED 6 | GPIO 7 |
| Traffic Light 1 Ground (LEDs 1-3) | GND (Group 4) |
| Traffic Light 2 Ground (LEDs 4-6) | GND (Group 1) |

## Simulation
Test the live circuit directly on Wokwi: https://wokwi.com/projects/481433131412972545
