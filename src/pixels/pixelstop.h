void pixelstop() {
  if (stop_status !=stop_statusold) {
    stop_statusold = stop_status;
    // only when changed
    if(stop_status) {
      setcolor(stopachter, colorred, CRGB::Red);
      printdebug("stop status = aan");
    } 
    else {
      setcolor(stopachter, coloroff, CRGB::Red);
      printdebug("stop status = af");
    }
  }
}