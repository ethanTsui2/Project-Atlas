# Atlas V1 Engineering Analysis

This directory contains the engineering analyses completed for **Atlas V1** before final fabrication. The analyses are retained as the design baseline that informed the physical build; they should not be interpreted as certified performance ratings for the completed painted assembly.

## Analysis Baseline

All analyses were performed using a frozen copy of the Atlas V1 CAD assembly.

| Property | Value |
|---|---|
| Revision | Atlas V1 Analysis Baseline |
| CAD Software | SolidWorks |
| Printed Material | Anycubic PLA V3.0 |
| Purpose | Evaluate material properties, mass properties, shoulder torque, and upper-arm structural behavior before manufacturing |

## Analysis Configuration

The analysis assembly used the maximum practical extension identified with SolidWorks Collision Detection. That configuration was selected for the static shoulder-torque calculation because it represented the highest practical moment arm available in the analyzed geometry.

---

## 1. Material Assumptions

The printed components were modeled using material properties from the **Anycubic PLA V3.0 Technical Data Sheet**. The selected values were entered into a custom SolidWorks material and used for mass-property calculations and structural analysis.

Documented information includes:

- density
- elastic modulus
- Poisson's ratio
- strength properties
- modeling assumptions
- density verification

[View material assumptions →](./Material-Assumptions.md)

---

## 2. CAD Mass Properties

Mass, volume, and center-of-mass data were extracted from SolidWorks for the primary modeled components.

[View mass-property inventory →](./Mass-Properties.md)

---

## 3. Static Shoulder Torque Analysis

The shoulder joint was evaluated using CAD-derived mass properties and a first-order static moment calculation.

### Key Results

| Quantity | Value |
|---|---:|
| Required shoulder torque | **1.047 N·m (10.67 kg·cm)** |
| Deegoo-FPV MG995 specified stall torque at 6 V | **13.00 kg·cm** |
| Static utilization | **82.1%** |
| Remaining static torque margin | **17.9%** |

The analysis indicated that the selected MG995 was theoretically capable of supporting the analyzed V1 configuration under static loading without an external payload.

Dynamic loading, acceleration, friction, wiring, fasteners, manufacturing tolerances, and payload effects were excluded from this first-order model.

[View full torque report →](./Atlas-V1-Static-Shoulder-Torque-Analysis.pdf)

---

## 4. Upper-Arm Static Structural FEA

A conservative static structural study was performed on the Atlas V1 upper arm using SolidWorks Simulation.

### Key Results

| Quantity | Value |
|---|---:|
| Maximum von Mises stress | **25.31 MPa** |
| Maximum resultant displacement | **0.755 mm** |
| Maximum equivalent strain | **0.00450** |
| Critical stress region | **Shoulder mounting bore** |
| Nominal X-Y strength ratio | **1.90** |
| Nominal Z-direction strength ratio | **1.11** |

The model used a simplified conservative support condition in which the shoulder mounting bore was fully constrained. The physical V1 joint includes additional bearing/support structure, so this study is best treated as a first-order structural assessment rather than a direct prediction of final assembled behavior.

[View full FEA report →](./Atlas-V1-Link1-Static-Structural-Analysis.pdf)

---

## Post-Build Context

Atlas V1 was subsequently manufactured and assembled as a functional prototype. Physical testing drove additional mechanical revisions, particularly around base support, clearance, wiring, and packaging.

The original analysis is preserved because it documents the engineering reasoning used before fabrication. Any future payload, backlash, accuracy, or repeatability claims should be based on separate physical tests rather than inferred from these reports.

[Return to project overview →](../../README.md)
