# Firmware

This folder contains the Arduino firmware developed for Project Atlas.

The firmware was developed incrementally, beginning with basic servo and electronics validation and progressing toward manual joint control of the assembled robotic arm.

---

## Firmware Versions

### Manual Control v1

Location:

`Manual_Control_v1/`

Manual Control v1 is the primary control firmware developed for the current Project Atlas prototype.

The system uses an Arduino Nano and PCA9685 PWM servo controller to provide manual control of the robotic arm through potentiometer inputs.

The firmware:

- Reads potentiometer inputs corresponding to individual arm joints
- Converts analog input values into commanded joint positions
- Sends PWM commands to the PCA9685 servo controller over I2C
- Controls multiple servo-driven joints simultaneously
- Provides direct manual control for mechanical testing and system validation
- Allows the arm's range of motion and joint behavior to be evaluated during physical testing

This firmware represents the first integrated control system used with the assembled Project Atlas robotic arm.

---

### Basic Servo Control

Location:

`basic-servo-control/basic-servo-control.ino`

This sketch was developed during the initial electronics validation stage of Project Atlas.

It was used to verify:

- Arduino Nano analog input
- Potentiometer readings
- I2C communication
- PCA9685 operation
- Servo PWM control
- External servo power
- Basic multi-servo operation

This sketch is retained as an early development and troubleshooting reference.

---

## Hardware Platform

The firmware was developed around the following control hardware:

- Arduino Nano
- PCA9685 16-channel PWM servo controller
- Potentiometer-based manual inputs
- MG995 servo motors
- MG90S servo motors
- External regulated servo power supply

---

## Arduino Libraries

The firmware uses:

- `Wire`
- `Adafruit PWM Servo Driver Library`

---

## Development Approach

Project Atlas firmware is intentionally developed alongside the mechanical and electrical systems.

Rather than treating control software as a separate final stage, firmware is used throughout development to validate:

- Joint motion
- Servo direction
- Mechanical range of motion
- Electrical integration
- Control responsiveness
- Assembly behavior
- System-level operation

Early firmware versions are preserved to document the progression of the control system and provide simple diagnostic programs for future testing.

---

## Current Status

Manual joint control has been implemented for the Project Atlas prototype.

The current firmware provides a functional platform for operating the arm during mechanical, electrical, and system-level testing.

Future firmware development will build on the results of physical testing rather than replacing the earlier validation programs.

---

## Future Development

Potential improvements include:

- Joint-specific motion limits
- Servo calibration
- Improved motion smoothing
- Controlled acceleration and deceleration
- Defined startup positions
- Improved fault and emergency-stop behavior
- Higher-level motion commands
- Closed-loop position feedback
- Integration with future Project Atlas actuator and control-system revisions
