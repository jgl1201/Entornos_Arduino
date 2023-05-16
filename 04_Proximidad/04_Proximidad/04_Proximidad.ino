#include <Ultrasonic.h>  

int DISTANCIA = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);
  pinMode(5, OUTPUT);
}

void loop()
{
  DISTANCIA = 0.01723 * readUltrasonicDistance(13, 12);
  Serial.println(DISTANCIA);
  if (DISTANCIA < 20) {
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
