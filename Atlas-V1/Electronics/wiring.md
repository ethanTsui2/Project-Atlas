# Wiring

## System Overview

Project Atlas uses an Arduino Nano to read five potentiometers and a PCA9685 controller to drive five servos.

The Nano communicates with the PCA9685 using I2C.

## Arduino Nano to PCA9685

| Arduino Nano | PCA9685 | Function |
|---|---|---|
| 5V | VCC | PCA9685 logic power |
| GND | GND | Common ground |
| A4 | SDA | I2C data |
| A5 | SCL | I2C clock |

## External Servo Power

The servos are powered by a separate regulated 5 V power supply.

| Power supply | PCA9685 |
|---|---|
| Positive | V+ screw terminal |
| Negative | GND screw terminal |

The Arduino Nano is powered through USB.

The servos are not powered directly from the Arduino Nano.

## Potentiometer Assignments

| Analog pin | Joint |
|---|---|
| A0 | Base |
| A1 | Elbow |
| A2 | Wrist |
| A3 | Gripper pivot |
| A6 | Gripper jaws |

Each potentiometer is wired as follows:

- One outer terminal to 5 V
- One outer terminal to GND
- Center terminal to the assigned analog pin

## PCA9685 Channel Assignments

| PCA9685 channel | Joint |
|---|---|
| PWM0 | Base |
| PWM1 | Elbow |
| PWM2 | Wrist |
| PWM3 | Gripper pivot |
| PWM4 | Gripper jaws |

## Servo Connector Orientation

Each servo connects to the PCA9685 with:

- Signal wire to PWM
- Positive wire to V+
- Ground wire to GND

## Power Safety

Before applying power:

- Confirm the external supply is regulated to 5 V
- Confirm positive is connected to V+
- Confirm negative is connected to GND
- Confirm the Nano and PCA9685 share a common ground
- Do not connect servo power directly to the Nano
