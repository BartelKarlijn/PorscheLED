void pixeldim() {
  if (dim_status !=dim_statusold) {
    dim_statusold = dim_status;
    // only when changed
    if(dim_status) {
      setcolor(mainrond_l, CRGB::White);
      setcolor(mainrond_r, CRGB::White);
      setcolor(mainacht_l, CRGB::Red);
      setcolor(mainacht_r, CRGB::Red);
      printdebug("dim status = aan");
    } 
    else {
      setcolor(mainrond_l, CRGB::Black);
      setcolor(mainrond_r, CRGB::Black);
      setcolor(mainacht_l, CRGB::Black);
      setcolor(mainacht_r, CRGB::Black);
      printdebug("dim status = af");
    }
  }
}