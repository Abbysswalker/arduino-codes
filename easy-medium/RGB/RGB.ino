int red = 13;
int green = 12;
int blue = 11;
String color;
String msg="Diga un color'rojo' 'verde' 'azul':";
void setup() {
  // put your setup code here, to run once:
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while(Serial.available()==0){}

color=Serial.readString();
color.trim();
if(color=="rojo"){
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(blue,LOW);
}
if(color=="verde"){
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  digitalWrite(blue,LOW);
}
if(color=="azul"){
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  digitalWrite(blue,HIGH);
}
if(color=="cian"){
  digitalWrite(red,0);
  digitalWrite(green,255);
  digitalWrite(blue,255);
}
if(color=="magenta"){
  digitalWrite(red,255);
  digitalWrite(green,0);
  digitalWrite(blue,255);
}
if(color=="amarillo"){
  digitalWrite(red,0);
  digitalWrite(green,255);
  digitalWrite(blue,255);}

if(color=="naranja"){
  digitalWrite(red,255);
  digitalWrite(green,165);
  digitalWrite(blue,0);}

if(color=="low"){
  digitalWrite(red,0);
  digitalWrite(green,0);
  digitalWrite(blue,0);}
}
