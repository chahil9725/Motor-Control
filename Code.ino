
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char auth[] = "XXXXXXXXXXXXXXXXXXXXXXXXX";

char ssid[] = "WiFi Name";
char pass[] = "WiFi Password";

void setup()
{
  // Debug console
  Serial.begin(9600);
 pinMode(D6, INPUT_PULLUP);
 if(digitalRead(D6))
  Blynk.begin(auth, ssid, pass);

}

void loop()
{
   if(digitalRead(D6))
   {
  Blynk.run();
   }
  else
  {
  analogWrite(D5,analogRead(A0));
  digitalWrite(D7,0);
  }
}
