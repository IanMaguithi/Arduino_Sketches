int redPin=9;
int greenPin=7;
int bluePin=8;

String myColor;
String msg="What colour do you want?";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);

  while(Serial.available()==0){
    
  }

  myColor=Serial.readString();
  myColor.toLowerCase();

  if (myColor == "red"){
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,LOW);
  }
    if (myColor == "green"){
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,HIGH);
    digitalWrite(bluePin,LOW);
  }
    if (myColor == "blue"){
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,HIGH);
  }
    if (myColor == "cyan"){
    analogWrite(redPin,0);
    analogWrite(greenPin,255);
    analogWrite(bluePin,255);
  }
  if (myColor == "magenta"){
    analogWrite(redPin,255);
    analogWrite(greenPin,0);
    analogWrite(bluePin,255);
  }


}
