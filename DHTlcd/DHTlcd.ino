/*
 * on the I2C MODULE 
 * connect SDA to A4
 * and SCL to A5
 * DHT sensor to pin 2
 */
#include <DHT.h>
#include <LiquidCrystal_I2C.h>

#define Type DHT11

int sensePin=2, setTime=500, dt=2000;
DHT HT(sensePin,Type);

float humidity, tempC, tempF;

LiquidCrystal_I2C lcd(0x27,16,2); // set the LCD address to 0x27 for a 16 chars and 2 line display
/*********************************************************/

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  HT.begin();
  
  lcd.init(); //initialize the lcd
  lcd.backlight(); //open the backlight 
}

void loop() {
  // put your main code here, to run repeatedly:
  humidity=HT.readHumidity();
  tempC=HT.readTemperature();
  tempF=HT.readTemperature(true);

  lcd.setCursor(0,0);
  lcd.print("humidity: ");
  lcd.print(humidity);

  lcd.setCursor(0,1);
  lcd.print("tempC: ");
  lcd.print(tempC);

}
