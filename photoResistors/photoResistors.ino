int lightPin=A0;
int buzzPin=8;
int lightVal;
int delayT;

void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin, INPUT);
  pinMode(buzzPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal=analogRead(lightPin);  
  delayT=(9./550.)*lightVal-(25./11.);
  digitalWrite(buzzPin, HIGH);
  delay(delayT);
  digitalWrite(buzzPin, LOW);
  delay(delayT);
}
