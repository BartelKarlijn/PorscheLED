void pixeldrl() {
  if (drl_status !=drl_statusold) {
    drl_statusold = drl_status;
    // only when changed
    if(drl_status) {
      setcolor(drl_voor_l, colorwit, CRGB::White);
      setcolor(drl_voor_r, colorwit, CRGB::White);
      setcolor(drl_acht_l, colorred, CRGB::Red);
      setcolor(drl_acht_l, colorred, CRGB::Red);
      printdebug("drl status = aan");
    } 
    else {
      setcolor(drl_voor_l, coloroff, CRGB::Black);
      setcolor(drl_voor_r, coloroff, CRGB::Black);
      setcolor(drl_acht_l, coloroff, CRGB::Black);
      setcolor(drl_acht_l, coloroff, CRGB::Black);
      printdebug("drl status = af");
    }
  }
}