import paho.mqtt.client as mqtt

client = mqtt.Client()
client.connect("172.29.01", 1883, 60)
client.publish("hola/output", "99")