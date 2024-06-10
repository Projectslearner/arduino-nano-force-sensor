/*
    Project name : Force Sensor
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-force-sensor
*/

#define FORCE_PIN A0 // Analog pin connected to the force sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int forceValue = analogRead(FORCE_PIN); // Read force sensor value
  
  Serial.print("Force Sensor Value: ");
  Serial.println(forceValue); // Print force sensor value to serial monitor
  
  delay(1000); // Delay for readability
}
