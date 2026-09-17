# Project Atlas Firmware

This folder contains the final Atlas V1 control sketch plus a few earlier programs I kept for reference.

## Final Control Firmware

**Location:** [`Final_Control/Atlas_Final_Control.ino`](./Final_Control/Atlas_Final_Control.ino)

The final controller uses an Arduino Nano, PCA9685 PWM driver, five potentiometers, and a 16x2 I2C LCD.

### What the final sketch does

- reads five analog control inputs
- averages **8 samples** per potentiometer reading
- maps each input to a **0-180 degree** command
- uses a **2 degree deadband** to reduce unnecessary servo updates
- drives five PCA9685 channels at **50 Hz**
- uses a pulse-width range of **650-2350 us**
- displays the active joint and angle on the LCD
- prints joint updates to the serial monitor for debugging

### Final input / channel map

| Potentiometer | Nano pin | PCA9685 channel | Firmware label |
|---|---|---|---|
| 1 | A0 | 0 | BASE |
| 2 | A1 | 1 | ELBOW |
| 3 | A2 | 2 | WRIST |
| 4 | A3 | 3 | PIVOT |
| 5 | A6 | 4 | JAWS |

## Required Arduino Libraries

- `Wire`
- `Adafruit PWM Servo Driver Library`
- `hd44780`
- `hd44780_I2Cexp`

## Development Sketches

I kept the earlier programs because they show how the controls developed from basic component testing into the final controller.

| Folder | Purpose |
|---|---|
| `basic-servo-control/` | Early PCA9685 and servo testing |
| `Manual_Control_v1/` | Earlier manual-control version |
| `Final_Control/` | Final V1 controller with averaging, deadband, and LCD feedback |

## Control Architecture

```text
Potentiometers -> Arduino Nano -> PCA9685 -> Servos
                         |
                         -> I2C LCD
```

The servos use a separate regulated 5 V supply. The Nano, PCA9685, LCD, and external supply share a common ground.

See [Electronics](../Electronics/) for the wiring and power setup.

## Scope

Atlas V1 uses direct manual joint control. It does not include closed-loop joint feedback, inverse kinematics, trajectory planning, or automatic motion sequencing.
