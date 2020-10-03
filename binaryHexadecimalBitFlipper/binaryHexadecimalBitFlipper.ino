int latchPin=11;
int clockPin=9;
int dataPin=12; // for sending data
int dt=500;

byte myByte=0x18;
byte myByteFlipped;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // no need to put a for loop upto 0xff as it overflows to 00

  
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin,clockPin, LSBFIRST, myByte);
  digitalWrite(latchPin, HIGH);
  delay(dt);

  myByteFlipped=255-myByte;
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin,clockPin, LSBFIRST, myByteFlipped);
  digitalWrite(latchPin, HIGH);
  delay(dt);
     
}
