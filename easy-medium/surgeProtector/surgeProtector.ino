float V2;
int analogVal;
int analogPin=A2;
int dt=300;
int redLed=10;
int yellowLed=9;
int greenLed=8;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(analogPin,INPUT);
pinMode(redLed,OUTPUT);
pinMode(yellowLed,OUTPUT);
pinMode(greenLed,OUTPUT);
}

void loop() {




  // put your main code here, to run repeatedly:
analogVal=analogRead(analogPin);
V2=(5.*analogVal)/1023;


//**Encender los leds**///

if(V2<3.0)
digitalWrite(greenLed,HIGH);
else
 digitalWrite(greenLed,LOW);

if(V2>3.1&&V2<4.0)
digitalWrite(yellowLed,HIGH);
else
digitalWrite(yellowLed,LOW);

if(V2>4.1)
digitalWrite(redLed,HIGH);
else
digitalWrite(redLed,LOW);



//*Fin del tema, Voltimetro*//
Serial.println(V2);
delay(dt);
}
