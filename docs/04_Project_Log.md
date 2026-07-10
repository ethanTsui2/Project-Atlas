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
