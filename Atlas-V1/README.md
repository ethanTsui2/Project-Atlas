# Atlas V1

Atlas V1 is the first complete design iteration of Project Atlas.

This version is a 3D-printed, servo-driven robotic arm developed to validate the mechanical architecture, joint geometry, electronics, firmware, wiring, assembly process, and practical limitations of low-cost hobby servos.

## Version Goals

- Design a complete robotic arm from scratch in SolidWorks
- Manufacture the structural components using FDM 3D printing
- Integrate MG995 and MG90S servo motors
- Control the servos using an Arduino Nano and PCA9685 driver
- Develop a modular mechanical and electrical architecture
- Document CAD, firmware, wiring, assembly, testing, and design lessons
- Identify improvements for future Atlas iterations

## Actuation

- Base: MG995
- Shoulder: MG995
- Elbow: MG995
- Wrist: MG90S
- Gripper: MG90S

## Current Status

Design finalized for initial print testing.

## Planned Validation

- Servo and horn fit testing
- Mechanical assembly
- Wiring and cable-routing validation
- Joint range-of-motion testing
- Shoulder and elbow torque analysis
- Structural testing
- Firmware integration
- Final assembly documentation

## Design Limitations to Evaluate

- MG995 torque capacity
- Structural flex in printed links
- Servo backlash
- Internal wire accessibility
- Base stability
- Payload capability

## Future Development

Lessons learned from Atlas V1 will guide the design of later iterations featuring improved actuators, gear reduction, structural optimization, better sensing, and more advanced control.
