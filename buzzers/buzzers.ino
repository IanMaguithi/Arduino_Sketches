int myNumb;
int buzzPin=8;
int dt=2000;

String msg ="Please enter your number";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);

  while(Serial.available()==0){
    
  }

  myNumb=Serial.parseInt();

  if(myNumb>9){
    digitalWrite(buzzPin, HIGH);
    delay(dt);
    digitalWrite(buzzPin, LOW);
  }

}
