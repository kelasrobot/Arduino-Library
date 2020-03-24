#include<KRwifi.h>
char* ssid = "Sawala VVIP";
char* pass = "*#untukORANGdalam#*";
char* server = "192.168.100.231";

void setup() {
  Serial.begin(9600);
  setWifi(ssid, pass);
}

void loop() {
  httpGet(server, "/iot/koneksi.php", 80);
  Serial.print("Respon: ");
  Serial.println(getData);
  delay(5000);
}