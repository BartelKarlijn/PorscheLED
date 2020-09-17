void pixelstop() {
  if (stop_status !=stop_statusold) {
    stop_statusold = stop_status;
    // only when changed
    if(stop_status) {
      setcolor(stopachter, CRGB::Red, brightness_stop);
      setcolor(mainacht_l, CRGB::Red, brightness_stop);
      setcolor(mainacht_r, CRGB::Red, brightness_stop);
      printdebug("stop status = aan");
    } 
    else {
      setcolor(stopachter, CRGB::Black, brightness_stop);
      if(not(dim_status)) {
        // Enkel als dimlicht uit staat
        setcolor(mainacht_l, CRGB::Black, brightness_stop);
        setcolor(mainacht_r, CRGB::Black, brightness_stop);
    }
      printdebug("stop status = af");
    }
  }
}