# Atlas V1 Design Evolution

This page documents the major mechanical design stages of Atlas V1, from the initial proof-of-concept prototype to the final lightweight and modular architecture.

The redesign process focused on improving:

- structural efficiency
- joint clearance
- servo packaging
- printability
- serviceability
- cable routing
- visual consistency
- overall mass distribution

---

## Stage 1 — First Prototype

The first prototype established the basic robotic-arm architecture using servo-driven joints, simple printed links, and a mechanical gripper.

Main limitations identified:

- bulky printed links
- limited joint clearance
- difficult servo access
- excessive material use
- inconsistent component interfaces
- limited space for cable routing

<img width="726" height="687" alt="Initial Atlas V1 prototype" src="https://github.com/user-attachments/assets/328c2b68-d8bf-4852-ad3f-d6deca671f70" />

### Design Decision

The first prototype successfully demonstrated the overall concept, but the mechanical structure required a major redesign before full manufacturing and testing.

---

## Stage 2 — Enclosed Concept

An enclosed-shell design was explored to conceal the servos and wiring while creating a smoother and more finished external appearance.

This concept was not continued because it increased:

- overall size
- material use
- printed mass
- support requirements and printing complexity
- assembly difficulty
- maintenance difficulty
- difficulty accessing internal fasteners and servos

<img width="757" height="447" alt="Atlas V1 enclosed-shell concept" src="https://github.com/user-attachments/assets/7b7d42e3-46ce-42fa-bf5f-48f2f45a9412" />

### Design Decision

The enclosed-shell direction improved appearance but reduced serviceability and manufacturing efficiency. Its visual advantages did not justify the added weight and complexity.

---

## Stage 3 — Lightweight Redesign

Atlas was redesigned around modular servo housings, split printed components, heat-set inserts, curved structural rails, and lightweight internal ribs.

This redesign improved:

- printability
- serviceability
- structural clarity
- component access
- assembly flexibility
- cable-routing space
- overall appearance
- mass distribution

<img width="695" height="856" alt="Atlas V1 lightweight modular redesign" src="https://github.com/user-attachments/assets/93c1c046-da12-4f34-bb67-2d4305fef6f7" />

### Design Decision

The project shifted toward open structural links and modular joint housings so that individual components could be printed, assembled, serviced, and replaced independently.

---

## Stage 4 — Final Mechanical Version

The final Atlas V1 design includes:

- MG995 base rotation
- MG995 shoulder pitch
- MG995 elbow pitch
- MG90S wrist pitch
- MG90S gripper actuation
- lightweight printed links
- modular joint housings
- internal cable-routing space
- removable servo covers
- heat-set insert assembly
- collision-checked motion in SolidWorks

<img width="1077" height="847" alt="Final Atlas V1 mechanical design" src="https://github.com/user-attachments/assets/51e784d5-3f1b-4026-94e4-5e26c6f9fb96" />

### Design Decision

The final architecture was selected because it provided the best balance of structural efficiency, printability, joint clearance, servo access, maintainability, and visual consistency.

---

## Major Problems Resolved

During the redesign, the following issues were addressed:

- shoulder and elbow interference
- insufficient forearm clearance
- bulky solid-link geometry
- difficult servo replacement
- inconsistent joint interfaces
- limited wiring access
- excessive distal mass
- visually inconsistent components

---

## Main Lessons Learned

- Joint clearance should be evaluated using the complete assembly, not only individual parts.
- Collision detection should be used early and repeatedly during mechanism development.
- Mass located farther from the shoulder creates a greater torque demand.
- Servo access, screw access, and wiring paths should be planned before printing.
- Open modular structures can improve both serviceability and manufacturing efficiency.
- A consistent design language can improve appearance without adding unnecessary decoration.
- Physical testing should guide future revisions instead of continued cosmetic CAD changes.

---

## Current Status

The Atlas V1 mechanical design is complete and is transitioning into physical manufacturing and validation.

Next steps include:

- exporting final STL files
- printing the redesigned components
- installing heat-set inserts
- assembling the complete arm
- routing the servo wiring
- validating joint range of motion
- measuring payload, backlash, and repeatability
- documenting any required design revisions
