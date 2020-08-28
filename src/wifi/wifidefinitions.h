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
