int lightPin=A0;
int buzzPin=8;
int lightVal;
int delayT;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lightPin, INPUT);
  pinMode(buzzPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal=analogRead(lightPin);
  Serial.println(lightVal);  
  delayT=(-19./540.)*lightVal+(379./18.);
  Serial.println(delayT);  
  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(delayT);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(delayT);
}
