void setcolor(int strip[3], byte rgb[3], CRGB myColor) {
// Zet kleur van een stukje led strip  
  //CRGB Color = CRGB(rgb[0], rgb[1], rgb[2]);

  for(int i=strip[0]; i <strip[1]+1; i++) {
    //pixels.setPixelColor(i, color[0], color[1], color[2]);  
    leds[i] = myColor;
  }
}