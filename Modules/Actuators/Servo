#define SERVO_PIN 32   // Pin number

void setup() {
pinMode(SERVO_PIN, OUTPUT);   // Initiating the pin as an output pin 
}

void loop() {

  moveServo(0);     // Replace 0 for whatever angle you want it to move to
  delay(1000);     // Just a delay to stop the code for a given time

}

void moveServo(int angle) {

  int pulseWidth = map(angle, 0, 180, 1000, 2000);
    // Convert angle (0–180°) into pulse width in microseconds
    // 1000 µs ≈ 0°
    // 1500 µs ≈ 90°
    // 2000 µs ≈ 180°

  digitalWrite(SERVO_PIN, HIGH);    // Outputting a HIGH to the pin (ON)
  delayMicroseconds(pulseWidth);   // Delay by a certain # of microseconds (Stays on for that period)
  digitalWrite(SERVO_PIN, LOW);   // Outputting a LOW to the pin (OFF)
  delayMicroseconds(20000 - pulseWidth);  // Completes 20 ms total frame (50 Hz refresh rate)

  // Servo expects a pulse every 20 ms (50 Hz signal):
  // HIGH pulse = position command
  // LOW time fills the rest of the 20 ms cycle
}
