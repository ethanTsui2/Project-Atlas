

## Electronics Architecture

The robotic arm uses an Arduino Nano to read five potentiometers. Servo commands are sent through I2C to a PCA9685 16-channel PWM controller.

The Arduino Nano handles logic and input processing, while a separate regulated 5 V, 10 A supply powers the servos. All grounds are connected together to provide a shared voltage reference.

### Signal Flow

Potentiometers → Arduino Nano analog inputs → I2C → PCA9685 → Servos

### Important Power Separation

- Arduino Nano: powered through USB
- PCA9685 VCC: powered by the Nano 5 V output
- PCA9685 V+: powered by the external 5 V supply
- Servos: powered only through the PCA9685 V+ servo rail
- Nano, PCA9685, and external supply share a common ground
