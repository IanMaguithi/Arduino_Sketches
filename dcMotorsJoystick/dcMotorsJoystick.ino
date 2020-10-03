int speedPin=5;
int dirPinOne=6;
int dirPinTwo=7;
int motSpeed;
int jPin=A5, jVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(speedPin, OUTPUT);
  pinMode(dirPinOne, OUTPUT);
  pinMode(dirPinTwo, OUTPUT);
  pinMode(jPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  jVal = analogRead(jPin);

  if (jVal<512){
    digitalWrite(dirPinOne,HIGH);
    digitalWrite(dirPinTwo,LOW);
    motSpeed=(-255./512.)*jVal+255.;
    analogWrite(speedPin,motSpeed);
  }

   if (jVal>=512){
    digitalWrite(dirPinOne,LOW);
    digitalWrite(dirPinTwo,HIGH);
    motSpeed=(255./512.)*jVal-255.;
    analogWrite(speedPin,motSpeed);
  }
  
}
