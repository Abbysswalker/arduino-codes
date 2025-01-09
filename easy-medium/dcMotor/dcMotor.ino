int speedPin=11;
int dirPin1=12;
int dirPin2=13;
int speedMotor=250;
int yPin=A1;
int yVal;
void setup() {
Serial.begin(9600);
pinMode(speedPin,OUTPUT);
pinMode(dirPin1,OUTPUT);
pinMode(dirPin2,OUTPUT);
pinMode(yPin,INPUT);
Serial.begin(9600);
}

void loop() {
yVal=analogRead(yPin);
Serial.println(yVal);
if(yVal>550){
digitalWrite(dirPin1,0);
digitalWrite(dirPin2,1);
analogWrite(speedPin,speedMotor);
}
if(yVal<=550){
digitalWrite(dirPin1,1);
digitalWrite(dirPin2,0);
analogWrite(speedPin,speedMotor);
}
}
