# Atlas V1 Build Notes

These are the main manufacturing and integration choices I used for the completed Atlas V1 prototype.

## Manufacturing Approach

I designed Atlas around FDM 3D printing so I could make changes quickly after testing the real parts.

The final CAD package includes the SolidWorks parts and assembly files along with STL exports for the printable parts. I kept the design modular instead of making one large shell so individual parts could be reprinted or changed without rebuilding everything.

The main things I considered were:

- printability and reducing support material
- access to servos and fasteners
- joint clearance
- cable-routing space
- stiffness without adding unnecessary mass
- replaceable covers and subcomponents

## Base and Slew Bearing

During testing, I found that the rotating base could tilt under the weight of the arm. Relying mainly on the servo output area was not enough to support the structure.

I redesigned the base around a printed slew bearing so the mechanical support and servo actuation were separated. The final bearing uses **six steel balls**.

The slew-bearing folder includes the race and cage geometry along with the Fusion 360 outer-race source.

## Arm and Joint Revisions

Assembly and testing also exposed several problems that led to CAD changes:

- forearm interference and restricted motion
- wire pinching and limited routing space
- servo-horn interference
- difficult access to some joints
- wrist and gripper packaging

Because of this, the final package includes revised forearm, base, servo-interface, bearing-holder, controller, and end-effector parts instead of the first printable versions.

## Electronics Integration

The final control setup uses:

- Arduino Nano
- PCA9685 servo PWM driver
- five potentiometer inputs
- five servo channels
- 16x2 I2C LCD
- regulated external 5 V, 10 A servo supply

The Nano, PCA9685, LCD, and external supply share a common ground. Servo power comes from the external supply through the PCA9685 servo rail, not directly from the Nano.

See [Electronics](../Electronics/) for the wiring details.

## Controller Enclosure

I built a separate printed controller enclosure for the manual controls and display.

The final controller includes:

- five rotary potentiometers
- 16x2 LCD
- printed top, bottom, and control-panel parts
- wiring between the controller and the arm electronics

Keeping the controls separate made the arm easier to work on and kept the user interface from being built into the base.

## Firmware Behavior

The final firmware:

- averages 8 analog samples for each potentiometer reading
- maps each input to a 0-180 degree servo command
- uses a 2 degree deadband to reduce unnecessary updates
- commands the PCA9685 at 50 Hz
- updates the LCD with the joint name and angle when the input changes enough
- provides serial output for debugging

See [Firmware](../Firmware/) for the final sketch.

## Surface Preparation and Finish

I wanted the final arm to look finished instead of leaving the PLA raw, so I used a layered paint process:

1. Rust-Oleum 2-in-1 Filler & Sandable Primer
2. Rust-Oleum metallic silver base
3. Dupli-Color Metalcast red anodized coating
4. Rust-Oleum Painter's Touch 2X Gloss Clear

The silver layer gives the translucent red Metalcast something reflective underneath it, and the clear coat protects the finish and gives it the final gloss.

<p align="center">
  <img src="../docs/assets/atlas-photo.jpeg" alt="Completed metallic-red Project Atlas arm" width="700">
</p>

## Final Build Status

Atlas V1 is complete as a functional physical prototype with integrated mechanics, electronics, firmware, user controls, and surface finishing.

I have not listed payload, backlash, accuracy, or repeatability values because I did not run controlled tests for those measurements yet.
