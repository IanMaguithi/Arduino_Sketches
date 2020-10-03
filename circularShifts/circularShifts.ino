int latchPin=11;
int clockPin=9;
int dataPin=12; // for sending data
int dt=1000;

byte myByte=0x80,myBytet=0x01;

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
  
  // Circular shift right
  for(int counter=0; counter<=7; counter++){
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin,clockPin, LSBFIRST, myByte);
    digitalWrite(latchPin, HIGH);
    delay(dt);
    myByte=myByte*128+myByte/2;
  }
  
  for(int counter=0; counter<=7; counter++){
    
    // Circular shift left
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin,clockPin, LSBFIRST, myBytet);
    digitalWrite(latchPin, HIGH);
    delay(dt);
    myBytet=myBytet/128+myBytet*2; 
    }
     
}
