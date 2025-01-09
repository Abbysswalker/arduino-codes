#include <LiquidCrystal.h>

int rs = 12;
int e = 11;
int d4 = 6;
int d5 = 5;
int d6 = 4;
int d7 = 3;

float num1;
float num2;
float result;
String operacion;
LiquidCrystal lcd(rs, e, d4, d5, d6, d7);

//DHT-11
#include <DHT.h>
#include <DHT_U.h>

#define Type DHT11
int dhtPin = 2;
DHT HT(dhtPin, Type);
int humidity;
float tempC;
float tempF;
int dt = 500;

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);

  HT.begin();
}

void loop() {
  humidity = HT.readHumidity();
  tempC = HT.readTemperature();
  tempF = HT.readTemperature(true);
  lcd.setCursor(0, 0);
  lcd.print("Humedad:");
  lcd.print(humidity);
  lcd.print("%");
  lcd.setCursor(0, 1);
  lcd.print("T:");
  lcd.print(tempC);
  lcd.print("C ");
  lcd.print(tempF);
  lcd.print("F");
  delay(dt);
  lcd.clear();
}
