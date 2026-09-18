# Atlas V1 Engineering Analysis

I completed these analyses before the final Atlas V1 build to check the main mechanical loads and make better design decisions before printing everything.

They are design checks, not certified performance ratings for the finished robot.

## Analysis Baseline

All of the analysis was done using a frozen copy of the Atlas V1 CAD assembly.

| Property | Value |
|---|---|
| Revision | Atlas V1 Analysis Baseline |
| CAD Software | SolidWorks |
| Printed Material | Anycubic PLA V3.0 |
| Purpose | Check material properties, mass properties, shoulder torque, and upper-arm structural behavior before manufacturing |

## Analysis Configuration

For the shoulder torque calculation, I used the maximum practical extension I could reach before collision in SolidWorks. I chose that position because it gave the largest practical moment arm in the analyzed geometry.

---

## 1. Material Assumptions

I created a custom SolidWorks material using values from the **Anycubic PLA V3.0 Technical Data Sheet**.

The material documentation includes:

- density
- elastic modulus
- Poisson's ratio
- strength properties
- modeling assumptions
- density verification

[View material assumptions](./Material-Assumptions.md)

---

## 2. CAD Mass Properties

I extracted mass, volume, and center-of-mass data from SolidWorks for the main modeled components.

[View mass-property inventory](./Mass-Properties.md)

---

## 3. Static Shoulder Torque Analysis

I used the CAD mass properties and a static moment calculation to estimate the shoulder torque requirement.

### Key Results

| Quantity | Value |
|---|---:|
| Required shoulder torque | **1.047 N·m (10.67 kg·cm)** |
| Deegoo-FPV MG995 specified stall torque at 6 V | **13.00 kg·cm** |
| Static utilization | **82.1%** |
| Remaining static torque margin | **17.9%** |

Based on this calculation, the MG995 was theoretically capable of holding the analyzed configuration under static loading with no external payload.

This calculation did not include dynamic loading, acceleration, friction, wiring, fasteners, manufacturing tolerances, or payload effects.

[View full torque report](./Atlas-V1-Static-Shoulder-Torque-Analysis.pdf)

---

## 4. Upper-Arm Static Structural FEA

I also ran a static structural study on the upper arm in SolidWorks Simulation.

### Key Results

| Quantity | Value |
|---|---:|
| Maximum von Mises stress | **25.31 MPa** |
| Maximum resultant displacement | **0.755 mm** |
| Maximum equivalent strain | **0.00450** |
| Critical stress region | **Shoulder mounting bore** |
| Nominal X-Y strength ratio | **1.90** |
| Nominal Z-direction strength ratio | **1.11** |

For the model, I fully constrained the shoulder mounting bore. The real joint has additional bearing and support structure, so I treated the FEA as a conservative design check instead of an exact prediction of the assembled arm.

[View full FEA report](./Atlas-V1-Link1-Static-Structural-Analysis.pdf)

---

## After the Analysis

After building Atlas, physical testing led to more changes around the base support, joint clearance, wiring, and packaging.

I kept the original analysis in the repo because it shows the reasoning I used before fabrication. Any future payload, backlash, accuracy, or repeatability numbers should come from physical testing rather than being estimated from these reports.

[Return to project overview](../../README.md)

