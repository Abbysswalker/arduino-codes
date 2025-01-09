/*int pinButton=8;
int buttonVal;
void setup() {
  // put your setup code here, to run once:
pinMode(pinButton,INPUT);
Serial.begin(9600);
digitalWrite(pinButton,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonVal=digitalRead(pinButton);
Serial.println(buttonVal);
}
*/


int pinButton=8;
int buttonVal;
void setup() {
  // put your setup code here, to run once:
pinMode(pinButton,INPUT_PULLUP);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonVal=digitalRead(pinButton);
Serial.println(buttonVal);
}