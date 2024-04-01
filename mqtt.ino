//#include <ESP8266WiFi.h>
//#include <PubSubClient.h>

//PubSubClient myclient()

const int analog_pin = A0;

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  static int read_value = 0;
  read_value = analogRead(analog_pin);
  Serial.println(read_value);
  delay(1);
}
