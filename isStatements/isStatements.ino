int ptvalue;
int ptPin=A0;
int redPin=5;
int greenPin=6;
int yellowPin=7;
float volts;

void statusPin(int one, int two, int three){
      digitalWrite(one,HIGH);
      digitalWrite(two,LOW);   
      digitalWrite(three,LOW);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(ptPin,OUTPUT);
  pinMode(redPin,OUTPUT);
  pinMode(yellowPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  ptvalue = analogRead(ptPin);
  volts = (5./1023)*ptvalue;
  Serial.print("The voltage on the potentiometer is: ");
  Serial.println(volts);

  if (volts<3){
    statusPin(greenPin,redPin,yellowPin);
  }
  if (volts>3 || volts<4){
    statusPin(yellowPin, redPin, greenPin);
  }
  if (volts>4){
    statusPin(redPin, yellowPin, greenPin);
  }

}
