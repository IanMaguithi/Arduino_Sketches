int latchPin=11;
int clockPin=9;
int dataPin=12; // for sending data
int dt=1000;

byte LED0s=0x00;

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
  shiftOut(dataPin,clockPin, LSBFIRST, LED0s);
  digitalWrite(latchPin, HIGH);
  delay(dt);
  Serial.println(LED0s,HEX);
  LED0s = LED0s+1; 
  
}
