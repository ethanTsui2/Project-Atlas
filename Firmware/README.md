# Project Atlas Firmware

This folder contains the final control sketch for Atlas V1 plus earlier development programs retained for reference.

## Final Control Firmware

**Location:** [`Final_Control/Atlas_Final_Control.ino`](./Final_Control/Atlas_Final_Control.ino)

The final Atlas V1 controller uses an Arduino Nano, PCA9685 PWM driver, five potentiometers, and a 16×2 I2C LCD.

### What the final sketch does

- reads five analog control inputs
- averages **8 samples** per potentiometer reading
- maps each input to a **0–180°** command
- applies a **2° deadband** to reduce unnecessary servo updates
- drives five PCA9685 channels at **50 Hz**
- uses a pulse-width range of **650–2350 µs**
- displays the active joint label and angle on the 16×2 LCD
- prints joint updates to the serial monitor for debugging

### Final input / channel map

| Potentiometer | Nano pin | PCA9685 channel | Firmware label |
|---|---|---|---|
| 1 | A0 | 0 | BASE |
| 2 | A1 | 1 | ELBOW |
| 3 | A2 | 2 | WRIST |
| 4 | A3 | 3 | PIVOT |
| 5 | A6 | 4 | JAWS |

The labels above are preserved exactly as implemented in the final firmware.

## Required Arduino Libraries

- `Wire`
- `Adafruit PWM Servo Driver Library`
- `hd44780`
- `hd44780_I2Cexp`

## Development Sketches

Earlier programs are intentionally retained because they show the progression from component testing to the integrated final controller.

| Folder | Purpose |
|---|---|
| `basic-servo-control/` | Early PCA9685 / servo validation |
| `Manual_Control_v1/` | Intermediate manual-control implementation |
| `Final_Control/` | Completed V1 controller with smoothing, deadband, and LCD feedback |

## Control Architecture

```text
Potentiometers → Arduino Nano → PCA9685 → Servos
                       └──────→ I2C LCD
```

The servos use a separate regulated 5 V supply; the Nano, PCA9685, LCD, and external supply share a common ground.

See [Electronics](../Electronics/) for wiring and power details.

## Scope

The final firmware provides direct manual joint control for the completed Atlas V1 prototype. It does not implement closed-loop joint feedback, inverse kinematics, trajectory planning, or automatic motion sequencing; those would be future control-system extensions rather than features claimed for V1.
