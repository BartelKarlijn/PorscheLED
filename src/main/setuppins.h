void setuppins() {
  Serial.begin(serialspeed); 
  printdebug("Setup Begonnen"); 
 
  printdebug("Setup pixels");
  pinMode(PINNEON, OUTPUT);
  printdebug("setup Neonpin");
  neonOnOff = false;

  // Define the array of leds
  FastLED.addLeds<NEOPIXEL, PINLED>(leds, NUMPIXELS); 
  // set all LEDs to black
  FastLED.clear();
  //fill_solid(leds, NUM_LEDS, color);
  FastLED.setBrightness(maxbrightness);

  // limit my draw to 1A at 5v of power draw
  FastLED.setMaxPowerInVoltsAndMilliamps(5,700); 
  
  millis_next_led   = millis();
  millis_next_onoff = millis();
  millis_current    = millis();
  
}