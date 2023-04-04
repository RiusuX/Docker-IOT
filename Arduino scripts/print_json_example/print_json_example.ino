
#include <ArduinoJson.h>
float ruido;
float temp;
float nluz;
float pot;
char buffer[20];

void setup(){
  Serial.begin(9600);    // Iniciamos la puerta serie 
}

void loop(){
  ruido = 20 * log10(analogRead(A5)*5/1024) ;
  temp = analogRead(A0)*5000*10/ 1024;
  nluz = analogRead(A1)/4;
  pot = analogRead(A2)*250000/1024;
  
  StaticJsonDocument<200> doc;
  doc["temperatura"] = temp;
  doc["ruido"] = ruido;
  doc["resistencia"] = pot;
  doc["nivel de luz"] = nluz;

  String jsonString;
  serializeJson(doc, jsonString);
  Serial.println(jsonString);
  //serializeJson(doc, Serial);
  delay(1000);
}