void setcolor(byte strip[3], CRGB myColor, byte brightness) {
// Zet kleur van een stukje led strip  
  for(int i=strip[0]; i <strip[1]+1; i++) {
    leds[i] = myColor;
    leds[i].fadeToBlackBy(brightness); 
  }
}