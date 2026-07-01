# System Architecture

## Overview

Project Atlas is a modular 4-degree-of-freedom (4-DOF) desktop robotic manipulator designed around affordability, modularity, and ease of manufacturing. The system uses an Arduino-based embedded controller, MG90S metal gear servos for actuation, potentiometers for manual control, push buttons for recording and playback, and an LCD1602 display for user feedback.

The project is being developed in stages, beginning with breadboard prototyping and progressing toward a fully integrated perfboard-based embedded system housed within a custom-designed 3D printed robotic arm.

---

# Overall System Architecture

```text
                    +----------------------+
                    |    5V 3A Power       |
                    |      Supply          |
                    +----------+-----------+
                               |
                               v
                     +-------------------+
                     | Power Distribution|
                     +----+----------+---+
                          |          |
                 +--------+          +---------+
                 |                             |
                 v                             v
         +---------------+            +----------------+
         |  Arduino Uno  |            |   Servo Power  |
         +-------+-------+            +--------+-------+
                 |                             |
        ---------------------        -------------------------
        |        |         |         |    |    |    |        |
        v        v         v         v    v    v    v        v
 Potentiometers Buttons LCD1602   Servo1 Servo2 Servo3 Servo4
                 |
                 v
          Motion Recording
            & Playback
```

---

# Mechanical Architecture

The robotic arm consists of four independent rotational joints.

```text
Base
 │
 ├── Shoulder
 │
 ├── Elbow
 │
 ├── Wrist
 │
 └── Gripper
```

## Mechanical Subsystems

| Subsystem | Description |
|------------|-------------|
| Base | Houses electronics and supports the arm |
| Shoulder Joint | Primary lifting joint |
| Elbow Joint | Extends and retracts the arm |
| Wrist Joint | Adjusts end-effector orientation |
| Gripper | Grasps objects |
| Controller Panel | Holds potentiometers, LCD, and buttons |

---

# Electrical Architecture

## Inputs

- Four 10k potentiometers
- Two push buttons

## Controller

- Arduino Uno (development)
- Arduino Nano (planned final version)

## Outputs

- Four MG90S servo motors
- LCD1602 display

---

# Firmware Architecture

The firmware operates in four primary stages.

```text
Read Potentiometers
        │
        ▼
Convert to Servo Angles
        │
        ▼
Drive Servos
        │
        ▼
Save / Playback Positions
        │
        ▼
Update LCD Display
```

### Firmware Modes

| Mode | Function |
|--------|----------|
| Manual | Potentiometers directly control each servo |
| Record | Saves current arm position |
| Playback | Replays saved motion sequence |
| Pause | Stops playback while retaining saved positions |

---

# Power Architecture

```text
5V 3A Adapter
      │
      ├──────── Servo 1
      ├──────── Servo 2
      ├──────── Servo 3
      ├──────── Servo 4
      │
      └──────── Arduino
```

### Design Notes

- Servos are powered directly from the external 5V supply.
- Arduino shares a common ground with the servo power.
- USB power is used only during development.
- A large electrolytic capacitor is placed across the servo power rail to reduce voltage dips.

---

# Software Components

| Component | Purpose |
|------------|----------|
| Servo Library | Controls servo motors |
| Analog Input | Reads potentiometers |
| EEPROM (Future) | Stores recorded positions |
| LCD Library | Displays system status |

---

# Development Versions

| Version | Description |
|-----------|------------|
| V0.1 | Single-servo breadboard testing |
| V0.2 | Four-servo breadboard prototype |
| V0.3 | Perfboard electronics |
| V1.0 | Complete robotic arm |
| V2.0 | Future improvements |

---

# Future Improvements

Potential upgrades include:

- Arduino Nano
- Custom PCB
- ESP32 wireless control
- Bluetooth interface
- Inverse kinematics
- ROS compatibility
- Camera-based vision
- Higher torque servos
- Bearing-supported joints

---

# System Summary

| Category | Selection |
|-----------|-----------|
| Degrees of Freedom | 4 |
| Controller | Arduino Uno (Development) |
| Final Controller | Arduino Nano |
| Actuators | MG90S Metal Gear Servos |
| Manual Control | Four 10k Potentiometers |
| User Interface | LCD1602 + Push Buttons |
| Manufacturing | FDM 3D Printing |
| CAD Software | SolidWorks |
| Programming | Arduino IDE (C++) |
| External Power | 5V 3A Adapter |
