# Firmware

This folder contains the Arduino firmware developed for Project Atlas.

## Current Sketch

### Basic Servo Control

Location:

`basic-servo-control/basic-servo-control.ino`

This sketch was used to validate the initial electronics system.

It:

- Reads five potentiometers using the Arduino Nano
- Sends servo commands to the PCA9685 over I2C
- Controls five servo channels
- Maps potentiometer readings to servo angles from 0° to 180°
- Uses an external 5 V power supply for the servos

## Required Arduino Libraries

- Wire
- Adafruit PWM Servo Driver Library

## Hardware

- Arduino Nano
- PCA9685 16-channel PWM controller
- Five potentiometers
- Five servos
- External regulated 5 V power supply

## Current Status

The basic manual control system has been tested successfully.

## Planned Improvements

- Add joint-specific angle limits
- Add servo calibration offsets
- Add smoother motion
- Reduce sudden movement
- Add startup positioning
- Add emergency-stop behavior
