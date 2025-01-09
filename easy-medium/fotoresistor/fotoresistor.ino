int lightPin = A5;
int lightVal;
int dt = 100;
int gPin = 9;
int rPin = 8;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lightPin, INPUT);
  pinMode(gPin, OUTPUT);
  pinMode(rPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(dt);
  if (lightVal < 200) {
    digitalWrite(rPin, 1);
    digitalWrite(gPin, 0);
  }
  if (lightVal >= 200) {
    digitalWrite(gPin, 1);
    digitalWrite(rPin, 0);
  }
}
