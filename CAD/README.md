# Atlas V1 CAD

This folder documents the final mechanical design of **Project Atlas V1**. The completed build was developed primarily in SolidWorks and manufactured with FDM 3D printing.

## Final Assembly Views

| View | Preview |
|---|---|
| Isometric | ![Atlas V1 Isometric](Final-Assembly/Atlas-V1-Isometric.png) |
| Side | ![Atlas V1 Side](Final-Assembly/Atlas-V1-Side.png) |
| Top | ![Atlas V1 Top](Final-Assembly/Atlas-V1-Top.png) |
| Extended | ![Atlas V1 Extended](Final-Assembly/Atlas-V1-Extended.png) |

## Final Mechanical Architecture

| Subsystem | Final approach |
|---|---|
| Base | Printed housing with bearing-supported rotating structure and separate slew-bearing solution |
| Shoulder / main joints | MG995-driven modular printed joint structure |
| Upper arm | Lightweight ribbed PLA link |
| Forearm | Revised printed forearm with improved clearance and routing space |
| Wrist / gripper | MG90S-driven end-effector assembly |
| Controller | Separate printed enclosure for 5 potentiometers and 16×2 LCD |
| Manufacturing | Native SolidWorks files + STL exports for printed parts |

## Final CAD Package

The final Pack-and-Go package supplied for the completed build contains the assembly and referenced parts needed to preserve SolidWorks relationships. Important files include:

### Assemblies

- `v3 assembly.SLDASM` — completed mechanical assembly
- `Atlas-V1-Analysis-Assembly.SLDASM` — frozen assembly used for engineering analysis

### Major printed parts

- `Atlas-V1-Upper-Arm.SLDPRT`
- `Atlas-V1-Forearm edit v2.SLDPRT`
- `Atlas-V1-Shoulder-Mount-Left.SLDPRT`
- `Atlas-V1-Shoulder-Mount-Right.SLDPRT`
- `Atlas-V1-Base-Housing top.SLDPRT.SLDPRT`
- `Atlas-V1-Base-Housing bottom.SLDPRT.SLDPRT`
- `AJM-01  → Atlas Joint Module (MG995)final.SLDPRT`
- wrist, gripper, bearing-holder, servo-lid, and servo-horn components
- controller top, bottom, panel, and control-board geometry

Matching STL exports are included for the printable parts where available.

## Slew Bearing

A separate slew-bearing package supports the final base redesign. It contains printable inner/outer race geometry, cage/race variants, and the Fusion 360 outer-race source. The physical build uses **six steel balls** in the base bearing.

The slew-bearing files were kept separate from the SolidWorks Pack-and-Go package because they were developed as a separate bearing subsystem.

## Source-File Handling

Native SolidWorks filenames should be preserved when moving or re-uploading the final package. Renaming referenced `.SLDPRT` files outside SolidWorks can break assembly references.

The repository therefore separates:

- `Final-Assembly/` — quick visual references
- `Source-Files/` — native CAD and assemblies
- `Reference_Components/` — external servo/reference geometry
- final STL exports — manufacturing files supplied with the final CAD package

## Design Priorities

The final geometry reflects the physical build, with emphasis on:

- joint clearance
- stiffness with reduced printed mass
- servo and fastener access
- bearing support
- cable-routing space
- printable split components
- replaceable/serviceable subassemblies
- consistent mechanical styling

For the reasoning behind the major redesigns, see [Design Evolution](../Design-Evolution/README.md).
