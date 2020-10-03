int buzzPin=8;
int dtOne=1;
int counter;
// getting tones from active buzzer

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(counter=0;counter<99;counter++){
    digitalWrite(buzzPin,HIGH);
    delay(dtOne);
    digitalWrite(buzzPin,LOW);
    delayMicroseconds(dtOne);    
  }


}
