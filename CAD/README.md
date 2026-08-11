# Atlas V1 CAD

This folder contains the complete mechanical CAD design for **Project Atlas V1**, including the final assembly, reference components, and design resources used throughout development.

---

# Final Assembly

The current mechanical design is shown below.

## Isometric View

![Atlas V1 Isometric](Final-Assembly/Atlas-V1-Isometric.png)

---

## Side View

![Atlas V1 Side](Final-Assembly/Atlas-V1-Side.png)

---

## Top View

![Atlas V1 Top](Final-Assembly/Atlas-V1-Top.png)

---

## Extended Configuration

![Atlas V1 Folded](Final-Assembly/Atlas-V1-Extended.png)

---

# Mechanical Specifications

| Component | Description |
|------------|-------------|
| Degrees of Freedom | 5 DOF |
| Base Servo | MG995 |
| Shoulder Servo | MG995 |
| Elbow Servo | MG995 |
| Wrist Servo | MG90S |
| Gripper Servo | MG90S |
| CAD Software | SolidWorks |
| Manufacturing | FDM 3D Printing |

---

# Design Features

- Lightweight ribbed arm links
- Modular servo housings
- Split-print construction
- Internal cable routing
- Collision-checked assembly
- Heat-set insert mounting
- Serviceable servo covers
- Modular gripper assembly

---

# Folder Contents

```text
CAD/
├── Final-Assembly/
│   └── Final CAD screenshots
├── Source-Files/
│   └── Native SolidWorks parts and assemblies
├── Reference_Components/
│   ├── MG995/
│   └── MG90S/
└── README.md
│
└── README.md
```

```markdown
## Source Files

The `Source-Files` directory contains the complete SolidWorks assembly and its referenced components.

The files were exported using SolidWorks Pack and Go to preserve assembly references and reduce the chance of missing-part errors.

