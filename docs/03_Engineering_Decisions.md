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
