# Project Atlas

**Project Atlas** is a completed 5-DOF desktop robotic manipulator that I designed, analyzed, 3D printed, assembled, wired, programmed, tested, and iterated from scratch.

<p align="center">
  <img src="docs/assets/atlas-photo.jpeg" alt="Completed Project Atlas robotic arm" width="760">
</p>

<p align="center">
  <a href="https://ethantsui2.github.io/Project-Atlas/"><b>Portfolio Page</b></a> ·
  <a href="docs/assets/atlas-demo.mp4"><b>Demo Video</b></a> ·
  <a href="CAD/"><b>CAD</b></a> ·
  <a href="Documentation/Engineering-Analysis/"><b>Engineering Analysis</b></a>
</p>

---

## At a Glance

| Area | Final V1 implementation |
|---|---|
| Mechanical design | SolidWorks, modular FDM-printed structure |
| Actuation | 3× MG995 + 2× MG90S servos |
| Control | Arduino Nano + PCA9685 PWM driver |
| User input | 5 potentiometers |
| User interface | 16×2 I2C LCD |
| Servo power | Regulated 5 V, 10 A external supply |
| Analysis | CAD mass properties, static torque analysis, SolidWorks FEA |
| Manufacturing | PLA FDM printing, mechanical assembly, painted finish |
| Status | **Atlas V1 physical prototype complete** |

## What I Engineered

- Developed the complete arm architecture and joint packaging in SolidWorks.
- Iterated the upper arm, forearm, shoulder structure, wrist, gripper, base housing, and controller enclosure for manufacturability and serviceability.
- Added a printed slew-bearing base using **six steel balls** to improve base support and reduce the tilting observed during physical testing.
- Integrated five servo channels with an Arduino Nano and PCA9685 controller.
- Built a five-potentiometer manual controller with a 16×2 LCD for live joint/angle feedback.
- Used CAD-derived mass properties for static shoulder torque analysis and performed FEA on the upper arm.
- Finished the printed arm using filler/primer, metallic silver, Dupli-Color Metalcast red, and gloss clear coat.

## Final Control System

The final firmware reads five potentiometers, averages eight ADC samples per input, applies a small deadband to reduce unnecessary servo updates, drives the PCA9685 at 50 Hz, and reports the active joint angle on the LCD.

Firmware labels used in the final sketch are:

`BASE` · `ELBOW` · `WRIST` · `PIVOT` · `JAWS`

[View firmware →](Firmware/)

## Engineering Highlights

### Mechanical iteration
Physical testing drove several major redesigns rather than treating the first CAD model as final. The final build addresses base instability, joint interference, forearm clearance, cable routing, servo-horn interference, and gripper packaging while keeping components accessible for repair.

### Analysis before fabrication
The design was checked using SolidWorks mass properties, static shoulder torque calculations, and a static structural FEA study. These analyses are retained as the engineering baseline used to support design decisions before final assembly.

[View engineering analysis →](Documentation/Engineering-Analysis/)

### Build and integration
Atlas was manufactured as a real assembled system rather than a CAD-only project. The final prototype combines printed structure, bearings, wiring, external servo power, embedded control, a custom controller enclosure, and a finished painted surface.

[View build notes →](Documentation/Build-Notes.md)

---

## Repository Guide

| Folder / document | What it contains |
|---|---|
| [`CAD/`](CAD/) | Final mechanical architecture, CAD views, source-file guidance, and final CAD package manifest |
| [`Design-Evolution/`](Design-Evolution/) | Major design stages, problems found, and why the final architecture changed |
| [`Documentation/Engineering-Analysis/`](Documentation/Engineering-Analysis/) | Torque analysis, FEA, material assumptions, and CAD mass properties |
| [`Documentation/BOM.md`](Documentation/BOM.md) | Final hardware/materials plus development procurement notes |
| [`Documentation/Build-Notes.md`](Documentation/Build-Notes.md) | Manufacturing, slew bearing, assembly, wiring, and surface finishing |
| [`Electronics/`](Electronics/) | System architecture, power separation, wiring, and connection tables |
| [`Firmware/`](Firmware/) | Final control firmware plus retained development sketches |
| [`docs/`](docs/) | GitHub Pages portfolio site, resume, photo, and demo video |

## Final CAD Package

The final CAD package supplied for Atlas V1 includes the completed SolidWorks assembly, printable STL exports, controller enclosure parts, base-housing revisions, gripper components, and a separate slew-bearing package. The native assembly filenames are preserved to avoid breaking SolidWorks references.

[View CAD documentation →](CAD/)

## Scope and Limitations

Atlas V1 is an engineering prototype built to demonstrate an end-to-end design-build-test workflow. The existing torque and FEA work are first-order design checks; they are not intended as certified performance ratings. No payload, backlash, or repeatability value is claimed unless supported by a documented test.

---

## Development Workflow

**Requirements → CAD → Analysis → FDM Manufacturing → Assembly → Electronics → Firmware → Physical Testing → Redesign**

The main value of Project Atlas is the complete iteration loop: problems found in the physical build were fed back into the mechanical, electrical, and software design instead of being hidden in the final presentation.

## License

This project is released under the [MIT License](LICENSE).
