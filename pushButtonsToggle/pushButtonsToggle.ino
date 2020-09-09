int ledPin=8;
int buttonPin=9;
int LEDState=0;
int buttonNew;
int buttonOld=1;
int dT=100;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonNew=digitalRead(buttonPin);
  if (buttonOld==0 && buttonNew==1){
    if(LEDState==0){
      digitalWrite(ledPin,HIGH);
      LEDState=1;
    }
    else{
      digitalWrite(ledPin,LOW);
      LEDState=0;
    }
  }

  buttonOld=buttonNew;
  delay(dT);
}
