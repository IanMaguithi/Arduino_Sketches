
int numBlinks;
int counter;
int blinkT=500;
int redPin=9;
String msg="How many blinks do you want? ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available()==0){
    
  }
  numBlinks=Serial.parseInt();

  for(j=0;j<=numBlinks;j++){
    digitalWrite(redPin,HIGH);
    delay(blinkT);  
    digitalWrite(redPin,LOW);
    delay(blinkT);    
  }
}
