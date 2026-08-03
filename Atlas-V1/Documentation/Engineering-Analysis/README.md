# Atlas V1 Engineering Analysis

This directory contains the engineering analyses performed during the design and validation of **Atlas V1**. These studies verify the mechanical design before fabrication and provide the engineering justification for the final design decisions.

---

# Analysis Baseline

All analyses were performed using a frozen copy of the final Atlas V1 CAD assembly.

| Property | Value |
|----------|-------|
| Revision | Atlas V1 Analysis Baseline |
| Status | Mechanical design frozen for analysis |
| CAD Software | SolidWorks |
| Material | Anycubic PLA V3.0 |
| Purpose | Validate mass properties, joint torque, and structural integrity prior to manufacturing |

---

# Analysis Configuration

The Atlas V1 shoulder joint cannot rotate to a perfectly horizontal position due to intentional mechanical interference within the joint geometry.

Therefore, all engineering calculations were performed using the **maximum collision-limited extension** obtained through SolidWorks Collision Detection. This represents the worst-case static loading condition achievable by the current design.

---

# Engineering Reports

## 1. Component Mass Inventory

Mass properties and centers of mass were extracted directly from SolidWorks for each major printed component.

**Contents**

- Component mass
- Volume
- Center of mass
- Material properties

 Report

- [Atlas-V1-Mass-Inventory](./Atlas-V1-Mass-Inventory.md)

---

## 2. Static Shoulder Torque Analysis

The shoulder joint was evaluated using SolidWorks mass properties together with manual engineering calculations.

The analysis includes:

- Free-body diagram
- CAD-derived center-of-mass locations
- Collision-limited configuration
- Static moment calculations
- Servo capability comparison

### Results

| Quantity | Value |
|---|---:|
| Required shoulder torque | **1.047 N·m** |
| Required shoulder torque | **10.67 kg·cm** |
| Deegoo-FPV MG995 specified stall torque (6 V) | **13.00 kg·cm** |
| Static utilization | **82.1%** |
| Remaining static margin | **17.9%** |

The analysis indicates that the selected MG995 servo is theoretically capable of supporting Atlas V1 under static loading without an external payload. Dynamic loading, friction, fasteners, wiring, and payload effects were intentionally excluded from this first-order engineering estimate.

 Report

- [Atlas-V1-Static-Shoulder-Torque-Analysis](./Atlas-V1-Static-Shoulder-Torque-Analysis.pdf)

---

## 3. Finite Element Analysis (In Progress)

Finite Element Analysis (FEA) is being performed on the primary structural components to evaluate:

- Von Mises stress
- Maximum displacement
- Factor of Safety
- Critical stress concentrations

 Report

- Atlas-V1-FEA-Analysis *(Coming Soon)*

---

# Engineering Workflow

The Atlas V1 engineering process followed the workflow below.

1. Freeze final CAD geometry
2. Assign verified material properties
3. Extract mass properties
4. Calculate static shoulder torque
5. Compare required torque against servo specification
6. Perform structural FEA
7. Validate through physical testing

---


