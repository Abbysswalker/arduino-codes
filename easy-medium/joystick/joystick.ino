int buttonPin = 7;
int buzzPin = 8;
int pinX = A0;
int pinY = A1;
int valX;
int valY;
int buttonVal;
int dt = 100;
void setup() {
  pinMode(pinX, INPUT);
  pinMode(pinY, INPUT);
  pinMode(buttonPin, INPUT);      //esto
  digitalWrite(buttonPin, HIGH);  //y esto
  /*SE RESUME A ESTO
  pinMode(buttonPin,INPUT_PULLUP);//esto
  */
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  valX = analogRead(pinX);
  valY = analogRead(pinY);
  buttonVal = digitalRead(buttonPin);
  Serial.print("Valor X=");
  Serial.print(valX);
  Serial.print(" Valor Y=");
  Serial.print(valY);
  Serial.print(" Valor boton=");
  Serial.println(buttonVal);
  delay(dt);
  if (buttonVal == 0) {
    digitalWrite(buzzPin, 1);
  } else {
    digitalWrite(buzzPin, 0);
  }
}
