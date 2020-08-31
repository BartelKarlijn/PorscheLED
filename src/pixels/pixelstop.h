void pixelstop() {
  if (stop_status !=stop_statusold) {
    stop_statusold = stop_status;
    // only when changed
    if(stop_status) {
      setcolor(stopachter, colorred);
      printdebug("stop status = aan");
    } 
    else {
      setcolor(stopachter, coloroff);
      printdebug("stop status = af");
    }
  }
}