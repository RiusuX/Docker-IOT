# 

# Docker-IOT: Arduino Sensor Data to Dockerized Node-RED Dashboard via MQTT

¡Bienvenido al repositorio! Aquí encontrarás  scripts de Arduino diseñados para leer datos de diversos sensores y transmitir esa información a una Raspberry Pi utilizando módulos Bluetooth por medio de comunicación serial. Posteriormente, estos datos se procesan y se envían a través de MQTT hacia un entorno de Node-RED ejecutado en contenedores Docker.

## Contenido

- **Arduino Scripts:** Scripts optimizados para varios sensores que te permitirán recopilar datos esenciales.
- **Python Script:** Un script de Python para leer datos a través de comunicación serial en la Raspberry Pi.

## Requisitos

- Placas Arduino y sensores correspondientes.
- Módulo Bluetooth compatible con Arduino HC-05.
- Raspberry Pi 3B con Python y las bibliotecas necesarias instaladas.
- Conexión y configuración adecuadas de Docker para ejecutar el broker MQTT y Node-RED en contenedores.

![Dashboard](img/2d7600b6-f3c5-4c66-b679-93378a08659a.jpg)
![Node-red](img/053ec601-b63f-4b7d-a8a3-cbd59eb100c8.jpg)
![Conexion](img/89f7e296-ad63-4d4b-8fb2-d9899b35ef57.jpg)
