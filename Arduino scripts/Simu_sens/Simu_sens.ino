
float ruido;
float temp;
float nluz;
float pot;

void setup(){
  Serial.begin(9600);    // Iniciamos la puerta serie
}

void loop(){
  ruido = 20 * log10(analogRead(A5)*5/1024) ;
  temp = analogRead(A0)*5000*10/ 1024;
  nluz = analogRead(A1)/4;
  pot = analogRead(A2)*250000/1024;

  Serial.print("Temperature(ºC): ");
  Serial.println(temp);
  Serial.print("Ruido(dB): ");
  Serial.println(ruido);
  Serial.print("Resistencia(Ω): ");
  Serial.println(pot);
  Serial.print("Nivel de luz: ");
  Serial.println(nluz);
  delay(2500);
}
