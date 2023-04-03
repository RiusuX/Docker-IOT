
float ruido;
float temp;

void setup(){
  Serial.begin(9600);    // Iniciamos la puerta serie
}

void loop(){
  ruido = 20 * log10(analogRead(A5)*5/1024) ;
  temp = (((analogRead(A0)) * 5000) / 1024)/10;

  Serial.print("Temperature(ºC): ");
  Serial.print(temp);
  Serial.print("Ruido(dB): ");
  Serial.println(ruido);
  delay(200);
}
