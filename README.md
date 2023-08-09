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

