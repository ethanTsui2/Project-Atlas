# Manual Control v1

## Purpose

Manual Control v1 is the first integrated manual-control firmware developed for the Project Atlas robotic arm.

The firmware allows the arm's servo-driven joints to be controlled directly using potentiometer inputs. It was developed to provide a simple and reliable method of operating the assembled arm during mechanical, electrical, and system-level testing.

## Hardware

- Arduino Nano
- PCA9685 16-channel PWM servo controller
- Potentiometers for manual joint control
- MG995 servo motors
- MG90S servo motors
- External regulated servo power supply

## Operation

The Arduino Nano reads the analog position of each potentiometer and converts the input into a commanded joint position.

Servo commands are then sent to the PCA9685 over I2C, allowing multiple joints to be controlled simultaneously.

The potentiometers provide direct manual control of the robotic arm and make it possible to evaluate joint movement without requiring a higher-level control system.

## Features

- Manual potentiometer-based joint control
- Simultaneous control of multiple servos
- PCA9685 PWM servo control
- Arduino Nano control platform
- Independent external servo power
- Direct joint positioning for testing
- Simple platform for mechanical and electrical validation

## Role in Project Atlas

Manual Control v1 was developed primarily as a testing and validation tool.

It allows the assembled robotic arm to be operated while evaluating:

- Joint range of motion
- Servo direction
- Mechanical interference
- Structural behavior
- Wiring and electronics integration
- Servo response
- Overall system operation

The goal of this firmware is not autonomous control. It provides a straightforward manual interface for validating the physical robotic system before more advanced control methods are introduced.

## Status

**Functional prototype**

Manual joint control has been implemented and is being used as the primary control method for the current Project Atlas prototype.

## Future Improvements

Potential improvements include:

- Joint-specific angle limits
- Servo calibration offsets
- Motion smoothing
- Controlled acceleration and deceleration
- Defined startup positions
- Improved safety behavior
- Motion recording and playback
- Higher-level coordinated joint control
- Closed-loop position feedback
