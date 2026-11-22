# Two-Way Traffic Light System (ESP32-S3)

Simulation developed in Wokwi that controls a two-way traffic light intersection using an ESP32-S3, ensuring synchronized state transitions without overlapping green/yellow lights and logging real-time status via the Serial Monitor.

## Hardware Components
- ESP32-S3 WROOM-1 Microcontroller
- 6 LEDs (2 Red, 2 Yellow, 2 Green)
- 6 Resistors (220Ω)

## Pinout Configuration
| Component | ESP32-S3 Pin |
| :--- | :--- |
| Traffic Light 1 - Red | GPIO 4 |
| Traffic Light 1 - Yellow | GPIO 5 |
| Traffic Light 1 - Green | GPIO 6 |
| Traffic Light 2 - Red | GPIO 1 |
| Traffic Light 2 - Yellow | GPIO 2 |
| Traffic Light 2 - Green | GPIO 13 |
| Common Ground | GND |

## Simulation
Test the live circuit directly on Wokwi: https://wokwi.com/projects/481433131412972545
