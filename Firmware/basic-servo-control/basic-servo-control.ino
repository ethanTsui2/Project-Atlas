
/*
  Project Atlas
  Basic 5-DOF Servo Controller

  Uses:
  - Arduino Nano
  - PCA9685 PWM servo controller
  - Five potentiometers
  - Five servos

  Based on the DroneBot Workshop robot arm controller example.
  Adapted for Project Atlas hardware testing.

  Author: Ethan Tsui
  Date: July 10, 2026
*/

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

#define MIN_PULSE_WIDTH 650
#define MAX_PULSE_WIDTH 2350
#define FREQUENCY 50

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

// Potentiometer inputs
int controlBase = A0;
int controlElbow = A1;
int controlWrist = A2;
int controlPivot = A3;
int controlJaws = A6;

// PCA9685 servo channels
int motorBase = 0;
int motorElbow = 1;
int motorWrist = 2;
int motorPivot = 3;
int motorJaws = 4;

// Motor position variables
int mtrDegreeBase;
int mtrDegreeElbow;
int mtrDegreeWrist;
int mtrDegreePivot;
int mtrDegreeJaws;

void setup()
{
  pwm.begin();
  pwm.setPWMFreq(FREQUENCY);
}

void moveMotorDeg(int moveDegree, int motorOut)
{
  int pulseWide;
  int pulseWidth;

  pulseWide = map(
    moveDegree,
    0,
    180,
    MIN_PULSE_WIDTH,
    MAX_PULSE_WIDTH
  );

  pulseWidth = int(
    float(pulseWide) / 1000000 * FREQUENCY * 4096
  );

  pwm.setPWM(motorOut, 0, pulseWidth);
}

int getDegree(int controlIn)
{
  int potVal;
  int servoDegree;

  potVal = analogRead(controlIn);
  servoDegree = map(potVal, 0, 1023, 0, 180);

  return servoDegree;
}

void loop()
{
  mtrDegreeBase = getDegree(controlBase);
  moveMotorDeg(mtrDegreeBase, motorBase);

  mtrDegreeElbow = getDegree(controlElbow);
  moveMotorDeg(mtrDegreeElbow, motorElbow);

  mtrDegreeWrist = getDegree(controlWrist);
  moveMotorDeg(mtrDegreeWrist, motorWrist);

  mtrDegreePivot = getDegree(controlPivot);
  moveMotorDeg(mtrDegreePivot, motorPivot);

  mtrDegreeJaws = getDegree(controlJaws);
  moveMotorDeg(mtrDegreeJaws, motorJaws);

  delay(20);
}
