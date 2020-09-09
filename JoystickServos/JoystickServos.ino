#include<Servo.h>
int Xpin=A0;
int Ypin=A5;
int Spin=5;
int xSPin=9;
int ySpin=8;
int buzzPin=7;
int dt = 500;

Servo servo_x, servo_y;

int WVx;
int WVy;
int xVal;
int yVal;
int sVal;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Xpin, INPUT);
  pinMode(Ypin, INPUT);
  pinMode(Spin, INPUT);
  pinMode(buzzPin, OUTPUT);
  
  servo_x.attach(xSpin);
  servo_y.attach(ySpin);
  
  digitalWrite(Spin, HIGH); // Sets the switch to high emulating a pull up resistor
}

void loop() {
  // put your main code here, to run repeatedly:
  xVal=analogRead(Xpin);
  WVx=(180./1023)*xVal;
  yVal=analogRead(Ypin);
  WVy=(180./1023)*yVal;
  sVal=digitalRead(Spin);

  servo_x.write(WVx);
  servo_y.write(WVy);
  
  delay(dt);
  Serial.print("Xvalue is: ");
  Serial.print(xVal);
  Serial.print(" Yvalue is: ");
  Serial.print(yVal);
  Serial.print(" Switch state is: ");
  Serial.println(sVal);
}
