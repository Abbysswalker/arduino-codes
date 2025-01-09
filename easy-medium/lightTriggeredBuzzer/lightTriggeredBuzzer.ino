int lightPin = A5;
int buzzPin = 8;
int dt;
float dt1;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lightPin, INPUT);
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  dt = analogRead(lightPin);
  dt1 = (9940. / 1023.) * dt + 60;
  Serial.println(dt);
  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(dt1);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(dt1);
}
