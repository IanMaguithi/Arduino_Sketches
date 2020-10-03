#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

int tim = 500; //the value of delay time
// initialize the library with the numbers of the interface pins
LiquidCrystal_I2C lcd(0x27,16,2); // set the LCD address to 0x27 for a 16 chars and 2 line display
/*********************************************************/
void setup()
{
  lcd.init(); //initialize the lcd
  lcd.backlight(); //open the backlight 
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);
  lcd.print("Hallo world");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("Ian Maguithi");
  delay(1000);
  lcd.clear();
}
