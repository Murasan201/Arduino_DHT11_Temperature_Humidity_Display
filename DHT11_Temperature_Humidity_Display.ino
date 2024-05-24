#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "DHT.h"

#define DHTPIN 2      // DHT11 data pin connected to digital pin 2
#define DHTTYPE DHT11 // DHT11 sensor type

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600); // シリアル通信を初期化
  lcd.init();         // initialize the LCD
  lcd.clear();        // clear the LCD display
  lcd.backlight();    // make sure backlight is on

  dht.begin();        // initialize the DHT11 sensor

  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.setCursor(0, 1);
  lcd.print("Humidity: ");
}

void loop() {
  // Read temperature as Celsius
  float temp = dht.readTemperature();
  // Read humidity
  float humidity = dht.readHumidity();

  // Check if any reads failed and exit early (to try again).
  if (isnan(temp) || isnan(humidity)) {
    Serial.println("Failed to read from DHT sensor!");
    lcd.setCursor(6, 0);
    lcd.print("Error  ");
    lcd.setCursor(10, 1);
    lcd.print("Error  ");
    return;
  }

  // Display temperature
  lcd.setCursor(6, 0);
  lcd.print(temp);
  lcd.print(" C  ");
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println(" C");

  // Display humidity
  lcd.setCursor(10, 1);
  lcd.print(humidity);
  lcd.print(" %  ");
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  delay(2000); // Wait a few seconds between measurements
}
