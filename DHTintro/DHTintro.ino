#include <DHT.h>
#define Type DHT11

int sensePin=2, setTime=500, dt=2000;
DHT HT(sensePin,Type);
float humidity, tempC, tempF;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  HT.begin();
  delay(setTime);
}

void loop() {
  // put your main code here, to run repeatedly:
  humidity=HT.readHumidity();
  tempC=HT.readTemperature();
  tempF=HT.readTemperature(true);
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" Temperature C: ");
  Serial.print(tempC);
  Serial.print(" Temperature F: ");
  Serial.println(tempF);
  delay(dt);
}
