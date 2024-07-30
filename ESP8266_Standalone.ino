
#define BLYNK_PRINT Serial


#define BLYNK_TEMPLATE_ID "TMPL6X4VCXJ1v"
#define BLYNK_TEMPLATE_NAME "project akhir"
#define BLYNK_AUTH_TOKEN "oCwul1fl_OTkbu_YmhFhaNQ9xdbGhmha"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "RICALDO";
char pass[] = "12345678";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
}

void loop()
{
  Blynk.run();
}

// Blynk Virtual Pins untuk tombol di aplikasi
BLYNK_WRITE(V1)
{
  int pinValue = param.asInt();
  digitalWrite(D1, pinValue);
}

BLYNK_WRITE(V2)
{
  int pinValue = param.asInt();
  digitalWrite(D2, pinValue);
}

