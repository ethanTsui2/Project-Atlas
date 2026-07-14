# Atlas V2

Atlas V2 is the second-generation Project Atlas robotic arm.

The design will use modular geared actuators, primarily 3D-printed components, stepper motors, bearings, encoders, and improved closed-loop control.

## Goals

- Hold and track a phone
- Reach approximately 400–450 mm
- Lift approximately 500 g at full extension
- Use modular robotic joints
- Validate a 3D-printed cycloidal actuator
- Add position feedback and computer-vision tracking

## Development Stages

### 1. Atlas Gear
Develop and test a parametric cycloidal gearbox.

### 2. Atlas Actuator
Integrate the gearbox with a NEMA 17 motor, bearings, output flange, and encoder provision.

### 3. Atlas Arm
Design the complete robotic arm around tested actuator data.

## Current Work

- [ ] Select exact NEMA 17 motor
- [ ] Define initial gearbox ratio
- [ ] Create cycloidal profile
- [ ] Design gearbox layout
- [ ] Print geometry test
- [ ] Build torque-test fixture
- [ ] Test torque, backlash, and speed

## Current Target

| Parameter | Target |
|---|---:|
| Initial motor | NEMA 17 |
| Reduction | Approximately 15:1 |
| Initial actuator use | Elbow prototype |
| Moving torque target | 4 N·m |
| Static torque target | 5 N·m |
| Arm payload target | 500 g at full extension |
