#include <Stepper.h>
int stepsPerRevolution=2048;
int motSpeed=10;
Stepper myStepper(stepsPerRevolution,8,10,9,11);
int dt=500;
void setup() {
myStepper.setSpeed(motSpeed);

}

void loop() {
 myStepper.step(stepsPerRevolution);
 delay(dt);
 myStepper.step(-stepsPerRevolution);
 delay(dt);

}
