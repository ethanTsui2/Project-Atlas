# Material Assumptions

This document records the material properties used for the preliminary engineering analysis and finite element simulations of Atlas V1.

## Printed Components

All structural components were assigned a custom PLA material in SolidWorks.

The material model uses **Linear Elastic Isotropic** behavior and is intended for preliminary structural analysis.

| Property | Value | Units |
|----------|------:|------|
| Material | PLA | - |
| Model Type | Linear Elastic Isotropic | - |
| Elastic Modulus | 35,688 | kgf/cm² |
| Poisson's Ratio | 0.36 | - |
| Shear Modulus | 13,120 | kgf/cm² |
| Density | 0.00124 | kg/cm³ |
| Tensile Strength | 611.8 | kgf/cm² |
| Compressive Strength | 713.8 | kgf/cm² |
| Yield Strength | 560.8 | kgf/cm² |
| Thermal Expansion Coefficient | 6.8 × 10⁻⁵ | /°C |
| Thermal Conductivity | 3.11 × 10⁻⁵ | cal/(cm·s·°C) |
| Specific Heat | 0.43 | cal/(kg·°C) |

---

## Simulation Assumptions

The SolidWorks simulations model PLA as a homogeneous, isotropic material.

Actual FDM printed components exhibit anisotropic behavior due to:

- layer orientation
- wall count
- infill percentage
- print quality
- inter-layer adhesion

Therefore, the engineering analysis is intended to:

- estimate structural behavior
- identify high-stress regions
- compare design alternatives
- support design decisions before manufacturing

Physical testing of the printed robot will be used to validate these analytical results.

---

## Notes

These material properties represent the custom PLA material assigned to the Atlas V1 CAD model during pre-manufacturing engineering analysis.
