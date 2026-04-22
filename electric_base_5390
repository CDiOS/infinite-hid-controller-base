#include <Joystick.h>

// Electric base:
// 1 analog axis on A0
// 4 example buttons on pins 2, 3, 4, 5

Joystick_ Joystick(
  JOYSTICK_DEFAULT_REPORT_ID,
  JOYSTICK_TYPE_JOYSTICK,
  4,   // button count
  0,   // hat switch count
  true,   // X
  false,  // Y
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

const int axisPin = A0;
const int buttonPins[] = {2, 3, 4, 5};
const int buttonCount = sizeof(buttonPins) / sizeof(buttonPins[0]);

void setup() {
  for (int i = 0; i < buttonCount; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }

  Joystick.setXAxisRange(0, 1023);
  Joystick.begin();
}

void loop() {
  int axisValue = analogRead(axisPin);
  Joystick.setXAxis(axisValue);

  for (int i = 0; i < buttonCount; i++) {
    bool pressed = (digitalRead(buttonPins[i]) == LOW);
    Joystick.setButton(i, pressed);
  }

  delay(5);
}
