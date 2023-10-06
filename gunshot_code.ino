#include <Servo.h>

const int soundSensorPin = A0;  // Sound sensor connected to analog pin A0
const int redLEDPin = 8;       // Red LED connected to digital pin 8
const int greenLEDPin = 9;     // Green LED connected to digital pin 9
const int servoPin = 12;       // Servo motor connected to digital pin 12
const int threshold = 500;     // Adjust this threshold value as needed

Servo servoMotor;
bool motorRotating = true;    // Flag to indicate if the motor is rotating

void setup() {
  pinMode(redLEDPin, OUTPUT);
  pinMode(greenLEDPin, OUTPUT);
  pinMode(servoPin, OUTPUT);
  servoMotor.attach(servoPin);
  Serial.begin(9600);
  rotateServoContinuously();  // Start the servo rotation on setup
}

void loop() {
  // Read the analog value from the sound sensor
  int sensorValue = analogRead(soundSensorPin);

  // Check if a clap sound is detected
  if (sensorValue > threshold) {
    if (motorRotating) {
      // If the motor is rotating, stop it
      stopServoRotation();
    } else {
      // If the motor is not rotating, start continuous rotation
      rotateServoContinuously();
    }

    // Toggle the motorRotating flag
    motorRotating = !motorRotating;

    // Turn on the green LED
    digitalWrite(greenLEDPin, LOW);
    digitalWrite(redLEDPin, HIGH);

    Serial.println("Gunshot detected!");

    // A small delay to avoid detecting the same clap multiple times in quick succession
    delay(1000);
  } else {
    // Turn off the green LED
    digitalWrite(greenLEDPin, HIGH);
    digitalWrite(redLEDPin, LOW);
  }
}

// Function to rotate the servo motor continuously
void rotateServoContinuously() {
  for (int angle = 0; angle <= 180; angle += 10) {
    servoMotor.write(angle);
    delay(100); // Adjust the delay to control the servo speed
  }
}

// Function to stop the servo motor
void stopServoRotation() {
  for (int angle = 180; angle >= 0; angle -= 10) {
    servoMotor.write(angle);
    delay(100); // Adjust the delay to control the servo speed
  }
}
