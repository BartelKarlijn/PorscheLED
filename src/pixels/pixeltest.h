void pixeltest() {
  if (test_status !=test_statusold) {
    test_statusold = test_status;
    // only when changed
    byte all_leds[3] = {0, NUMPIXELS, NUMPIXELS};     // 0=van, 1=tot, 2=num
    if(test_status) {
      digitalWrite(PINNEON, HIGH);
      setcolor(all_leds, CRGB::White, brightness_main);
//      printdebug("test status = aan");
    } 
    else {
      digitalWrite(PINNEON, LOW);
      setcolor(all_leds, CRGB::Black, brightness_main);
//      printdebug("test status = af");
    }
  }
}