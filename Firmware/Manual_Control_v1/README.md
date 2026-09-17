# Manual Control v1 — Development Archive

Manual Control v1 was the first integrated potentiometer-based controller used during Project Atlas mechanical and electronics testing.

It demonstrated the core control path:

**Potentiometers → Arduino Nano → I2C → PCA9685 → Servos**

The sketch was useful for validating joint motion, servo direction, wiring, range of motion, and overall system integration before the final controller was completed.

## Status

**Archived development firmware.**

The completed V1 controller is now documented in:

[`../Final_Control/Atlas_Final_Control.ino`](../Final_Control/Atlas_Final_Control.ino)

The final sketch adds input averaging, a deadband, and 16×2 LCD joint/angle feedback while retaining the same basic manual-control architecture.
