# Atlas V1 Engineering Analysis

This directory contains the engineering analyses completed for **Atlas V1**. The purpose of this documentation is to verify the mechanical design before fabrication and provide the engineering basis for major design decisions.

---

## Analysis Baseline

All analyses were performed using a frozen copy of the final Atlas V1 CAD assembly.

| Property | Value |
|---|---|
| Revision | Atlas V1 Analysis Baseline |
| Design Status | Mechanical design frozen for analysis |
| CAD Software | SolidWorks |
| Printed Material | Anycubic PLA V3.0 |
| Purpose | Validate material properties, mass properties, shoulder torque, and structural integrity before manufacturing |

---

## Analysis Configuration

The Atlas V1 shoulder joint cannot rotate to a perfectly horizontal position because of interference within the joint geometry.

The maximum practical extension was identified using **SolidWorks Collision Detection**. This collision-limited configuration was then fixed and used for the static torque analysis because it represents the highest practical loading condition achievable by the current design.

---

## Engineering Reports

### 1. Material Assumptions

The printed components were modeled using material properties obtained from the **Anycubic PLA V3.0 Technical Data Sheet**. The selected values were entered into a custom SolidWorks material and used for mass-property calculations and structural analysis.

**Documented information**

- Material source
- Density
- Elastic modulus
- Poisson's ratio
- Strength properties
- Modeling assumptions
- Density verification

**Report**

- [Atlas V1 Material Assumptions](./Material-Assumptions.md)

---

### 2. Component Mass Inventory

Mass, volume, and center-of-mass data were extracted from SolidWorks for the primary printed components after assigning the documented PLA material.

**Documented information**

- Component mass
- Component volume
- Center-of-mass coordinates
- Supporting SolidWorks screenshots

**Report**

- [Atlas V1 Mass Inventory](./Mass-Properties.md)

---

### 3. Static Shoulder Torque Analysis

The shoulder joint was evaluated using CAD-derived mass properties and manual static moment calculations.

The analysis includes:

- Maximum collision-limited arm configuration
- Free-body diagram
- Component weights
- Center-of-mass locations
- Horizontal moment arms
- Static shoulder torque calculation
- Comparison with the selected MG995 servo specification

#### Key Results

| Quantity | Value |
|---|---:|
| Required shoulder torque | **1.047 N·m (10.67 kg·cm)** |
| Deegoo-FPV MG995 specified stall torque at 6 V | **13.00 kg·cm** |
| Static utilization | **82.1%** |
| Remaining static torque margin | **17.9%** |

The analysis indicates that the selected MG995 servo is theoretically capable of supporting Atlas V1 under static loading without an external payload.

Dynamic loading, acceleration, friction, wiring, fasteners, manufacturing tolerances, and payload effects were excluded from this first-order analysis.

**Report**

- [Atlas V1 Static Shoulder Torque Analysis](./Atlas-V1-Static-Shoulder-Torque-Analysis.pdf)

---

### 4. Structural Finite Element Analysis

**Status: In Progress**

SolidWorks Simulation will be used to evaluate the structural performance of the primary printed components under representative static loading.

The analysis will document:

- Fixtures and applied loads
- Mesh settings
- Von Mises stress
- Maximum displacement
- Factor of safety
- Critical stress concentrations

The completed FEA results will be added to this directory.

---

## Engineering Validation Workflow

1. Freeze the final CAD geometry.
2. Document and assign material properties.
3. Extract component mass properties.
4. Determine the maximum collision-limited configuration.
5. Calculate the required static shoulder torque.
6. Compare the required torque with the selected servo specification.
7. Perform structural FEA on critical printed components.
8. Validate the analytical results through physical testing.

---

## Current Status

| Analysis | Status |
|---|---|
| Material assumptions | Complete |
| Component mass inventory | Complete |
| Static shoulder torque analysis | Complete |
| Structural FEA | In progress |
| Physical validation | Pending fabrication |
