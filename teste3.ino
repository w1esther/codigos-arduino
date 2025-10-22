#include <Ultrasonic.h>

const int trigPino = 11;   
const int echoPino = 12;   
Ultrasonic Sensor(trigPino, echoPino);
long distancia;


void setup() {
  Serial.begin(9600);
  pinMode(trigPino, OUTPUT);
  pinMode(echoPino, INPUT);
}

void loop() {
  distancia = Sensor.Ranging(CM);
  Serial.print(distancia);
  Serial.println('cm');
  delay(500);
}


