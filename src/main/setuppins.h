void setuppins() {
  Serial.begin(serialspeed); 
  printdebug("Setup Begonnen"); 
 
  pixels.begin();
  printdebug("Setup pixels");
  pinMode(PINNEON, OUTPUT);
  printdebug("setup Neonpin");
  neonOnOff = false;
}