void setuppins() {
  Serial.begin(serialspeed); 
  printdebug("Setup Begonnen"); 
 
  pixels.begin();
  printdebug("Setup pixels");
  pinMode(PINNEON, OUTPUT);
  printdebug("setup Neonpin");
  neonOnOff = false;

  // Zet alle pixels af
  pixels.clear();
  pixels.show();

  millis_next_led   = millis();
  millis_next_onoff = millis();
  millis_current    = millis();
  
}