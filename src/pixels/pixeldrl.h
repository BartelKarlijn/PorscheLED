void pixeldrl() {
  if (drl_status !=drl_statusold) {
    drl_statusold = drl_status;
    // only when changed
    if(drl_status) {
      setcolor(drl_voor_l, CRGB::White, fade_drl);
      setcolor(drl_voor_r, CRGB::White, fade_drl);
      setcolor(drl_acht_l, CRGB::Red,   fade_drl);
      setcolor(drl_acht_r, CRGB::Red,   fade_drl);
      printdebug("drl status = aan");
    } 
    else {
      setcolor(drl_voor_l, CRGB::Black, fade_drl);
      setcolor(drl_voor_r, CRGB::Black, fade_drl);
      setcolor(drl_acht_l, CRGB::Black, fade_drl);
      setcolor(drl_acht_r, CRGB::Black, fade_drl);
      printdebug("drl status = af");
    }
  }
}