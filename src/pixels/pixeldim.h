void pixeldim() {
  if (dim_status !=dim_statusold) {
    dim_statusold = dim_status;
    // only when changed
    if(dim_status) {
      setcolor(mainrond_l, CRGB::White, brightness_main);
      setcolor(mainrond_r, CRGB::White, brightness_main);
      setcolor(mainacht_l, CRGB::Red  , brightness_main);
      setcolor(mainacht_r, CRGB::Red  , brightness_main);
      printdebug("dim status = aan");
    } 
    else {
      setcolor(mainrond_l, CRGB::Black, brightness_main);
      setcolor(mainrond_r, CRGB::Black, brightness_main);
      if (not(stop_status)) {
        // enkel als geen stoplicht
        setcolor(mainacht_l, CRGB::Black, brightness_main);
        setcolor(mainacht_r, CRGB::Black, brightness_main);
      }
      printdebug("dim status = af");
    }
  }
}