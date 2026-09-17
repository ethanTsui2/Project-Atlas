# Atlas V1 Design Evolution

Atlas V1 was not developed as a single finished CAD model. The final robot is the result of repeated design → print → assemble → test → redesign cycles.

The main goals across the redesigns were to improve **joint clearance, stiffness, mass distribution, serviceability, cable routing, printability, and base stability**.

---

## Stage 1 — First Prototype

The first version established the basic servo-driven arm architecture and mechanical gripper.

**Problems identified**

- bulky printed links
- limited joint clearance
- difficult servo access
- excessive material use
- inconsistent component interfaces
- limited cable-routing space

<img width="726" alt="Initial Atlas V1 prototype" src="https://github.com/user-attachments/assets/328c2b68-d8bf-4852-ad3f-d6deca671f70" />

**Decision:** keep the overall concept, but redesign the structure before committing to a final build.

---

## Stage 2 — Enclosed Concept

An enclosed-shell version was explored to hide the servos and wiring and create a smoother external form.

It was not continued because it increased:

- printed mass
- support requirements
- assembly complexity
- material use
- maintenance difficulty
- access problems around servos and fasteners

<img width="757" alt="Atlas V1 enclosed-shell concept" src="https://github.com/user-attachments/assets/7b7d42e3-46ce-42fa-bf5f-48f2f45a9412" />

**Decision:** prioritize an open, modular mechanical structure over a cosmetic shell.

---

## Stage 3 — Lightweight Modular Redesign

The arm was redesigned around open structural rails, internal ribs, modular servo housings, split printed components, and improved access around the joints.

This revision improved:

- printability
- component access
- structural clarity
- cable-routing space
- assembly flexibility
- mass distribution
- visual consistency

<img width="695" alt="Atlas V1 lightweight modular redesign" src="https://github.com/user-attachments/assets/93c1c046-da12-4f34-bb67-2d4305fef6f7" />

**Decision:** use the lightweight modular architecture as the basis for the physical prototype.

---

## Stage 4 — Physical-Test Revisions

Assembly and testing exposed issues that were difficult to evaluate from CAD alone.

Major problems addressed included:

- base tilting under the arm load
- forearm interference / restricted movement
- cable pinching and routing constraints
- servo-horn interference
- wrist and gripper packaging constraints
- joint-access and serviceability limitations

The most significant base revision was the addition of a **printed slew-bearing system using six steel balls**, providing mechanical support separate from the servo output shaft.

The forearm, joint interfaces, servo mounting, and surrounding geometry were also revised based on fit and range-of-motion testing.

---

## Stage 5 — Completed Atlas V1

The final physical build combines:

- 3× MG995 servos for the larger arm joints
- 2× MG90S servos for the lighter end-effector functions
- printed structural links and modular housings
- bearing-supported base rotation
- revised forearm and joint clearances
- internal/managed cable routing
- separate five-potentiometer controller enclosure
- 16×2 LCD feedback
- finished metallic-red painted exterior

<p align="center">
  <img src="../docs/assets/atlas-photo.jpeg" alt="Completed Project Atlas V1" width="720">
</p>

---

## Main Engineering Lessons

- Full-assembly collision checks matter more than evaluating parts in isolation.
- Distal mass has a large effect on shoulder torque, so weight reduction should focus on the outer links and end effector.
- Servo access, screw access, and wire routing need to be designed before printing.
- A servo output shaft should not be expected to provide all structural support for a loaded rotating base.
- Physical prototypes reveal tolerance, interference, stiffness, and routing problems that are easy to miss in CAD.
- A consistent design language can improve appearance without adding unnecessary mass or decorative geometry.

## Final Status

**Atlas V1 is complete as a functional physical prototype.**

The repository preserves the major design stages so the final geometry can be understood as the result of engineering iteration rather than a single polished model.

For the final build and manufacturing notes, see [Build Notes](../Documentation/Build-Notes.md).
