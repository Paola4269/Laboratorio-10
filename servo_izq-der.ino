#include <Servo.h>

Servo myservo;  

void setup() {
  myservo.attach(8);  
  Serial.begin(9600); 
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read(); 
    if (command == 'L') {
      myservo.write(0); 
    } else if (command == 'R') {
      myservo.write(180);
    }
  }
}
