#include <Joystick.h>

// Hybrid base:
// 2 analog axes on A0, A1
// 6 example buttons on pins 2, 3, 4, 5, 6, 7

Joystick_ Joystick(
  JOYSTICK_DEFAULT_REPORT_ID,
  JOYSTICK_TYPE_JOYSTICK,
  6,   // button count
  0,   // hat switch count
  true,   // X
  true,   // Y
  false,  // Z
  false,  // Rx
  false,  // Ry
  false,  // Rz
  false,  // Rudder
  false,  // Throttle
  false,  // Accelerator
  false,  // Brake
  false   // Steering
);

const int axis1Pin = A0;
const int axis2Pin = A1;

const int buttonPins[] = {2, 3, 4, 5, 6, 7};
const int buttonCount = sizeof(buttonPins) / sizeof(buttonPins[0]);

void setup() {
  for (int i = 0; i < buttonCount; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }

  Joystick.setXAxisRange(0, 1023);
  Joystick.setYAxisRange(0, 1023);
  Joystick.begin();
}

void loop() {
  int axis1Value = analogRead(axis1Pin);
  int axis2Value = analogRead(axis2Pin);

  Joystick.setXAxis(axis1Value);
  Joystick.setYAxis(axis2Value);

  for (int i = 0; i < buttonCount; i++) {
    bool pressed = (digitalRead(buttonPins[i]) == LOW);
    Joystick.setButton(i, pressed);
  }

  delay(5);
}
