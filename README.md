# LARA
Level Acknowledging &amp; Real-time Alerting

Natural disasters are coming day by day and in India we are not have effective technologies or systems to control these catastrophes. One of such disasters is flood and here we are presenting a system that can alert when conditions for flood will be there, it’s a cloud based technology which posts on social media when there will be a situation like flood.

Project is on thingspeak and ibm cloud.

FOR Thingspeak

============Requirements============
1.Arduino Uno R3.
2.Jumper Wires.
3.Ulrasonic Sensor HC-SR04.
4.Esp8266 Wifi Module.
5.BreadBoard (not necessary).
6.Thingspeak account/IBM Cloud account.

============THINGSPEAK============
1. Make Circuit as given in photo.
2. Flash esp.ino to your arduino.
3. Configure Esp8266 see at_commands.txt
4. Flash Main.ino to you ardunio. Before flashing enter your API of thingspeak.
5. Configure your thingspeak. 
6. You can add your twitter account to gets live tweets.

Field1 is level. 
Field2 is rate.

=======================IBM BLUEMIX====================
Start iot service from catalog.
Register your device then you will get your auth-token and other information.
Add your credentials in wifiPlayload.ino and setup dashboard to see your data.

Note:
  Change security policy to TLS optional.
