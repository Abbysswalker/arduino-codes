#include <LiquidCrystal.h>

int rs = 12;
int e = 11;
int d4 = 5;
int d5 = 4;
int d6 = 3;
int d7 = 2;

float num1;
float num2;
float result;
String operacion;
LiquidCrystal lcd(rs, e, d4, d5, d6, d7);

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Calculadora");
  lcd.setCursor(0, 1);
  lcd.print("Numero 1:");
  while (Serial.available() == 0) {}
  num1 = Serial.parseFloat();
  while (Serial.available() > 0) { // Clear any remaining characters in the buffer
    Serial.read();
  }
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Numero 2:");
  while (Serial.available() == 0) {}
  num2 = Serial.parseFloat();
  while (Serial.available() > 0) { // Clear any remaining characters in the buffer
    Serial.read();
  }
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Que operacion");
  lcd.setCursor(0, 1);
  lcd.print("+-*/");
  while (Serial.available() == 0) {}
  operacion = Serial.readString();
  operacion.trim();
  lcd.clear();

  if (operacion == "+") {
    result = num1 + num2;
  } else if (operacion == "-") {
    result = num1 - num2;
  } else if (operacion == "*") {
    result = num1 * num2;
  } else if (operacion == "/") {
    if (num2 != 0) {
      result = num1 / num2;
    } else {
      lcd.setCursor(0, 0);
      lcd.print("Error: Div 0");
      delay(5000);
      lcd.clear();
      return;
    }
  } else {
    lcd.setCursor(0, 0);
    lcd.print("Operacion invalida");
    delay(5000);
    lcd.clear();
    return;
  }

  lcd.setCursor(0, 0);
  lcd.print("Operacion:");
  lcd.setCursor(0, 1);
  lcd.print(num1);
  lcd.print(operacion);
  lcd.print(num2);
  lcd.print("=");
  lcd.print(result);
  delay(5000);
  lcd.clear();
}
