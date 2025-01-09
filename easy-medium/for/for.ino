int redLed=4;
int yellowLed=3;
int dt=500;
int yellow=3;
int red=5;
int i;
void setup() {
  // put your setup code here, to run once:
pinMode(redLed,OUTPUT);
pinMode(yellowLed,OUTPUT);

}

void loop() {
//con bucle for

for(i=0;i<yellow;i++){
digitalWrite(yellowLed,HIGH);
delay(dt);
digitalWrite(yellowLed,LOW);
delay(dt);
}
for(int i=0;i<red;i++){
digitalWrite(redLed,HIGH);
delay(dt);
digitalWrite(redLed,LOW);
delay(dt);
}





/* put your main code here, to run repeatedly:
digitalWrite(yellowLed,HIGH);
delay(dt);
digitalWrite(yellowLed,LOW);
delay(dt);
digitalWrite(yellowLed,HIGH);
delay(dt);
digitalWrite(yellowLed,LOW);
delay(dt);
digitalWrite(yellowLed,HIGH);
delay(dt);
digitalWrite(yellowLed,LOW);

delay(dt);
digitalWrite(redLed,HIGH);
delay(dt);
digitalWrite(redLed,LOW);
delay(dt);
digitalWrite(redLed,HIGH);
delay(dt);
digitalWrite(redLed,LOW);
delay(dt);
digitalWrite(redLed,HIGH);
delay(dt);
digitalWrite(redLed,LOW);
delay(dt);
digitalWrite(redLed,HIGH);
delay(dt);
digitalWrite(redLed,LOW);
delay(dt);
digitalWrite(redLed,LOW);
delay(dt);
digitalWrite(redLed,HIGH);
delay(dt);
digitalWrite(redLed,LOW);
delay(dt);
digitalWrite(yellowLed,HIGH);
delay(dt);
digitalWrite(yellowLed,LOW);
delay(dt);
digitalWrite(yellowLed,HIGH);
delay(dt);
digitalWrite(yellowLed,LOW);
delay(dt);
digitalWrite(yellowLed,HIGH);
delay(dt);
digitalWrite(yellowLed,LOW);
delay(dt);
digitalWrite(redLed,HIGH);
delay(dt);
digitalWrite(redLed,LOW);
delay(dt);
digitalWrite(redLed,HIGH);
delay(dt);
digitalWrite(redLed,LOW);
delay(dt);
digitalWrite(redLed,HIGH);
delay(dt);
digitalWrite(redLed,LOW);
delay(dt);
digitalWrite(redLed,HIGH);
delay(dt);
digitalWrite(redLed,LOW);
delay(dt);
digitalWrite(redLed,HIGH);
delay(dt);
digitalWrite(redLed,LOW);
delay(dt);
*/
}
