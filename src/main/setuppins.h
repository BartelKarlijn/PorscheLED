void setuppins() {
  Serial.begin(serialspeed); 
  printdebug("Setup Begonnen, nu de rest nog"); 

  pinMode(PINNEON, OUTPUT);
  neonOnOff = false;

  // Define the array of leds
  printdebug("Aantal pixels = " + (String) NUMPIXELS);
  FastLED.addLeds<NEOPIXEL, PINLED>(leds, NUMPIXELS); 
  // set all LEDs to black
  FastLED.clear();

  // limit my draw to 1A at 5v of power draw
  FastLED.setMaxPowerInVoltsAndMilliamps(power_max_volt,power_max_mA); 
  
  millis_next_led   = millis();
  millis_next_onoff = millis();
  millis_current    = millis();
  
}