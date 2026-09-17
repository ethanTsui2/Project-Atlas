#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>

// ----------------------
// PCA9685 settings
// ----------------------

#define MIN_PULSE_WIDTH 650
#define MAX_PULSE_WIDTH 2350
#define FREQUENCY 50

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

// ----------------------
// LCD
// ----------------------

hd44780_I2Cexp lcd;

// ----------------------
// Potentiometer inputs
// ----------------------

const int controlBase  = A0;
const int controlElbow = A1;
const int controlWrist = A2;
const int controlPivot = A3;
const int controlJaws  = A6;

// ----------------------
// PCA9685 servo channels
// ----------------------

const int motorBase  = 0;
const int motorElbow = 1;
const int motorWrist = 2;
const int motorPivot = 3;
const int motorJaws  = 4;

// ----------------------
// Last servo positions
// ----------------------

int lastBase  = -100;
int lastElbow = -100;
int lastWrist = -100;
int lastPivot = -100;
int lastJaws  = -100;

// Ignore changes smaller than this
const int DEADBAND = 2;

// ----------------------
// Setup
// ----------------------

void setup()
{
  Serial.begin(9600);

  // Start PCA9685
  pwm.begin();
  pwm.setPWMFreq(FREQUENCY);

  delay(500);

  // Start LCD
  int status = lcd.begin(16, 2);

  if (status)
  {
    Serial.println("LCD initialization failed");
    while (1);
  }

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("PROJECT ATLAS");

  lcd.setCursor(0, 1);
  lcd.print("SYSTEM READY");

  delay(2000);

  lcd.clear();
}

// ----------------------
// Servo control function
// ----------------------

void moveMotorDeg(int moveDegree, int motorOut)
{
  int pulseWide;

  pulseWide = map(
    moveDegree,
    0,
    180,
    MIN_PULSE_WIDTH,
    MAX_PULSE_WIDTH
  );

  int pulseWidth = int(
    float(pulseWide) / 1000000.0 * FREQUENCY * 4096
  );

  pwm.setPWM(motorOut, 0, pulseWidth);
}

// ----------------------
// Read + smooth potentiometer
// ----------------------

int getDegree(int controlIn)
{
  long total = 0;

  // Average 8 readings
  for (int i = 0; i < 8; i++)
  {
    total += analogRead(controlIn);
    delayMicroseconds(200);
  }

  int potValue = total / 8;

  int servoDegree = map(
    potValue,
    0,
    1023,
    0,
    180
  );

  return servoDegree;
}

// ----------------------
// LCD update
// ----------------------

void displayJoint(const char* jointName, int angle)
{
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("JOINT:");
  lcd.print(jointName);

  lcd.setCursor(0, 1);
  lcd.print("ANGLE: ");
  lcd.print(angle);
  lcd.print((char)223);  // degree symbol
}

// ----------------------
// Update one servo
// ----------------------

void updateServo(
  int potPin,
  int servoChannel,
  int &lastAngle,
  const char* jointName
)
{
  int newAngle = getDegree(potPin);

  // Only move if change is significant
  if (abs(newAngle - lastAngle) >= DEADBAND)
  {
    moveMotorDeg(newAngle, servoChannel);

    lastAngle = newAngle;

    displayJoint(jointName, newAngle);

    Serial.print(jointName);
    Serial.print(": ");
    Serial.println(newAngle);
  }
}

// ----------------------
// Main loop
// ----------------------

void loop()
{
  updateServo(
    controlBase,
    motorBase,
    lastBase,
    "BASE"
  );

  updateServo(
    controlElbow,
    motorElbow,
    lastElbow,
    "ELBOW"
  );

  updateServo(
    controlWrist,
    motorWrist,
    lastWrist,
    "WRIST"
  );

  updateServo(
    controlPivot,
    motorPivot,
    lastPivot,
    "PIVOT"
  );

  updateServo(
    controlJaws,
    motorJaws,
    lastJaws,
    "JAWS"
  );

  delay(20);
}
