#include <DHT.h>
#include <LiquidCrystal_I2C.h>

#define Type DHT11


int sensePin=2;

DHT HT(sensePin,Type);

float humidity, tempC, tempF;

LiquidCrystal_I2C lcd(0x27,16,2); // set the LCD address to 0x27 for a 16 chars and 2 line display
/*********************************************************/
void setup() {
  // put your setup code here, to run once:
  HT.begin();
  
  lcd.init();
  lcd.backlight();

}

void loop() {
  // put your main code here, to run repeatedly:
  humidity=HT.readHumidity();
  tempC=HT.readTemperature();
  tempF=HT.readTemperature(true);

  lcd.setCursor(0,0);
  lcd.print("Temp F=");
  lcd.print(tempF);

  lcd.setCursor(0,1);
  lcd.print("Humidity= ");
  lcd.print(humidity);
  lcd.print(" %");

}
