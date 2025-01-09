int trigPin = 12;
int echoPin = 11;
int pingtravelTime;
int dt=10;
void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,HIGH);
delayMicroseconds(dt);
pingtravelTime=pulseIn(echoPin,HIGH);
delay(25);
digitalWrite(trigPin,LOW);
Serial.println(pingtravelTime);
}
