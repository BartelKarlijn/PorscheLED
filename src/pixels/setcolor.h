void setcolor(int strip[3], int color[3]) {
// Zet kleur van een stukje led strip    
  for(int i=strip[0]; i <strip[1]+1; i++) {
    pixels.setPixelColor(i, color[0], color[1], color[2]);  
  }
}