int Xpin=A0;
int Ypin=A5;
int Spin=5;
int dt = 500;

int xVal;
int yVal;
int sVal;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Xpin, INPUT);
  pinMode(Ypin, INPUT);
  pinMode(Spin, INPUT);
  digitalWrite(Spin, HIGH); // Sets the switch to high emulating a pull up resistor
}

void loop() {
  // put your main code here, to run repeatedly:
  xVal=analogRead(Xpin);
  yVal=analogRead(Ypin);
  sVal=digitalRead(Spin);
  delay(dt);
  Serial.print("Xvalue is: ");
  Serial.print(xVal);
  Serial.print(" Yvalue is: ");
  Serial.print(yVal);
  Serial.print(" Switch state is: ");
  Serial.println(sVal);
}
