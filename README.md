# infinite-hid-controller-base
Base USB HID controller sketches for Arduino Leonardo compatible boards using the Arduino Joystick Library, for electric, hybrid, diesel, and steam simulation controls. Due to sim control hardware being a new means of interacting with a variety of simulators- each vehicle type must have its own unique identifier to avoid port duplication blocking.
## Overview

This repository contains simple working example firmware for Arduino Leonardo compatible boards using the MHeironimus Arduino Joystick Library.

Each sketch is intended to serve as a base that builders can modify for their own projects. The examples use common analog inputs for potentiometers and common digital inputs for buttons and switches.

These sketches are meant to be a starting point. Pin assignments, axis behavior, button counts, switch logic, and hardware layout may be customized by the end user.

## Included sketches

### Electric base
- 1 analog axis
- Example digital button inputs

### Hybrid base
- 2 analog axes
- Example digital button inputs

### Diesel base
- 3 analog axes
- Example digital button inputs

### Steam base
- 4 analog axes
- Example digital button inputs

## Hardware

These example sketches are designed for:
- Arduino Leonardo compatible boards
- ATmega32U4 based USB-capable boards with Leonardo compatibility

## Library requirement

These sketches use the MHeironimus Arduino Joystick Library.

## Default example input mapping

- Analog inputs: A0, A1, A2, A3
- Digital button inputs: common digital pins such as 2 through 11 depending on sketch

Buttons are configured using INPUT_PULLUP, so each button is considered pressed when the pin is pulled to ground.

## Purpose

This repository is intended to provide open working reference firmware for USB HID simulation controller projects. These examples are deliberately simple so they can be understood, tested, and expanded easily.

## License

MIT
