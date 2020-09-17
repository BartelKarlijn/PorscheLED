void pixeldrl() {
  if (drl_status !=drl_statusold) {
    drl_statusold = drl_status;
    // only when changed
    if(drl_status) {
      setcolor(drl_voor_l, CRGB::White, brightness_drl);
      setcolor(drl_voor_r, CRGB::White, brightness_drl);
      setcolor(drl_acht_l, CRGB::Red,   brightness_drl);
      setcolor(drl_acht_r, CRGB::Red,   brightness_drl);
      printdebug("drl status = aan");
    } 
    else {
      setcolor(drl_voor_l, CRGB::Black, brightness_drl);
      setcolor(drl_voor_r, CRGB::Black, brightness_drl);
      setcolor(drl_acht_l, CRGB::Black, brightness_drl);
      setcolor(drl_acht_r, CRGB::Black, brightness_drl);
      printdebug("drl status = af");
    }
  }
}