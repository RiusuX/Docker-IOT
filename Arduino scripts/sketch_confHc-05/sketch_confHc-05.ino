  #include <SoftwareSerial.h>
   
  // Definimos el objeto para la comunicación serie
  SoftwareSerial BT(2,3); // 10 RX, 11 TX.
 
  void setup()
  {
    delay(500); // Esperamos 500 ms
    Serial.begin(9600); // Comienzo la comunicación con el monitor serie  
    BT.begin(9600); // Comienzo de la comunicación con el módulo Bluetooth HC-05 (por defecto)
   
    Serial.println("Esperando comandos AT ... ");
  }
 
  void loop()
  {  
    // Si hay datos disponibles en el monitor serie
    if(Serial.available())
    {
       // Escribimos los valores en el módulo bluetooth HC-05
       BT.write(Serial.read());
    }
   
    // Si hay datos disponibles en el módulo bluetooth HC-05
    if(BT.available())
    {
      // Mostramos los valores en el monitor serie
      Serial.write(BT.read());
    }
  }
