#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define PINLED        5
#define NUMPIXELS    50
#define PINNEON      19
bool neonOnOff ;
bool debugmode = false;

Adafruit_NeoPixel pixels(NUMPIXELS, PINLED, NEO_GRB + NEO_KHZ800);
#define DELAYVAL 50

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); 
  if ( debugmode ) { Serial.println("Setup Begonnen"); }
  pixels.begin();
  if ( debugmode ) { Serial.println("Setup pixels"); }
  
  pinMode(PINNEON, OUTPUT);
  if ( debugmode ) { Serial.println("setup Neonpin"); }
  neonOnOff = false;
}  

void loop() {
  // put your main code here, to run repeatedly:
  if ( debugmode ) { Serial.println("Start rondje"); }
  pixels.clear();

  for(int i=0; i<NUMPIXELS; i++) {

    pixels.setPixelColor(i, pixels.Color(0, 150, 0));
    pixels.setPixelColor(i-1, pixels.Color(150, 0, 0));
    pixels.setPixelColor(i-2, pixels.Color(0, 0, 150));
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

    pixels.setPixelColor(i, pixels.Color(150, 150, 150));
  }
    pixels.show();
    delay(DELAYVAL * NUMPIXELS);
  
}