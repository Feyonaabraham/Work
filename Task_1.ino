//coded by FEYONA ABRAHAM
Write a program to put a NodeMCU ESP8266 on access point mode during 1st boot with specific SSID and password as “00000000” then after 15 minute put it on wifi connection mode to connect it to known network i.e. with a known network SSID and password (let SSID be “1234” and password is “00000000”).


#include<ESP8266WiFi.h>
#include<DNSServer.h>
#include<WiFiManager.h>

WiFiManager wifi;

void setup() {
 
    Serial.begin(115200);

    //SOFT ACCESS POINT MODE
    wifi.autoconnect("Moving Human");
    Serial.println("Connected to Moving Human");
    
    delay(900000) // after 15mins
    
    //WIFI CONNECTION MODE
    Wifi.mode(WIFI_STA); //nodemcu as station
    Wifi.begin("1234","00000000");
    Serial.print("connecting to WiFi");
    while(Wifi.status() ! = WL_CONNECTED)
    {
      Serial.print('.');
      delay(200);
    }
    Serial.print("IP Address");
    Serial.println(WiFi.localIP());
    
}

void loop() {
  // put your main code here, to run repeatedly:

}
