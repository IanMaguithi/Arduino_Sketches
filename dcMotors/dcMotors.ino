int speedPin=5;
int dirPinOne=6;
int dirPinTwo=7;
int motSpeed=255;
void setup() {
  // put your setup code here, to run once:
  pinMode(speedPin, OUTPUT);
  pinMode(dirPinOne, OUTPUT);
  pinMode(dirPinTwo, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(dirPinOne,HIGH);
  digitalWrite(dirPinTwo,LOW);
  analogWrite(speedPin,motSpeed);
}
