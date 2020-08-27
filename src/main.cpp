#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#include <WiFi.h>
#include <WebServer.h>

// PinDefinitions
#define PINLED        5
#define NUMPIXELS    53
#define PINNEON      19
bool neonOnOff ;
bool debugmode = true;
int maxval = 30 ;

Adafruit_NeoPixel pixels(NUMPIXELS, PINLED, NEO_GRB + NEO_KHZ800);
#define DELAYVAL 50

// Wifi
// SSID settings
const char* ssid = "PorscheLED";  // Enter SSID here
const char* password = "porscheled";  //Enter Password here

/* Put IP Address details */
IPAddress local_ip(192,168,1,1);
IPAddress gateway(192,168,1,1);
IPAddress subnet(255,255,255,0); 

WebServer server(80);
String stHTMLhead;
String stbodytitle;
String stbodyDRL;
bool bool_DRL = false;
String stbodyDIM;
bool bool_DIM = false;
String stbodySTOP;
bool bool_STOP = false;
String stbodyRechts;
bool bool_Rechts = false;
String stbodyLinks;
bool bool_Links = false;

bool BUT1status = LOW;
bool BUT2status = LOW;


void printdebug(String message){
  if ( debugmode ) { Serial.println(message); }
}


String SendHTML(uint8_t led1stat,uint8_t led2stat){
  String ptr = "<!DOCTYPE html> <html>\n";
  ptr +="<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=no\">\n";
  ptr +="<title>Porsche LED</title>\n";
  ptr +="<style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}\n";
  ptr +="body{margin-top: 50px;} h1 {color: #444444;margin: 50px auto 30px;} h3 {color: #444444;margin-bottom: 50px;}\n";
  ptr +=".button {display: block;width: 80px;background-color: #3498db;border: none;color: white;padding: 13px 30px;text-decoration: none;font-size: 25px;margin: 0px auto 35px;cursor: pointer;border-radius: 4px;}\n";
  ptr +=".button-on {background-color: #3498db;}\n";
  ptr +=".button-on:active {background-color: #2980b9;}\n";
  ptr +=".button-off {background-color: #34495e;}\n";
  ptr +=".button-off:active {background-color: #2c3e50;}\n";
  ptr +="p {font-size: 14px;color: #888;margin-bottom: 10px;}\n";
  ptr +="</style>\n";
  ptr +="</head>\n";

  ptr = "<body>\n";
  ptr +="<h1>Porsche LED control</h1>\n";
  ptr +="<h3>Using Access Point(AP) Mode on ESP32</h3>\n";

  if(led1stat)
  {ptr +="<p>LED1 Status: ON</p><a class=\"button button-off\" href=\"/but1off\">OFF</a>\n";}
  else
  {ptr +="<p>LED1 Status: OFF</p><a class=\"button button-on\" href=\"/but1on\">ON</a>\n";}

  if(led2stat)
  {ptr +="<p>LED2 Status: ON</p><a class=\"button button-off\" href=\"/but2off\">OFF</a>\n";}
  else
  {ptr +="<p>LED2 Status: OFF</p><a class=\"button button-on\" href=\"/but2on\">ON</a>\n";}

  ptr +="</body>\n";
  ptr +="</html>\n";
  return ptr;
}

void handle_OnConnect() {
  printdebug("handle_OnConnect");
  server.send(200, "text/html", SendHTML(BUT1status,BUT2status)); 
}
void handle_but1on() {
  BUT1status = HIGH;
  printdebug("handle_but1on");
  server.send(200, "text/html", SendHTML(true,BUT1status)); 
}
void handle_but1off() {
  BUT1status = LOW;
  printdebug("handle_but1off");
  server.send(200, "text/html", SendHTML(true,BUT1status)); 
}
void handle_but2on() {
  BUT1status = HIGH;
  printdebug("handle_but2on");
  server.send(200, "text/html", SendHTML(true,BUT2status)); 
}
void handle_but2off() {
  BUT1status = LOW;
  printdebug("handle_but2on");
  server.send(200, "text/html", SendHTML(true,BUT2status)); 
}
void handle_NotFound(){
  printdebug("handle_NotFound");
  server.send(404, "text/plain", "Not found");
}


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); 
  printdebug("Setup Begonnen"); 
  pixels.begin();
  printdebug("Setup pixels");
  pinMode(PINNEON, OUTPUT);
  printdebug("setup Neonpin");
  neonOnOff = false;

  printdebug("Setup wifi");
  WiFi.softAP(ssid, password);
  delay(100);
  WiFi.softAPConfig(local_ip, gateway, subnet);
  delay(100);

  server.on("/",        handle_OnConnect);
  server.on("/but1on",  handle_but1on);
  server.on("/but1off", handle_but1off);
  server.on("/but2on",  handle_but2on);
  server.on("/but2off", handle_but2off);
  server.onNotFound    (handle_NotFound);

  server.begin();
  printdebug("Setup HTTP server started");
}  

void loop() {
  server.handleClient();
}

void loopori() {
  // put your main code here, to run repeatedly:
  printdebug("Start rondje");
  pixels.clear();

  for(int i=0; i<NUMPIXELS; i++) {

    pixels.setPixelColor(i, pixels.Color(0, maxval, 0));
    pixels.setPixelColor(i-1, pixels.Color(maxval, 0, 0));
    pixels.setPixelColor(i-2, pixels.Color(0, 0, maxval));
    pixels.setPixelColor(i-3, pixels.Color(0, 0, 0));
    pixels.show();
    delay(DELAYVAL);
  }
  if ( neonOnOff ) {
    digitalWrite(PINNEON, HIGH ); 
    neonOnOff = not(neonOnOff);
  }
  else
  { digitalWrite(PINNEON, LOW );
    neonOnOff = not(neonOnOff);
   }
 for(int i=0; i<NUMPIXELS; i++) {

    pixels.setPixelColor(i, pixels.Color(maxval, maxval, maxval));
  }
    pixels.show();
    delay(DELAYVAL * NUMPIXELS);
  
}
