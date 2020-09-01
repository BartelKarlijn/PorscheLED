#include <Arduino.h>
#include <configuration.h>
#include <main/globalvariables.h>
#include <main/include.h>

void setup() {
  // put your setup code here, to run once:
  setuppins();
  setupleds();
  setupwifi();
}  

void loop() {
  server.handleClient();
  pixeldrl();
  pixeldim();
  pixelstop();
  pixelpinkers();
  showpixels();
}

/* void loopori() {
  server.handleClient();
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
  
} */
