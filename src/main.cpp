#include <Arduino.h>

#include <main/include.h>

void setup() {
  // put your setup code here, to run once:
  setuppins();
  setupleds();
  setupwifi();
}  

void loop() {
  server.handleClient();
  pixelneon();
  pixeldrl();
  pixelprocessdim();
  //pixeldim();
  //pixelstop();
  //pixelpinkersweep();
  pixeltest();
  showpixels();
}
