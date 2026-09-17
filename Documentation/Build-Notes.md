# Atlas V1 Build Notes

This page records the main manufacturing and integration choices used in the completed Project Atlas V1 prototype.

## Manufacturing Approach

Atlas V1 was designed around FDM 3D printing so that the structure could be revised quickly between physical tests.

The final CAD package includes native SolidWorks parts/assemblies and STL exports for the printable components. The design uses separate subassemblies instead of a single large shell so damaged or revised parts can be reprinted independently.

Key manufacturing considerations included:

- printability and support reduction
- access to servos and fasteners
- joint clearance
- cable-routing space
- stiffness with reduced printed mass
- replaceable covers / subcomponents

## Base and Slew Bearing

Physical testing showed that relying on the servo output area alone did not provide enough structural support for the rotating base and the arm could tilt under load.

The base was revised around a printed slew-bearing system that separates structural support from the servo actuation function.

The supplied slew-bearing package contains printed race/cage geometry and a Fusion 360 outer-race source. The completed bearing uses **six steel balls**.

This revision improved the mechanical support of the rotating structure and became part of the final physical build.

## Arm and Joint Revisions

Physical assembly also exposed several fit and motion issues that drove later CAD changes:

- forearm interference / restricted motion
- wire pinching and limited routing space
- servo-horn interference
- joint-access constraints
- wrist / gripper packaging

The final CAD package therefore includes revised forearm, base, servo-interface, bearing-holder, controller, and end-effector components rather than preserving the first printable version as the final design.

## Electronics Integration

The final control architecture uses:

- Arduino Nano
- PCA9685 servo PWM driver
- five potentiometer inputs
- five servo channels
- 16×2 I2C LCD
- regulated external 5 V, 10 A servo supply

The Arduino and PCA9685 use a common ground with the external supply. Servo power is supplied through the PCA9685 servo rail rather than directly from the Nano.

See [Electronics](../Electronics/) for wiring details.

## Controller Enclosure

A separate printed controller enclosure houses the manual controls and display.

The final controller includes:

- five rotary potentiometers
- 16×2 LCD
- printed top, bottom, and control-panel parts
- wiring between the control enclosure and the arm electronics

This allowed the mechanical arm and the user-control interface to be packaged as separate serviceable modules.

## Firmware Behavior

The final firmware:

- averages 8 analog samples for each potentiometer reading
- maps each input to a 0–180° servo command
- uses a 2° deadband to reduce unnecessary updates
- commands the PCA9685 at 50 Hz
- updates the LCD with the joint name and angle when a meaningful change occurs
- provides serial output for simple debugging

See [Firmware](../Firmware/) for the final sketch.

## Surface Preparation and Finish

The final visible arm uses a layered painted finish rather than raw printed PLA.

Materials used:

1. Rust-Oleum 2-in-1 Filler & Sandable Primer
2. Rust-Oleum metallic silver base
3. Dupli-Color Metalcast red anodized coating
4. Rust-Oleum Painter's Touch 2X Gloss Clear

The metallic silver base provides the reflective foundation for the translucent red Metalcast layer, while the clear coat protects the final surface and produces the gloss finish visible on the completed arm.

<p align="center">
  <img src="../docs/assets/atlas-photo.jpeg" alt="Completed metallic-red Project Atlas arm" width="700">
</p>

## Final Build Status

Atlas V1 was completed as a functional physical prototype with integrated mechanics, electronics, firmware, user controls, and surface finishing.

The repository does not claim undocumented payload, backlash, accuracy, or repeatability values. Those quantities should only be added if they are measured in a repeatable test.
