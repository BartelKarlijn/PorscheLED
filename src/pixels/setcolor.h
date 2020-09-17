void setcolor(byte strip[3], CRGB myColor, byte brightness) {
// Zet kleur van een stukje led strip  
  FastLED.setBrightness(brightness);
  for(int i=strip[0]; i <strip[1]+1; i++) {
    //pixels.setPixelColor(i, color[0], color[1], color[2]);  
    leds[i] = myColor;
  }
}