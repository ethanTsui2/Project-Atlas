# Atlas V1 Documentation

This directory contains the supporting engineering documentation for **Atlas V1**, including mechanical analysis, electronics documentation, and the project bill of materials.

---

## Engineering Analysis

The [`Engineering-Analysis`](./Engineering-Analysis/) directory contains the mechanical engineering analysis performed to evaluate the Atlas V1 design prior to final fabrication.

The analysis includes:

- CAD-derived component mass properties and centers of mass
- PLA material assumptions and manufacturer data
- Static shoulder torque analysis
- MG995 servo capability comparison
- Static structural finite element analysis (FEA) of the upper arm

[View Engineering Analysis →](./Engineering-Analysis/README.md)

---

## Bill of Materials

The Bill of Materials documents the major mechanical, electrical, and purchased components used to construct Atlas V1.

The BOM will be finalized following completion of the physical build.

[View Bill of Materials →](./BOM.md)

---

## Electronics & Wiring

The wiring documentation records the electrical architecture and connections used for the Atlas V1 control system, including the microcontroller, PCA9685 servo driver, external power supply, and servo connections.

[View Wiring Documentation →](./wiring.md)

---

## Documentation Structure

    Documentation/
    │
    ├── Engineering-Analysis/
    │   ├── Images/
    │   ├── References/
    │   ├── README.md
    │   ├── Mass-Properties.md
    │   ├── Material-Assumptions.md
    │   └── Engineering analysis reports
    │
    ├── BOM.md
    ├── wiring.md
    └── README.md

---

The documentation in this directory supports the design, analysis, fabrication, and validation of Atlas V1.
