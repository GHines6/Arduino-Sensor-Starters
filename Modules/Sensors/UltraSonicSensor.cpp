#include <NewPing.h>

#define TRIGGER_PIN 33 //   Trig pin on the HC-SR04 sensor 
#define ECHO_PIN 32    //   Echo pin on the HC-SR04 sensor
#define MAX_DISTANCE 200 // Max distance we want to ping for (in centimeters)



NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing library function that sets up pins and max distance


void setup() {
  Serial.begin(115200); // Starts Serial Monitor at 115200 baud


}

void loop() {
  delay(50);  // 50 is the # of ms it halts the controller for. Libary recommends not to go below 29ms

  Serial.print("Ping: "); // Printing "Ping: " onto the Serial Monitor
  Serial.print(sonar.ping_cm()); // Printing the # of cm measured by the sensor 
  Serial.println("cm"); // Prints "cm" then starts a new line for the next print

}
