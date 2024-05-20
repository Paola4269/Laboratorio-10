#include <Servo.h>

int servoPin = 8;
int servoPos = 0;
int lightPin = A1;
int lightVal;
int dt = 50;
Servo myServo;

void setup() {
  myServo.attach(servoPin);
  Serial.begin(9600);
  pinMode(lightPin, INPUT);
}

void loop() {
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  #luz máxima = 950 y luz mínima = 200 (matemáticas para que funcione adecuadamente, quien lo diría)
  servoPos = (180./750.)*(lightVal-200.);
  myServo.write(servoPos);
}
