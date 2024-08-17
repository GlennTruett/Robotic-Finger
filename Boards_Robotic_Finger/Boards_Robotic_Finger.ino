#include <Arduino.h>
#include <Servo.h>
Servo myservo2;

int potPin0 = 0;
int val0 = 0;

void setup() {
  // put your setup code here, to run once:
myservo2.attach(2);
}

void loop() {
  // put your main code here, to run repeatedly:

val0 = analogRead(potPin0);
val0 = map(val0, 0, 1023, 0, 180);
myservo2.write(val0*2.5); // Amplify the signal

delay(20);
}
