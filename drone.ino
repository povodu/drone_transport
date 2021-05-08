#include <Servo.h>

Servo myservo;

int val;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
}

void loop() {
  int isik = analogRead(A0);
  Serial.println(isik);

  if(isik > 800) {
    myservo.write(130);
    delay(1000);
  }
  if(isik < 800) {
    myservo.write(40);
    delay(1000);
  }

  delay(15);
}
