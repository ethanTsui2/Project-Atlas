# Atlas V1 Wiring

This page matches the final manual-control firmware and electronics setup.

## Arduino Nano - PCA9685

| Arduino Nano | PCA9685 | Function |
|---|---|---|
| 5V | VCC | PCA9685 logic power |
| GND | GND | Common reference |
| A4 | SDA | I2C data |
| A5 | SCL | I2C clock |

## I2C LCD

The 16x2 I2C LCD shares the same I2C bus:

| LCD | Arduino Nano | Function |
|---|---|---|
| VCC | 5V | LCD power |
| GND | GND | Common ground |
| SDA | A4 | I2C data |
| SCL | A5 | I2C clock |

## External Servo Power

The five servos are powered from a regulated **5 V, 10 A** external supply through the PCA9685 servo rail.

| Power supply | PCA9685 |
|---|---|
| +5 V | V+ screw terminal |
| GND | GND screw terminal |

The Arduino Nano is powered through USB. The Nano, PCA9685, LCD, and external supply all share a common ground.

## Potentiometer Inputs

| Analog pin | Firmware label |
|---|---|
| A0 | BASE |
| A1 | ELBOW |
| A2 | WRIST |
| A3 | PIVOT |
| A6 | JAWS |

Each potentiometer is wired with:

- one outer terminal - 5 V
- one outer terminal - GND
- center wiper - assigned analog input

## PCA9685 Servo Channels

| PCA9685 channel | Firmware label |
|---|---|
| PWM0 | BASE |
| PWM1 | ELBOW |
| PWM2 | WRIST |
| PWM3 | PIVOT |
| PWM4 | JAWS |

## Servo Connector Orientation

Each servo connects to the PCA9685 with:

- signal - PWM
- positive - V+
- ground - GND

I used servo extension leads and 22 AWG flexible wire where needed to route the wiring through the arm and controller.

## Power / Wiring Checks

Before applying power:

- verify the external supply is regulated to 5 V
- verify V+ and GND polarity at the PCA9685
- confirm the Nano and external supply share ground
- confirm the LCD and PCA9685 are on the correct I2C lines
- confirm servo connectors are oriented correctly
- do not power the servo rail from the Nano's 5 V pin

## Reference Diagrams

- [Arduino Nano and potentiometer wiring](./Arduino%20Nano%20and%20potentiometer%20wiring.png)
- [PCA9685 servo wiring](./PCA9685%20servo%20wiring.png)
