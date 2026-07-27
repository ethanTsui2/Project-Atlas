# Atlas V1 Design Evolution

This folder documents the main mechanical design stages of Atlas V1 from the first prototype to the final version.

## Stage 1 — First Prototype

The first prototype established the basic robotic-arm architecture using servo-driven joints, simple links, and a gripper.

Main limitations identified:

- bulky printed links
- limited joint clearance
- difficult servo access
- excessive material
- inconsistent component interfaces

<img width="726" height="687" alt="image" src="https://github.com/user-attachments/assets/328c2b68-d8bf-4852-ad3f-d6deca671f70" />


## Stage 2 — Enclosed Concept

An enclosed shell design was explored to hide the servos and wiring and create a more finished appearance.

This concept was not continued because it increased:

- size
- material use
- weight
- printability
- maintenance difficulty

<img width="757" height="447" alt="image" src="https://github.com/user-attachments/assets/7b7d42e3-46ce-42fa-bf5f-48f2f45a9412" />


## Stage 3 — Lightweight Redesign

Atlas was redesigned around modular servo housings, split printed components, heat-set inserts, curved structural rails, and lightweight internal ribs.

This redesign improved:

- printability
- serviceability
- structural clarity
- component access
- overall appearance
<img width="695" height="856" alt="image" src="https://github.com/user-attachments/assets/93c1c046-da12-4f34-bb67-2d4305fef6f7" />



## Stage 4 — Final Mechanical Version

The final Atlas V1 design includes:

- MG995 base rotation
- MG995 shoulder pitch
- MG995 elbow pitch
- MG90S wrist pitch
- MG90S gripper actuation
- lightweight printed links
- modular joint housings
- internal cable space
- removable servo covers
- collision-checked motion in SolidWorks

<img width="1077" height="847" alt="image" src="https://github.com/user-attachments/assets/51e784d5-3f1b-4026-94e4-5e26c6f9fb96" />


## Main Lessons Learned

- Joint clearance must be checked in the full assembly.
- Collision detection should be used early.
- Distal mass strongly affects servo torque.
- Servo access and wiring should be planned before printing.
- Physical testing should guide the next revision.
