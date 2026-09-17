# Atlas V1 Mass Inventory

This table records the mass properties I pulled directly from SolidWorks for the main Atlas V1 components.

The values are based on the CAD model using the verified **Anycubic PLA V3.0** material. I used this data as the starting point for the center-of-mass, torque, and FEA work.

| Component | Material | Mass (g) | Volume (mm³) | COM X (mm) | COM Y (mm) | COM Z (mm) | Evidence |
|:----------|:--------:|---------:|-------------:|-----------:|-----------:|-----------:|:--------:|
| **Printed Components** |||||||||
| Base Housing | PLA | 664.33 | 535753.64 | -0.54 | 19.66 | 0.56 | [View](Images/Base-Housing-Mass-Properties.png) |
| Shoulder Structure | PLA |196.29 |158294.43 |0.00 |40.84 |-0.06 | [View](Images/Wrist-Structure-Mass-Properties.png)|
| Link 1 Structure | PLA | 283.81 | 228876.24 | 582.93 | 991.96 | 1316.60 | [View](Images/Link-1-Mass-Properties.png) |
| Link 2 Structure | PLA | 164.24 | 132452.17 | 0.00 | 72.44 | -34.82 | [View](Images/Link-2-Mass-Properties.png) |
| Complete End Effector | PLA |30.23 |24378.13 |410.32 | 894.39|1307.39 |[View](Images/End-Effector-Mass-Properties.png)|
| **Purchased Components** |||||||||
| Shoulder MG995 Servo | Manufacturer | 55 | | | | | |
| Elbow MG995 Servo | Manufacturer | 55 | | | | | |
| Wrist MG90S Servo | Manufacturer | 13.4 | | | | | |
| Gripper MG90S Servo | Manufacturer | 13.4 | | | | | |
| **Estimated Components** |||||||||
| Fasteners & Heat-Set Inserts | Steel / Brass | | | | | | |
| Wiring | Copper / PVC | | | | | | |
| Payload (Design Target) | Variable | | | | | | |

> **Note:** Printed component values came from SolidWorks using the verified Anycubic PLA material. Servo masses are based on manufacturer specifications.

## Mass Summary

| Category | Mass (g) |
|-----------|---------:|
| Printed Components | **1338.90** |
| Servos | **136.80** |
| Estimated Hardware | - |
| Estimated Wiring | - |
| **Estimated Total Robot Mass** | **1475.70 + hardware** |
