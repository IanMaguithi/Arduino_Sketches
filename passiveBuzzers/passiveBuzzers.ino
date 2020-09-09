int buzzPin=8;
int buzzTime=5;
int buzzTimeT=6;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(buzzPin,HIGH);
  delay(buzzTime);
  digitalWrite(buzzPin,LOW);
  delay(buzzTimeT);
}
