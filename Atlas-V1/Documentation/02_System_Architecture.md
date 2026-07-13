# System Architecture

## Overview

Project Atlas is a modular 4-degree-of-freedom desktop robotic manipulator designed around affordability, modularity, and ease of manufacturing. The system combines mechanical design, embedded control, servo actuation, manual input, motion recording, and 3D-printed structure.

---

## Overall System Diagram

```mermaid
flowchart TD
    P[5V 3A Power Supply] --> PD[Power Distribution]

    PD --> A[Arduino Uno]
    PD --> S1[MG90S Servo 1]
    PD --> S2[MG90S Servo 2]
    PD --> S3[MG90S Servo 3]
    PD --> S4[MG90S Servo 4]

    POT[4x 10k Potentiometers] --> A
    BTN[2x Push Buttons] --> A
    LCD[LCD1602 Display] --> A

    A --> SIG[Servo Signal Outputs]
    SIG --> S1
    SIG --> S2
    SIG --> S3
    SIG --> S4

    S1 --> ARM[4-DOF Robotic Arm]
    S2 --> ARM
    S3 --> ARM
    S4 --> ARM
```

---

## Mechanical Architecture

```mermaid
flowchart TD
    B[Base] --> SH[Shoulder Joint]
    SH --> EL[Elbow Joint]
    EL --> WR[Wrist Joint]
    WR --> GR[Gripper]
```

| Subsystem | Purpose |
|---|---|
| Base | Supports the robot and houses electronics |
| Shoulder Joint | Primary lifting joint |
| Elbow Joint | Extends and retracts the arm |
| Wrist Joint | Adjusts end-effector orientation |
| Gripper | Grasps objects |
| Controller Panel | Holds potentiometers, buttons, and LCD |

---

## Electrical Architecture

| Component | Role |
|---|---|
| Arduino Uno | Main development controller |
| MG90S Servos | Joint actuation |
| 10k Potentiometers | Manual joint input |
| Push Buttons | Save/playback control |
| LCD1602 | User feedback |
| 5V 3A Power Supply | External power source |
| Perfboard | Final electronics platform |

---

## Power Architecture

```mermaid
flowchart TD
    PS[5V 3A Adapter] --> RAIL[5V Power Rail]
    RAIL --> SERVO[Servo Power Bus]
    RAIL --> ARD[Arduino 5V]
    SERVO --> M1[Servo 1]
    SERVO --> M2[Servo 2]
    SERVO --> M3[Servo 3]
    SERVO --> M4[Servo 4]
    GND[Common Ground] --> ARD
    GND --> SERVO
```

### Power Design Notes

- Servos are powered directly from the external 5V supply.
- Arduino and servo power must share a common ground.
- USB power is used only during development.
- The Arduino should not power all servos through its onboard 5V regulator.
- A large capacitor will be placed across the servo power rail to reduce voltage dips.

---

## Firmware Architecture

```mermaid
flowchart TD
    START[Start] --> READ[Read Potentiometers]
    READ --> FILTER[Smooth Analog Input]
    FILTER --> MAP[Map Input to Servo Angles]
    MAP --> DRIVE[Drive Servos]
    DRIVE --> MODE{Mode?}

    MODE --> MANUAL[Manual Control]
    MODE --> RECORD[Record Position]
    MODE --> PLAYBACK[Playback Saved Positions]

    RECORD --> SAVE[Store Servo Angles]
    PLAYBACK --> MOVE[Move Through Saved Sequence]

    SAVE --> LCD[Update LCD]
    MOVE --> LCD
    MANUAL --> LCD
```

---

## Firmware Modes

| Mode | Function |
|---|---|
| Manual | Potentiometers directly control each servo |
| Record | Saves the current arm position |
| Playback | Replays saved motion positions |
| Pause | Stops playback while retaining saved positions |

---

## User Interface

| Component | Function |
|---|---|
| Potentiometer 1 | Base or shoulder control |
| Potentiometer 2 | Shoulder or elbow control |
| Potentiometer 3 | Wrist control |
| Potentiometer 4 | Gripper control |
| Button 1 | Save position |
| Button 2 | Play/pause sequence |
| LCD1602 | Displays mode, saved count, and status |

Example display:

```text
Mode: Manual
Saved: 03
```

---

## Development Versions

| Version | Description |
|---|---|
| V0.1 | Single-servo breadboard proof of concept |
| V0.2 | Four-servo breadboard prototype |
| V0.3 | Perfboard electronics and LCD integration |
| V1.0 | Complete 3D-printed robotic arm |
| V2.0 | Future upgrades such as custom PCB or inverse kinematics |

---

## System Summary

| Category | Selection |
|---|---|
| Degrees of Freedom | 4 |
| Controller | Arduino Uno |
| Future Controller | Arduino Nano |
| Actuators | MG90S Metal Gear Servos |
| Manual Control | 10k Potentiometers |
| User Interface | LCD1602 + Push Buttons |
| Manufacturing | FDM 3D Printing |
| CAD Software | SolidWorks |
| Programming | Arduino IDE / C++ |
| Power | 5V 3A External Supply |
