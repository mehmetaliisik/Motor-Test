#include <Servo.h>
Servo Motor;
int potVal,Gas;
void setup() {
  Motor.attach(4,1000,2000);
  delay(2000);
}

void loop() {
  potVal = analogRead(A0);
  Gas = map(potVal, 0, 1023, 0, 180);
  Gas = constrain(potVal, 0, 1023);
  Motor.write(Gas);
}
