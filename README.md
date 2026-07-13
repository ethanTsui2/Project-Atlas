# Project Atlas

Project Atlas is an ongoing robotics engineering portfolio focused on the design, fabrication, testing, and continuous improvement of robotic manipulators.

Each design iteration is preserved as a complete engineering record containing its CAD models, assemblies, electronics, firmware, bill of materials, testing results, engineering analysis, and lessons learned.

The purpose of Project Atlas is not only to build a functional robotic arm, but to document the progression from an accessible servo-driven prototype toward more capable robotic systems using improved actuators, gear reduction, sensing, and control.

---

## Project Objectives

- Design robotic manipulators from the ground up
- Apply mechanical design, CAD, additive manufacturing, electronics, and embedded programming
- Validate design decisions through physical testing and engineering analysis
- Preserve each design iteration rather than replacing previous work
- Document failures, limitations, and lessons learned
- Use each completed version to define requirements for the next
- Build a continuous engineering design portfolio

---

## Design Iterations

| Version | Description | Status |
|---|---|---|
| [Atlas V1](Atlas-V1/) | 3D-printed robotic arm using hobby servos, Arduino control, and a PCA9685 servo driver | In development |
| Atlas V2 | Planned robotic arm using higher-torque actuators and geared joints | Future concept |
| Atlas V3 | Advanced robotic manipulator based on lessons from earlier versions | Future concept |

---

## Atlas V1

Atlas V1 is the first official design iteration of Project Atlas.

It is intended to validate:

- Overall robotic-arm architecture
- SolidWorks part and assembly workflow
- Servo mounting and horn interfaces
- FDM-manufactured structural components
- Internal cable routing
- Arduino-based servo control
- PCA9685 integration
- Joint range of motion
- Torque and payload limitations
- Assembly and maintenance access

### Atlas V1 Hardware

- 3 × MG995 servo motors
- 2 × MG90S micro servo motors
- Arduino Nano
- PCA9685 16-channel PWM servo driver
- External regulated servo power supply
- 3D-printed structural components

[View Atlas V1](Atlas-V1/)

---

## Future Development

Future versions may explore:

- Stepper motors
- Cycloidal gearboxes
- Planetary gearboxes
- Dedicated bearings and output shafts
- Closed-loop joint sensing
- Custom motor-control electronics
- Reduced backlash
- Higher payload capacity
- Modular end effectors
- ROS integration
- Computer vision
- Autonomous manipulation

These are development directions rather than confirmed requirements. Each future version will be based on testing and lessons learned from the previous design.

---

## Repository Structure

```text
Project-Atlas/
├── README.md
├── LICENSE
└── Atlas-V1/
    ├── README.md
    ├── CAD/
    ├── Electronics/
    ├── Firmware/
    └── Documentation/
