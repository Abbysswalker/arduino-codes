#include <Servo.h>

int servoPin = 6;
int C = 0;
Servo myServo;
int dt=50;
int lightPin=A1;
int lightVal;
int servoPos=170;
void setup() {
  // put your setup code here, to run once:
  myServo.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly
lightVal=analogRead(lightPin);
//Serial.println(lightVal);
servoPos=(-170./200.)*(lightVal-400);
delay(dt);
Serial.println(servoPos);
myServo.write(servoPos);

}
