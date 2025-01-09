int buzzPin = 8;
//int number;
int dt = 1000;
//String msg= "Diga un numero de pitidos:";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(dt);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(dt);





  // put your main code here, to run repeatedly:
  /* Serial.println(msg);
  while (Serial.available() == 0) {}
  number = Serial.parseInt();
  for (int i = 0; i < number; i++) {
    digitalWrite(buzzPin, HIGH);
    delay(dt);
    digitalWrite(buzzPin, LOW);
    delay(dt);
  }*/
}
