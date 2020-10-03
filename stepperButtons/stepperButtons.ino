#include <Stepper.h>
int stepsPerRevolution=5000; // specific to a motor
int motSpeed=5; // revolutions per minute 0-ten

int butPin=9;
int butNew;
int butOld=1;
int motDir=1; // Motor direction 1--> clockwise movement -1--> anticlockwise

int dt=500;

Stepper myStepper(stepsPerRevolution, 5,6,7,8); // stepper object takes in steps and pin sequence

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myStepper.setSpeed(motSpeed);
  pinMode(butPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  butNew = digitalRead(butPin);
  if (butOld==1 && butNew==0){
    motDir=motDir*(-1);
  }
  myStepper.step(motDir*1);
  butOld=butNew;
}
