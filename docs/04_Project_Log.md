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
