# Atlas V1 Electronics

The final Atlas V1 control system uses an **Arduino Nano** to read the controls, a **PCA9685** to drive the servos, five potentiometers for manual joint control, and a **16x2 I2C LCD** for feedback.

## System Architecture

```text
5 potentiometers -> Arduino Nano -> PCA9685 -> 5 servos
                         |
                         -> I2C LCD

5 V / 10 A external supply -> PCA9685 servo rail
```

## Final Hardware

| Component | Function |
|---|---|
| Arduino Nano | Reads controls and runs the joint-control logic |
| PCA9685 | Generates PWM for five servo channels |
| 5 potentiometers | Manual joint input |
| 16x2 I2C LCD | Displays joint name and commanded angle |
| 3x MG995 | Higher-load arm joints |
| 2x MG90S | Lighter end-effector functions |
| 5 V, 10 A regulated supply | Dedicated servo power |

## Power Setup

- **Arduino Nano:** powered through USB
- **PCA9685 VCC:** 5 V logic supply from the Nano
- **PCA9685 V+:** external regulated 5 V servo supply
- **Servos:** powered from the PCA9685 V+ rail
- **Ground:** Nano, PCA9685, LCD, and external supply share a common ground

The servos are not powered directly from the Arduino Nano.

## I2C Bus

The PCA9685 and LCD share the Nano's I2C bus:

- A4 - SDA
- A5 - SCL

They use different I2C addresses, so both devices can use the same SDA and SCL lines.

## Wiring Documentation

- [Connection tables and pin assignments](wiring.md)
- [Arduino Nano / potentiometer diagram](./Arduino%20Nano%20and%20potentiometer%20wiring.png)
- [PCA9685 servo wiring diagram](./PCA9685%20servo%20wiring.png)

## Firmware

The final sketch averages the potentiometer readings, uses a 2 degree deadband, sends 50 Hz servo commands through the PCA9685, and updates the LCD when a joint command changes.

[View firmware](../Firmware/)
