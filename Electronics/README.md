# Atlas V1 Electronics

The completed Atlas V1 control system uses an **Arduino Nano** for input processing, a **PCA9685** for servo PWM generation, five potentiometers for manual joint commands, and a **16×2 I2C LCD** for live feedback.

## System Architecture

```text
5 potentiometers ──> Arduino Nano ──I2C──> PCA9685 ──> 5 servos
                         │
                         └────I2C────> 16×2 LCD

5 V / 10 A external supply ──────────> PCA9685 servo rail
```

## Final Hardware

| Component | Function |
|---|---|
| Arduino Nano | Reads controls and runs joint-control logic |
| PCA9685 | Generates PWM for five servo channels |
| 5 potentiometers | Manual joint input |
| 16×2 I2C LCD | Displays joint name and commanded angle |
| 3× MG995 | Higher-load arm joints |
| 2× MG90S | Lighter end-effector functions |
| 5 V, 10 A regulated supply | Dedicated servo power |

## Power Separation

- **Arduino Nano:** powered through USB
- **PCA9685 VCC:** 5 V logic supply from the Nano
- **PCA9685 V+:** external regulated 5 V servo supply
- **Servos:** powered from the PCA9685 V+ rail
- **Ground:** Nano, PCA9685, LCD, and external supply share a common ground

The servos are **not** powered directly from the Arduino Nano.

## I2C Bus

The PCA9685 and I2C LCD share the Nano's I2C bus:

- A4 → SDA
- A5 → SCL

The devices operate on separate I2C addresses, allowing the PWM driver and display to share the same SDA/SCL lines.

## Wiring Documentation

- [Connection tables and pin assignments](wiring.md)
- [Arduino Nano / potentiometer diagram](./Arduino%20Nano%20and%20potentiometer%20wiring.png)
- [PCA9685 servo wiring diagram](./PCA9685%20servo%20wiring.png)

## Firmware

The final control sketch averages potentiometer readings, applies a 2° deadband, sends 50 Hz servo commands through the PCA9685, and updates the LCD when a joint command changes.

[View firmware →](../Firmware/)
