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
