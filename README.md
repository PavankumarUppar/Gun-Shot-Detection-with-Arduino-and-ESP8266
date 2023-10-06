# Gun Shot Detection with Arduino and ESP8266

This GitHub repository contains the source code and hardware setup for a Gun Shot Detection project using an Arduino Uno, ESP8266, a sound sensor, LEDs, and a servo motor. This project is designed to detect a gunshot sound and respond accordingly by rotating a servo motor and indicating the detection status with LEDs.

## Hardware Components

- **Arduino Uno**: The Arduino Uno serves as the main control unit for this project.

- **ESP8266**: The ESP8266 module is used for wireless communication and data transmission.

- **Sound Sensor**: The sound sensor (connected to analog pin A0) is used to detect loud sounds, specifically gunshot-like sounds.

- **LEDs**: Two LEDs are used for visual indication: a red LED (connected to digital pin 8) and a green LED (connected to digital pin 9).

- **Servo Motor**: The servo motor (connected to digital pin 12) is used to visually indicate the detection by rotating continuously.

## Project Overview

This project aims to detect gunshot-like sounds using a sound sensor. When a gunshot sound is detected, the system responds as follows:

- If the servo motor is rotating, it stops.
- If the servo motor is not rotating, it starts continuous rotation.
- The green LED is turned off, and the red LED is turned on to indicate detection.
- A small delay is added to prevent detecting the same gunshot sound multiple times in quick succession.

## Getting Started

1. Set up your hardware components as described above.

2. Upload the provided Arduino sketch to your Arduino Uno.

3. Ensure you have the necessary libraries installed, including the Servo library.

4. Power up the system and monitor the serial output for gunshot detection notifications.

## Contributing

Contributions to this project are welcome. If you have ideas for improvements or new features, please create a pull request.

Happy building and experimenting! 🚀🔊🛠️

## Watch the Project in Action!

Check out the video demonstration on YouTube: [Gun Shot Detection with Arduino and ESP8266 - YouTube](https://youtu.be/6sJnpMSHkSM)
