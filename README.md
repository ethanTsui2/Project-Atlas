# Project Atlas

Project Atlas is a personal mechanical engineering project focused on the design, analysis, fabrication, and control of a multi-DOF robotic arm.

The project combines **mechanical design, CAD, engineering analysis, additive manufacturing, electronics, and embedded control** into a single hands-on robotic system.

The goal of Project Atlas is not simply to produce a functional robotic arm, but to apply an engineering design process from initial concept through analysis, manufacturing, assembly, and physical validation.

The mechanical system was designed in **SolidWorks** and is being manufactured using **FDM 3D printing**. Analytical work includes static joint torque calculations and finite element analysis (FEA), with material properties derived from manufacturer technical data.

---

## Project Objectives

- Design a complete robotic arm from the ground up in SolidWorks
- Develop the joint geometry and mechanical architecture of the manipulator
- Integrate servo motors, bearings, shafts, and mechanical interfaces
- Evaluate joint loading using static torque analysis
- Evaluate critical structural components using finite element analysis
- Define realistic material properties from manufacturer technical data
- Design components for practical FDM manufacturing and assembly
- Integrate electronics and embedded servo control
- Manufacture and assemble the complete mechanical system
- Perform range-of-motion, structural, and load testing
- Compare physical testing with analytical predictions
- Document engineering decisions, assumptions, limitations, and lessons learned

---

## System Overview

Project Atlas is a servo-driven robotic manipulator consisting of five primary actuated functions:

| Joint | Actuator |
|---|---|
| Base | MG995 |
| Shoulder | MG995 |
| Elbow | MG995 |
| Wrist | MG90S |
| Gripper | MG90S |

The current control architecture uses an **Arduino Nano** with a **PCA9685 16-channel PWM servo driver**.

Initial firmware provides manual joint control for individual subsystem testing before coordinated multi-joint motion is implemented.

---

## Mechanical Design

The mechanical system was developed from the ground up in SolidWorks.

The design process includes:

- Overall robotic arm architecture
- Joint geometry and range of motion
- Servo integration
- Bearing and shaft integration
- Structural link design
- Base structure
- Wrist mechanism
- Gripper mechanism
- Component packaging
- Mechanical interfaces
- Assembly modeling
- Design for FDM manufacturing

CAD models, reference components, and assembly files are available in the [`CAD`](CAD/) directory.

### CAD Resources

- [CAD Overview](CAD/)
- [Final Assembly](CAD/Final-Assembly/)
- [Source Files](CAD/Source-Files/)
- [Reference Components](CAD/Reference_Components/)

---

## Engineering Analysis

Engineering analysis is used to support mechanical design decisions before manufacturing and to establish analytical predictions that can later be compared with physical testing.

Full calculations, assumptions, simulation results, images, and supporting references are maintained in:

**[Engineering Analysis Documentation](Documentation/Engineering-Analysis/)**

### Static Shoulder Torque Analysis

Static torque analysis was performed to estimate loading at the shoulder joint and evaluate the torque requirements imposed by the arm geometry.

The analysis considers:

- Link mass
- Component mass
- Center-of-mass locations
- Lever-arm distances
- Gravitational loading
- Joint loading
- Expected payload effects

**Detailed report:**

[Atlas V1 Static Shoulder Torque Analysis](Documentation/Engineering-Analysis/Atlas-V1-Static-Shoulder-Torque-Analysis.pdf)

---

### Finite Element Analysis

Finite element analysis was performed on critical structural components to evaluate their behavior under expected loading conditions.

The analysis evaluates:

- Stress distribution
- Structural displacement
- High-stress regions
- Component stiffness
- Structural behavior under static loading

**Detailed report:**

[Atlas V1 Link 1 Static Structural Analysis](Documentation/Engineering-Analysis/Atlas-V1-Link1-Static-Structural-Analysis.pdf)

---

### Material Definition

Structural analysis requires representative mechanical properties for the FDM-printed material.

Material properties used in the analysis were defined using manufacturer technical data for the selected printing material, with assumptions documented separately for traceability.

**Supporting documentation:**

- [Material Assumptions](Documentation/Engineering-Analysis/Material-Assumptions.md)
- [Mass Properties](Documentation/Engineering-Analysis/Mass-Properties.md)
- [Engineering Analysis References](Documentation/Engineering-Analysis/References/)
- [Analysis Images](Documentation/Engineering-Analysis/Images/)

These analytical results provide a baseline that can be compared with physical testing after manufacturing and assembly.

---

## Manufacturing

The structural components of Project Atlas are designed for **FDM 3D printing**.

Manufacturing considerations incorporated into the mechanical design include:

- Print orientation
- Structural geometry
- Component stiffness
- Material usage
- Fastener accessibility
- Servo installation
- Bearing installation
- Assembly access
- Fit and tolerances

Physical testing will be used to evaluate how closely the manufactured system behaves compared with analytical predictions.

---

## Electronics

Project Atlas uses an Arduino-based electronics architecture for servo control and system development.

Current hardware includes:

- Arduino Nano
- PCA9685 16-channel PWM servo driver
- MG995 servo motors
- MG90S micro servo motors
- External servo power
- Potentiometers for initial manual control

Wiring diagrams and electronics documentation are available in:

**[Electronics Documentation](Electronics/)**

---

## Firmware

Initial firmware focuses on manual control and individual joint testing.

This allows each actuator and mechanical subsystem to be validated independently before implementing coordinated robotic arm motion.

Firmware is available in:

**[Firmware](Firmware/)**

Development currently includes:

- Basic servo control
- Manual joint control
- PCA9685 servo control
- Individual actuator testing

---

## Current Status

### Current Phase: Manufacturing and Assembly

The primary mechanical design and initial engineering analysis are complete. Structural components are currently being manufactured using FDM 3D printing.

### Completed

- Robotic arm architecture
- SolidWorks CAD development
- Mechanical assembly design
- Joint geometry
- Servo integration
- Bearing and shaft integration
- Gripper design
- Static shoulder torque analysis
- Material property definition
- Finite element analysis
- Electronics architecture
- Wiring documentation
- Initial servo-control firmware

### In Progress

- FDM manufacturing of structural components
- Mechanical assembly
- Component fit validation
- Tolerance validation

### Planned

- Complete mechanical assembly
- Install actuators and bearings
- Integrate electronics
- Complete cable routing
- Develop coordinated multi-joint control
- Perform range-of-motion testing
- Perform physical load testing
- Validate structural performance
- Compare experimental results with analytical predictions
- Document final assembly and test results

---

## Engineering Workflow

Project Atlas follows a design-build-test engineering workflow:

**Requirements → CAD → Analysis → Manufacturing → Assembly → Testing → Validation**

The analytical work performed before manufacturing establishes expected mechanical behavior.

Once the physical system is assembled, experimental testing will be used to evaluate those predictions and identify discrepancies between the analytical model and the manufactured system.

This provides a feedback loop between **engineering analysis and real-world performance** rather than treating CAD, simulation, and fabrication as independent activities.

---

## Repository Structure

```text
Project-Atlas/
│
├── CAD/
│   ├── Final-Assembly/
│   ├── Reference_Components/
│   └── Source-Files/
│
├── Design-Evolution/
│
├── Documentation/
│   └── Engineering-Analysis/
│       ├── Images/
│       ├── References/
│       ├── Atlas-V1-Link1-Static-Structural-Analysis.pdf
│       ├── Atlas-V1-Static-Shoulder-Torque-Analysis.pdf
│       ├── Mass-Properties.md
│       └── Material-Assumptions.md
│
├── Electronics/
│
├── Firmware/
│
├── LICENSE
└── README.md
```

### Directory Guide

| Directory | Contents |
|---|---|
| [`CAD`](CAD/) | SolidWorks source files, final assembly resources, and reference components |
| [`Design-Evolution`](Design-Evolution/) | Documentation of mechanical design development and major design decisions |
| [`Documentation`](Documentation/) | Engineering calculations, analysis, assumptions, results, and supporting documentation |
| [`Electronics`](Electronics/) | Wiring diagrams and electronics documentation |
| [`Firmware`](Firmware/) | Arduino and servo-control firmware |

---

## Validation Plan

After manufacturing and assembly, Project Atlas will undergo physical testing to evaluate the performance of the completed system.

Planned validation includes:

- Joint range-of-motion testing
- Servo and horn fit testing
- Mechanical assembly validation
- Cable-routing validation
- Structural load testing
- Shoulder and elbow performance testing
- Gripper testing
- Multi-joint motion testing
- Comparison of experimental behavior with analytical predictions

The results will be used to evaluate the assumptions made during the design and analysis stages and identify potential improvements.

---

## Project Scope

Project Atlas is currently maintained as a **standalone robotic arm engineering project**.

The repository documents the complete development process—from mechanical design and analytical validation through fabrication, electronics integration, firmware development, and physical testing.

The emphasis is on documenting not only the final design, but also the engineering reasoning used to develop and validate it.

---

## License

This project is licensed under the MIT License.

See [`LICENSE`](LICENSE) for details.
