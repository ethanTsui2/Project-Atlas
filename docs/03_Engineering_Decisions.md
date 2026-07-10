# Engineering Decisions

This document records significant engineering decisions made throughout Project Atlas.

---

## ED-001

### Decision

Use MG90S servos instead of SG90 servos.

### Reason

- Metal gears
- Higher torque
- Improved durability
- Similar footprint

---

## ED-002

### Decision

Use M3 hardware wherever possible.

### Reason

- Easier assembly
- Better strength
- Widely available
- Simplifies maintenance

---

## ED-003

### Decision

Prototype using Arduino Uno before migrating to Arduino Nano.

### Reason

- Existing hardware
- Easier debugging
- Lower development cost

---

## ED-004

### Decision

Proceed with MG90S servos for Project Atlas joint actuation.

### Reason

Initial hardware testing confirmed smooth servo operation and approximately 180 degrees of usable rotation. The MG90S servos also provide metal gears, compact size, and sufficient torque for a lightweight 3D-printed robotic arm.

### Tradeoff

MG90S servos are heavier and draw more current than SG90 servos, requiring a dedicated external 5V power supply for multi-servo operation.

# ED-006

## Decision

Prototype V1 will remain a 4-DOF robotic arm using MG90S servos.

## Reason

The first prototype focuses on validating mechanical fit, assembly tolerances, wiring, and overall functionality before increasing system complexity.

Higher torque requirements were identified during CAD development, particularly at the shoulder and elbow joints.

Rather than redesigning immediately, Prototype V1 will be assembled and tested to determine whether MG995 servos are necessary.

## Future Work

If testing confirms insufficient torque, Prototype V2 will introduce:

- MG995 servos for high-load joints
- possible 5-DOF wrist
- updated power system
- redesigned servo mounts

## ED-007

### Decision
Develop Prototype V2 as a refined 5-DOF robotic arm.

### Reason
Prototype V1 successfully validated the initial 4-DOF mechanical layout and MG90S servo fit. Prototype V2 improves the design by adding an additional wrist joint, enclosing the servo mechanisms, and creating a more original industrial-style form.

### Tradeoff
Prototype V2 is more visually polished and capable, but it is more complex to print, assemble, and service. Servo tolerances, cable routing, and removable access caps must be carefully designed before printing.

## ED-008

### Decision

Use removable cosmetic covers to conceal fasteners while maintaining access to internal servos.

### Reason

Earlier versions exposed screw heads and assembly hardware. Adding removable covers improves the overall industrial appearance without sacrificing serviceability.

### Impact

- Cleaner appearance
- Easier maintenance
- Improved cable management opportunities
- Better protection for internal components
## ED-009

### Decision
Refine Prototype V2 servo housings around measured hardware tolerances.

### Reason
The initial V2 geometry fit the overall arm layout, but the servo housings and horn openings needed adjustment to reduce exposed gaps and improve assembly fit.

### Impact
- Better servo fit inside enclosed housings
- Cleaner joint appearance
- Less exposed servo horn geometry
- Improved readiness for 3D printing and assembly
