#include <stdio.h>
#include <stdint.h>
#include <SoftwareSerial.h>

#define RESULT_BUFFER_SIZE (8)
SoftwareSerial BT(2,3);

//uint8_t
 float db   = 0;
 float temp = 0;
 float lux  = 0;
 float pot  = 0;

//char result_buf[RESULT_BUFFER_SIZE];

void setup() {
  Serial.begin(9600);    // Iniciamos la puerta serie
  BT.begin(9600);
}

void loop() {
  db    = analogRead(A5);
  temp  = (analogRead(A0) * 5000 * 10 / 1024);
  lux   = (analogRead(A1) / 4);
  pot   = (analogRead(A2) * 250000 / 1024);
  //char s [80];
  //sprintf (s,"{\"temp\": %f, \"lux\": %f, \"noice\": %f,\"ohm\": %f}", temp, lux, db, pot);
  //Serial.println (s);
  Serial.print("{\"temp\": ");
  Serial.print(temp,0);
  Serial.print(",");
  Serial.print(" \"lux\": ");
  Serial.print(lux,0);
  Serial.print(",");
  Serial.print(" \"noise\": ");
  Serial.print(db,2);
  Serial.print(",");
  Serial.print(" \"ohm\": ");
  Serial.print(pot,0);
  Serial.println("}");
  
  delay(1000);
}