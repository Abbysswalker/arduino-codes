String ledColor;
String msg = "Escribe un color de led:";
int redPin = 9;
int yellowPin = 10;
int bluePin = 11;

/*String myName;
String msg1 = "Escribe tu nombre:";
String msg2 = "Hola: ";
String msg3 = ", Bienvenido";*/

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}



void loop() {

  Serial.println(msg);

  while (Serial.available() == 0) {}

  ledColor = Serial.readString();
ledColor.trim();
  if (ledColor == "red") {
    digitalWrite(redPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(bluePin, LOW);
  }
  if (ledColor == "yellow") {
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH)
    digitalWrite(bluePin, LOW);
  }
  if (ledColor == "blue") {
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(bluePin, HIGH);
  }


  // put your main code here, to run repeatedly:
  /* Serial.println(msg1);
  while (Serial.available() == 0) {}
  myName = Serial.readString();
  Serial.print(msg2);
  Serial.print(myName);
  Serial.print(msg3);
  */
}
