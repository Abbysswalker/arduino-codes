#include <IRremote.h>
int IRpin = 9;
int dt = 500;
int comand;
int rPin = 2;
int gPin = 3;
int bPin = 4;
int ledState = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  IrReceiver.begin(IRpin);
  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(bPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (IrReceiver.decode() == 0) {
  }
  comand = IrReceiver.decodedIRData.command;
  Serial.println(comand);
  delay(dt);
  IrReceiver.resume();

  if (comand == 12) {
    if (digitalRead(rPin) == 0)
      digitalWrite(rPin, HIGH);
    else
      digitalWrite(rPin, LOW);
  }

   if (comand == 24) {
    if (digitalRead(gPin) == 0)
      digitalWrite(gPin, HIGH);
    else
      digitalWrite(gPin, LOW);
  }

   if (comand == 94) {
    if (digitalRead(bPin) == 0)
      digitalWrite(bPin, HIGH);
    else
      digitalWrite(bPin, LOW);
  }}