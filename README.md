# Project Atlas

Project Atlas is a 5-DOF desktop robotic manipulator that I designed, 3D printed, assembled, wired, programmed, tested, and improved from scratch.

<p align="center">
  <img src="docs/assets/atlas-photo.jpeg" alt="Completed Project Atlas robotic arm" width="760">
</p>

<p align="center">
  <a href="https://ethantsui2.github.io/Project-Atlas/"><b>Portfolio Page</b></a> |
  <a href="docs/assets/atlas-demo.mp4"><b>Demo Video</b></a> |
  <a href="CAD/"><b>CAD</b></a> |
  <a href="Documentation/Engineering-Analysis/"><b>Engineering Analysis</b></a>
</p>

---

## At a Glance

| Area | Final V1 setup |
|---|---|
| Mechanical design | SolidWorks, modular FDM-printed structure |
| Actuation | 3x MG995 + 2x MG90S servos |
| Control | Arduino Nano + PCA9685 PWM driver |
| User input | 5 potentiometers |
| User interface | 16x2 I2C LCD |
| Servo power | Regulated 5 V, 10 A external supply |
| Analysis | CAD mass properties, static torque analysis, SolidWorks FEA |
| Manufacturing | PLA FDM printing, mechanical assembly, painted finish |
| Status | **Atlas V1 prototype complete** |

## What I Worked On

- Designed the full arm layout and joint packaging in SolidWorks.
- Redesigned the upper arm, forearm, shoulder, wrist, gripper, base, and controller enclosure after physical testing.
- Added a printed slew-bearing base using **six steel balls** after the original base started tilting under load.
- Integrated five servo channels using an Arduino Nano and PCA9685.
- Built a five-potentiometer controller with a 16x2 LCD for live joint and angle feedback.
- Used CAD mass properties for a shoulder torque calculation and ran FEA on the upper arm.
- Finished the printed parts with filler primer, metallic silver, Dupli-Color Metalcast red, and gloss clear coat.

## Final Control System

The final firmware reads five potentiometers, averages eight analog readings per input, uses a 2 degree deadband to reduce unnecessary updates, drives the PCA9685 at 50 Hz, and displays the active joint angle on the LCD.

Firmware labels:

`BASE` | `ELBOW` | `WRIST` | `PIVOT` | `JAWS`

[View firmware](Firmware/)

## Engineering Highlights

### Mechanical iteration
The physical build exposed problems that were not obvious in CAD. The main ones were base tilting, forearm interference, cable pinching, servo-horn interference, wrist clearance, and gripper packaging. I went back into the CAD and changed the design around those issues instead of forcing the first version to work.

### Analysis before fabrication
Before the final build, I used SolidWorks mass properties, a static shoulder torque calculation, and a structural FEA study to check the design and better understand where the main loads were coming from.

[View engineering analysis](Documentation/Engineering-Analysis/)

### Build and integration
Atlas was built as a complete working prototype, not just a CAD model. The final system combines the printed structure, bearings, wiring, external servo power, embedded control, a separate controller enclosure, and the final painted finish.

[View build notes](Documentation/Build-Notes.md)

---

## Repository Guide

| Folder / document | What it contains |
|---|---|
| [`CAD/`](CAD/) | Final SolidWorks package, STL exports, slew-bearing files, and assembly views |
| [`Design-Evolution/`](Design-Evolution/) | The main versions of Atlas and the problems that led to each redesign |
| [`Documentation/Engineering-Analysis/`](Documentation/Engineering-Analysis/) | Torque analysis, FEA, material assumptions, and CAD mass properties |
| [`Documentation/BOM.md`](Documentation/BOM.md) | Hardware, materials, and documented project purchases |
| [`Documentation/Build-Notes.md`](Documentation/Build-Notes.md) | Manufacturing, assembly, slew bearing, electronics integration, and finishing |
| [`Electronics/`](Electronics/) | Control architecture, wiring, and pin assignments |
| [`Firmware/`](Firmware/) | Final control code and earlier development sketches |
| [`docs/`](docs/) | GitHub Pages site, resume, photo, and demo video |

## Final CAD Package

The final mechanical files are in [`CAD/Final-Package/`](CAD/Final-Package/), with the base bearing files in [`CAD/Slew-Bearing/`](CAD/Slew-Bearing/). I kept the original SolidWorks filenames so the assembly references are not broken.

[View CAD documentation](CAD/)

## Scope

Atlas V1 is a working engineering prototype. The torque calculation and FEA were design checks used during development. I have not listed payload, backlash, accuracy, or repeatability values because I did not run a controlled test for those yet.

---

## Development Process

**Requirements -> CAD -> Analysis -> 3D Printing -> Assembly -> Electronics -> Firmware -> Testing -> Redesign**

The biggest thing I learned from this project was how much changes once a design leaves CAD. Most of the useful improvements came from building it, finding what did not work, and going back to fix it.

## License

This project is released under the [MIT License](LICENSE).

