# Hall Effect Sensor with LED Indicator

This simple Arduino project demonstrates how to use a Hall Effect sensor to detect a magnet and control an LED accordingly.

## Components Used
- Arduino Uno
- Hall Effect Sensor (Linear or Digital)
- LED
- 220Ω resistor (for the LED)
- Jumper wires
- Magnet

## Wiring
| Component         | Arduino Pin |
|------------------|-------------|
| Hall Sensor (Analog) | A0      |
| Hall Sensor (Digital) | D2     |
| LED                 | D13      |

## How It Works
- The analog and digital signals from the Hall sensor are read.
- If the sensor detects a magnetic field (i.e. the signal goes **LOW**, a **negative signal**), the LED turns **off**.
- If there is no magnetic field (signal is **HIGH**, a **positive signal**), the LED turns **on**.

## Notes
- Some Hall sensors output LOW when a magnet is near (active low), others output HIGH (active high). This code assumes **active low** logic.
- You can adjust the behavior depending on your sensor type.
