void pixelstop() {
  if (stop_status !=stop_statusold) {
    stop_statusold = stop_status;
    // only when changed
    if(stop_status) {
      setcolor(stopachter, CRGB::Red);
      setcolor(mainacht_l, CRGB::Red);
      setcolor(mainacht_r, CRGB::Red);
      printdebug("stop status = aan");
    } 
    else {
      setcolor(stopachter, CRGB::Black);
      if(not(dim_status)) {
        // Enkel als dimlicht uit staat
        setcolor(mainacht_l, CRGB::Black);
        setcolor(mainacht_r, CRGB::Black);
    }
      printdebug("stop status = af");
    }
  }
}