int latchPin=11;
int clockPin=9;
int dataPin=12; // for sending data
int dt=1000;

byte myByte=0x80;

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

  Serial.println(myByte,HEX);
  delay(dt);
  myByte=myByte/2;
  
}
