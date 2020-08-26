#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define PINLED        5
#define NUMPIXELS    50
#define PINNEON      19
bool neonOnOff ;

Adafruit_NeoPixel pixels(NUMPIXELS, PINLED, NEO_GRB + NEO_KHZ800);
#define DELAYVAL 50

void setup() {
  // put your setup code here, to run once:
  pixels.begin();

  pinMode(PINNEON, OUTPUT);
  neonOnOff = false;
}  

void loop() {
  // put your main code here, to run repeatedly:
  pixels.clear();

  for(int i=0; i<NUMPIXELS; i++) {

    pixels.setPixelColor(i, pixels.Color(0, 150, 0));
    pixels.setPixelColor(i-1, pixels.Color(150, 0, 0));
    pixels.setPixelColor(i-2, pixels.Color(0, 0, 150));
    pixels.setPixelColor(i-3, pixels.Color(0, 0, 0));
    pixels.show();
    delay(DELAYVAL);
  }
  delay(2000);
  if ( neonOnOff ) {
    digitalWrite(PINNEON, HIGH ); }
  else
  { digitalWrite(PINNEON, LOW );
   }
}