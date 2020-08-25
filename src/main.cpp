#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define PIN        6
#define NUMPIXELS 50

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
#define DELAYVAL 50

void setup() {
  // put your setup code here, to run once:
  pixels.begin();

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
}