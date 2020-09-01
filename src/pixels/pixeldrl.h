void pixeldrl() {
  if (drl_status !=drl_statusold) {
    drl_statusold = drl_status;
    // only when changed
    if(drl_status) {
      setcolor(drl_voor_l, CRGB::White);
      setcolor(drl_voor_r, CRGB::White);
      setcolor(drl_acht_l, CRGB::Red);
      setcolor(drl_acht_l, CRGB::Red);
      printdebug("drl status = aan");
    } 
    else {
      setcolor(drl_voor_l, CRGB::Black);
      setcolor(drl_voor_r, CRGB::Black);
      setcolor(drl_acht_l, CRGB::Black);
      setcolor(drl_acht_l, CRGB::Black);
      printdebug("drl status = af");
    }
  }
}