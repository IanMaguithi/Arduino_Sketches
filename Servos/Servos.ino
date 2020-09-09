#include <Servo.h>

int servoPin=8;
int servoPos=0;

Servo myServo; // servo object

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(servoPin); //attaches servo pin to servo object
}

void loop() {
  // put your main code here, to run repeatedly:
  myServo.write(servoPos); // takes position 0-180

}
