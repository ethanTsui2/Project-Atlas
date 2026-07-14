# Project Log

---

## 2026-07-01

### Objective
Verify that the MG90S servo operates correctly before beginning CAD design.

### Hardware Used
- Arduino Uno
- MG90S Metal Gear Servo
- 10k Potentiometer
- Breadboard
- USB Power

### Wiring
- Servo signal → D9
- Servo VCC → 5V
- Servo GND → GND
- Potentiometer center → A0
- Potentiometer ends → 5V and GND

### Results
Servo rotated smoothly through its full operating range.

- No noticeable jitter.
- No communication delay.
- Stable operation using Arduino USB power.
- Servo responded proportionally to potentiometer input.

### Test Setup

<img width="768" height="1024" alt="image" src="https://github.com/user-attachments/assets/e768ee58-1796-4dfc-88dc-96e7f9f15881" />


### Notes
This validates the selected actuator for Project Atlas and confirms compatibility with the Arduino control system.

## 2026-07-01 — External Power Validation

### Objective

Validate the external 5V 3A power supply for servo operation.

### Hardware Used

- Arduino Uno
- MG90S Servo
- 10k Potentiometer
- ALITOVE 5V 3A Power Supply
- Breadboard

### Results

- Servo successfully powered from the external supply.
- Arduino was used only for the control signal.
- Common ground between the Arduino and power supply was established.
- Servo operation remained smooth with no noticeable jitter.

### Conclusion

The external power configuration is suitable for future multi-servo testing.

## 2026-07-02

### Objective

Begin the mechanical design of Project Atlas using the verified MG90S servo model.

### Completed

- Imported and validated the MG90S CAD assembly.
- Designed the first base prototype.
- Designed the shoulder joint.
- Designed the first upper arm link.
- Created the first full assembly in SolidWorks.

### Observations

The initial assembly confirms that the overall packaging of the base, shoulder, and upper arm is feasible. Future iterations will focus on reducing weight, improving cable routing, and refining aesthetics.

### Next Steps

- Design elbow joint.
- Design wrist joint.
- Verify servo travel.
- Prepare prototype for 3D printing.

## 2026-07-04

### Objective

Continue mechanical development of Prototype V1.

### Completed

- Redesigned the upper arm link with improved geometry.
- Designed a protective servo cover for the shoulder servo.
- Designed and integrated the gripper assembly.
- Updated the master assembly to verify fit and overall appearance.

### Observations

The robot is beginning to take shape as a complete manipulator. The updated arm profile and servo cover improve the industrial appearance while maintaining modularity.

### Next Steps

- Design the elbow assembly.
- Verify mechanical interference between moving joints.
- Finalize Prototype V1 for printing.

# 2026-07-06

## Objective

Complete the first full CAD assembly of the 4-DOF robotic arm and evaluate the overall mechanical layout before physical testing.

## Completed

- Finished the complete 4-DOF robotic arm assembly.
- Redesigned Link 1 with a cleaner structural profile.
- Designed and integrated the wrist joint.
- Designed the mechanical gripper assembly.
- Added servo covers to improve appearance and cable protection.
- Verified assembly alignment and overall joint placement.
- Printed prototype components and confirmed MG90S servo fit.

## Observations

The CAD assembly successfully integrates all major mechanical components into a complete prototype.

Although the MG90S servos fit correctly, the shoulder and elbow joints may require additional torque once the complete arm is assembled and lifting a payload.

Four MG995 servos have been ordered for evaluation as a possible upgrade for the high-load joints.

## Next Steps

- Assemble the printed 4-DOF prototype.
- Test shoulder and elbow torque under load.
- Determine whether MG995 servos are required.
- Begin Prototype V2 design if additional torque is needed.

- Design the elbow joint.
- Verify joint clearances.
- Prepare the first printable prototype.

## 2026-07-07 — Prototype V2 5-DOF Redesign

### Objective
Begin a more refined 5-DOF version of Project Atlas based on lessons from Prototype V1.

### Completed
- Created a new industrial-style arm layout.
- Increased the robot from 4-DOF to 5-DOF.
- Redesigned the arm with covered joints and smoother continuous surfaces.
- Added enclosed joint housings to hide servo mechanisms.
- Preserved access openings for future removable caps.
- Continued refining servo fit and tolerances.

### Observations
Prototype V2 has a more original and professional appearance than Prototype V1. The design better hides the servo-driven structure and creates a cleaner industrial robot aesthetic. Some tolerance work is still needed around the servo pockets, and the gripper has not yet been added.

### Next Steps
- Add the gripper/claw assembly.
- Add removable caps for exposed joint openings.
- Finalize servo clearances.
- Check range of motion and interference.
- Prepare selected parts for test printing.

# 2026-07-08 — Prototype V2 Refinement

## Objective

Continue refining the Prototype V2 5-DOF robotic arm for manufacturability and assembly.

## Completed

- Designed removable screw covers for the shoulder, elbow, and base joints.
- Improved servo mounting dimensions.
- Refined servo pocket tolerances for improved assembly.
- Continued preparing the design for FDM 3D printing.
- Started printing the Prototype V2 base and base mount components.

## Observations

The addition of removable covers significantly improves the overall appearance while maintaining serviceability. Servo mounting features are becoming more manufacturing-ready, although final assembly validation is still required after printing.

## Next Steps
## 2026-07-08 — Prototype V2 Tolerance Refinement

### Objective
Refine Prototype V2 for better servo fit, reduced joint exposure, and improved manufacturability.

### Completed
- Adjusted servo housing tolerances to improve fit.
- Refined servo horn clearance to reduce exposed gaps between joints.
- Performed a threaded insert hole test.
- Made minor appearance updates to improve the overall design.
- Verified the folded arm position does not create major joint collisions.

### Observations
Prototype V2 is becoming more manufacturing-ready. The servo housings now better match the physical components, and the reduced joint exposure makes the arm look more finished and intentional.

### Next Steps
- Perform mass and torque analysis for the shoulder and elbow joints.
- Use SolidWorks mass properties to estimate printed link weights.
- Compare required joint torque against MG995 torque capability.
- Continue preparing parts for printing and assembly.
- Finish printing the remaining structural components.
- Verify printed tolerances.
- Install heat-set inserts.
- Test servo fit inside Prototype V2.
- Begin complete mechanical assembly.

## July 10, 2026 — PCA9685 Wiring and Multi-Servo Control Test

### Objective

Wire the Arduino Nano, PCA9685 servo driver, five potentiometers, and five servos so that each robotic arm joint can be controlled independently.

### Components Used

- Arduino Nano
- PCA9685 16-channel PWM servo driver
- ALITOVE 5 V, 10 A external power supply
- Five potentiometers
- Five servos
- Two breadboards
- Jumper wires
- DC barrel-jack-to-screw-terminal adapter
- USB cable for Arduino programming and logic power

### Wiring Configuration

The Arduino Nano communicates with the PCA9685 using I2C.

| Arduino Nano | PCA9685 | Purpose |
|---|---|---|
| 5V | VCC | PCA9685 logic power |
| GND | GND | Common ground |
| A4 | SDA | I2C data |
| A5 | SCL | I2C clock |

The external 5 V power supply powers the servos through the PCA9685 screw terminal.

| Power Supply | PCA9685 |
|---|---|
| Positive (+) | V+ |
| Negative (-) | GND |

The Arduino Nano remains powered through USB. The servos are not powered from the Nano.

### Potentiometer Assignments

| Potentiometer Input | Robot Joint |
|---|---|
| A0 | Base |
| A1 | Elbow |
| A2 | Wrist |
| A3 | Gripper Pivot |
| A6 | Gripper Jaws |

Each potentiometer has:

- One outside terminal connected to 5 V
- The opposite outside terminal connected to GND
- The center terminal connected to its assigned analog input

### PCA9685 Servo Channel Assignments

| PCA9685 Channel | Robot Joint |
|---|---|
| PWM0 | Base |
| PWM1 | Elbow |
| PWM2 | Wrist |
| PWM3 | Gripper Pivot |
| PWM4 | Gripper Jaws |

For each servo connection:

- Signal wire connects to the yellow PWM row
- Positive wire connects to the red V+ row
- Ground wire connects to the black GND row

### Software

The Arduino sketch uses:

- `Wire.h`
- `Adafruit_PWMServoDriver.h`
- A PCA9685 output frequency of 50 Hz
- Potentiometer readings from 0–1023
- Servo angle mapping from 0–180 degrees
- Pulse widths from approximately 650–2350 microseconds

### Troubleshooting

The first upload attempt failed because the Arduino IDE was configured for an Arduino Uno and an unavailable COM port.

The problem was corrected by selecting:

- Board: Arduino Nano
- Processor: ATmega328P
- The active COM port for the Nano

During the initial external-power connection, smoke was briefly observed from the PCA9685 area. Power was disconnected immediately and the power-terminal wiring was checked before testing again. After correcting the connection, the PCA9685 and servo-control system operated.

The board will continue to be monitored for:

- Excessive heat
- Burning smell
- Servo jitter
- Voltage drops
- Unstable movement

### Results

- The Arduino Nano successfully communicated with the PCA9685.
- The external 5 V supply successfully powered the servo rail.
- The potentiometers provided individual joint-position inputs.
- The PCA9685 generated control signals for the connected servos.
- The basic five-axis manual control system is operational.

### Next Steps

- Test each servo and potentiometer individually.
- Confirm that every potentiometer controls the intended joint.
- Label all servo and potentiometer connections.
- Determine safe minimum and maximum angles for each joint.
- Prevent servos from reaching mechanical stops.
- Mount and test the servos in the printed arm one joint at a time.
- Add smoother servo movement and joint-specific calibration limits.

## 2026-07-14 — Modular Architecture Redesign

### Summary

After completing the initial assembly and servo testing, the mechanical architecture of Atlas V1 was re-evaluated.

The original design integrated the servo mounting features directly into each structural arm link. While functional, this approach required redesigning and reprinting large portions of the robot whenever a link length or external geometry changed.

A new modular architecture has been adopted for future revisions.

---

## Initial Servo Test

The MG995 shoulder servo successfully lifted and supported the assembled printed arm.

Observations:

- Successfully lifted the unloaded arm.
- Maintained position without dropping.
- Continuous buzzing was present while holding position.
- No payload attached to the gripper.
- Wiring, covers, and final hardware were not installed.

This demonstrated that the current design is mechanically functional but likely operating with limited torque margin.

---

## Engineering Evaluation

Rather than immediately introducing additional gear reductions or more powerful actuators, attention shifted toward reducing the structural mass of the arm.

Analysis showed that reducing moving mass would improve:

- Servo torque margin
- Static holding performance
- Thermal loading
- Energy consumption
- Print time
- Material usage

without increasing mechanical complexity.

---

## Major Design Decision

Atlas V1 will transition to a modular joint architecture.

Instead of integrating the servo directly into every printed arm section, each joint will be divided into separate functional modules.

### 1. Atlas Joint Module

The Joint Module becomes the permanent mechanical interface.

Responsibilities:

- Houses the servo
- Maintains servo mounting geometry
- Supports the output shaft
- Provides attachment points for structural links
- Maintains all verified clearances
- Serves as the standardized interface between joints

This component should rarely require redesign once validated.

---

### 2. Structural Link

The Structural Link becomes an interchangeable load-carrying component.

Responsibilities:

- Connect adjacent joint modules
- Carry bending loads
- Minimize structural mass
- Define overall arm length

Multiple structural links can now be developed for different purposes without modifying the servo housing.

Examples include:

- Lightweight version
- Long-reach version
- Reinforced version
- Experimental topology-optimized version

---

### 3. Cosmetic Shell

An optional removable shell will provide the external appearance.

Responsibilities:

- Protect internal components
- Improve aesthetics
- Route wiring
- Allow custom visual styles
- Remain mechanically independent of the structural frame

Because the shell is non-structural, it can be redesigned independently from the mechanics.

---

## Advantages

The new architecture offers several engineering advantages.

- Servo geometry becomes standardized.
- Structural links become interchangeable.
- Only modified components require reprinting.
- Future experimentation becomes significantly faster.
- Cosmetic updates no longer require mechanical redesign.
- Creates a scalable platform for future Atlas generations.

---

## Long-Term Vision

This modular philosophy establishes a common design language that can continue into Atlas V2.

Future actuator technologies—including cycloidal reducers, planetary gearboxes, or other transmission systems—can replace the Joint Module while preserving the Structural Link and Shell interfaces.

This allows Atlas to evolve from a single robotic arm into a modular robotics platform.

---

## Next Steps

- Design Atlas Joint Module V1.
- Define standardized mounting interface.
- Design first lightweight Structural Link.
- Compare link mass with previous design.
- Verify structural stiffness.
- Design removable cosmetic shell.
- Assemble revised prototype.
- Repeat servo holding and payload tests.
- 
