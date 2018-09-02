#include <SoftwareSerial.h>
SoftwareSerial esp8266(10, 11); // make RX Arduino line is pin 10, make TX Arduino line is pin 11.
void setup()
{
  Serial.begin(115200);
  esp8266.begin(115200); // esp's baud rate
}
void loop()
{
  if (esp8266.available())
  {
    while (esp8266.available())
    {
      char c = esp8266.read();
      Serial.write(c);
    }
  }
  if (Serial.available())
  {
    delay(2000);
    String command = "";
    while (Serial.available())
    {
      // read one character
      command += (char)Serial.read();
      
    }
    esp8266.println(command);
    Serial.println("COMMAND : " + command);
    
  }
}
