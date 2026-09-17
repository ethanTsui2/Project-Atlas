# Atlas V1 Final CAD Package Manifest

This manifest records the contents of the final CAD packages supplied for the completed Atlas V1 build. Filenames are preserved exactly so SolidWorks references are not silently renamed outside the CAD environment.

## Main Atlas Package

### Assemblies

- `v3 assembly.SLDASM`
- `Atlas-V1-Analysis-Assembly.SLDASM`

### Major arm / base parts

- `AJM-01  → Atlas Joint Module (MG995)final.SLDPRT`
- `Atlas-V1-Upper-Arm.SLDPRT`
- `Atlas-V1-Upper-Arm.STL`
- `Atlas-V1-Forearm edit v2.SLDPRT`
- `Atlas-V1-Forearm edit v2.STL`
- `Atlas-V1-Shoulder-Mount-Left.SLDPRT`
- `Atlas-V1-Shoulder-Mount-Left.STL`
- `Atlas-V1-Shoulder-Mount-Right.SLDPRT`
- `Atlas-V1-Shoulder-Mount-Right.STL`
- `Atlas-V1-Base-Housing top.SLDPRT.SLDPRT`
- `Atlas-V1-Base-Housing top.STL`
- `Atlas-V1-Base-Housing bottom.SLDPRT.SLDPRT`
- `Atlas-V1-Base-Housing bottom.STL`
- `base housing.SLDPRT`

### Bearing / servo interface parts

- `bearing holder.SLDPRT`
- `bearing holder.STL`
- `bearing holder2.SLDPRT`
- `bearing holder2.STL`
- `bearing holder link 2.SLDPRT`
- `circular servo horn.SLDPRT`
- `servo horn extender.SLDPRT`
- `servo horn extender.STL`
- `servo lid.SLDPRT`
- `servo lid.STL`

### Gripper / wrist parts

- `gripper gear link.SLDPRT`
- `gripper gear link.STL`
- `gripper gear link2.SLDPRT`
- `gripper gear link2.STL`
- `gripper jaw.SLDPRT`
- `gripper jaw.STL`
- `gripper link1.SLDPRT`
- `gripper link1.STL`
- `robotic gripper part.SLDPRT`
- `robotic gripper wrist.SLDPRT`
- `robotic gripper wrist.STL`

### Controller parts

- `control board.SLDPRT`
- `control pannel.SLDPRT`
- `control pannel.STL`
- `controller bottom.SLDPRT`
- `controller bottom.STL`
- `controller top.SLDPRT`
- `controller top.STL`

## Slew-Bearing Package

- `Outer Race.f3d`
- `Outer Race.stl`
- `Inner Race.stl`
- `Upper Inner Race.stl`
- `Lower Inner Race.stl`
- `Cage.stl`
- `Parametric+Slew+Bearing+v9.stl`

The completed base bearing uses **six steel balls**.

## Repository Handling Recommendation

For the cleanest GitHub structure, the final files should be uploaded without renaming into:

```text
CAD/
├── Final-Package/
│   └── [main Atlas Pack-and-Go contents]
└── Slew-Bearing/
    └── [slew-bearing package contents]
```

Keeping the main Pack-and-Go files together is preferred over individually renaming them because SolidWorks assemblies depend on referenced filenames.
