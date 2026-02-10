#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
byte sensorPin = 6;
byte indicator = 10;
void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  pinMode(sensorPin,INPUT);
  pinMode(indicator,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  byte state = digitalRead(sensorPin);
  digitalWrite(indicator,state);
  if(state == 1)
  {
  lcd.setCursor(2,0);
  lcd.print("Somebody is");
  lcd.setCursor(2,1);
  lcd.print("in this area!");
  }
  else if(state == 0)
  {
  lcd.setCursor(2,0);
  lcd.print("No one!      ");
  lcd.setCursor(2,1);
  lcd.print("No one!      ");
  delay(500);
  }
}
