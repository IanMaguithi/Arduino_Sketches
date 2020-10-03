#include <LiquidCrystal_I2C.h>

float numOne, numTwo, answer;

String op;

int dt=5000;

// initialize the library with the numbers of the interface pins
LiquidCrystal_I2C lcd(0x27,16,2); // set the LCD address to 0x27 for a 16 chars and 2 line display
/*********************************************************/

void setup()
{
  Serial.begin(9600);
  lcd.init(); //initialize the lcd
  lcd.backlight(); //open the backlight 
}

void loop() {
  // put your main code here, to run repeatedly:
  
  lcd.setCursor(0,0);
  lcd.print("Input 1st number");
  while(Serial.available()==0){
    
  }
  numOne=Serial.parseFloat();
  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("Input 2nd number");
  while(Serial.available()==0){
    
  }
  numTwo=Serial.parseFloat();
  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("Input operator");
  while(Serial.available()==0){
    
  }
  op=Serial.readString();
  lcd.clear();
  
  if(op=="+"){
    answer=numOne+numTwo;
  }
  if(op=="-"){
    answer=numOne-numTwo;
  }
  if(op=="*"){
    answer=numOne*numTwo;
  }
  if(op=="/"){
    answer=numOne/numTwo;
  }
  
  lcd.setCursor(0,0);
  lcd.print(numOne);
  lcd.print(op);
  lcd.print(numTwo);
  lcd.print(" = ");
  lcd.print(answer);
  lcd.setCursor(0,1);
  lcd.print("    Thank you   ");
  delay(dt);
  lcd.clear();
  
}
