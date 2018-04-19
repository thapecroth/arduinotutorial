#include <Wire.h>
#include <LiquidCrystal_I2C.h>
// Set the LCD address to 0x3F for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x3F, 16, 2);
int i =1000;
void setup()
{
  // initialize the LCD
  lcd.begin();
  // Turn on the blacklight and print a message.
  lcd.backlight();
  lcd.print("Hello, world!");
  lcd.setCursor(0, 1);
  lcd.print("BCC166");
  delay(10000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Bomb activated");
  lcd.setCursor(0, 1);
  lcd.print("Timer: ");
}
































































































































void loop()
{
  lcd.setCursor(6,1);
  lcd.print(i);
  i-=1;
  delay(100);
}
