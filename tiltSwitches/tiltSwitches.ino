// Tilt switch project

int tiltPin=5;
int redPin=6;
int greenPin=7;
int tiltVal;

void ledColor(int on, int off){
  digitalWrite(on, HIGH);
  digitalWrite(off, LOW);  
}

void setup() {
  // put your setup code here, to run once:
  pinMode(tiltPin, INPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  
  digitalWrite(tiltPin, HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  tiltVal=digitalRead(tiltPin);
  if (tiltVal==0){
    ledColor(greenPin, redPin);
  }
  else{
    ledColor(redPin, greenPin);
  }
}
