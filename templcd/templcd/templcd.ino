#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
// Set the LCD address to 0x3F for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x3F, 16, 2);
#define DHTPIN 4 //define DHTPIN==4
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
void setup()
{
  lcd.begin();
  Serial.begin(9600);
  Serial.println("DHT11 test!"); 
  lcd.setCursor(0, 0);
  lcd.print("Humidity: ");
  lcd.setCursor(0, 1);
  lcd.print("temp: ");
  dht.begin();
}

void loop()
{
  delay(950);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  //float f = dht.readTemperature(true);
  if (isnan(h) || isnan(t) || isnan(f))
  {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  lcd.setCursor(9, 0);
  lcd.print(h);
  lcd.setCursor(5, 1);
  lcd.print(t);
}
