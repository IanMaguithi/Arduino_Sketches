int latchPin=11;
int clockPin=9;
int dataPin=12; // for sending data
int dt=250;

byte LED0s=0b10101010;
byte LED1s=0b01010101;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin,clockPin, LSBFIRST, LED0s);
  digitalWrite(latchPin, HIGH);
  
  delay(dt);
  
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin,clockPin, LSBFIRST, LED1s);
  digitalWrite(latchPin, HIGH);

  delay(dt);
}
