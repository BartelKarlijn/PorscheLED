void pixeldim() {
  if (dim_status !=dim_statusold) {
    dim_statusold = dim_status;
    // only when changed
    if(dim_status) {
      setcolor(mainrond_l, colorwit, CRGB::White);
      setcolor(mainrond_r, colorwit, CRGB::White);
      setcolor(mainacht_l, colorred, CRGB::Red);
      setcolor(mainacht_r, colorred, CRGB::Red);
      printdebug("dim status = aan");
    } 
    else {
      setcolor(mainrond_l, coloroff, CRGB::Black);
      setcolor(mainrond_r, coloroff, CRGB::Black);
      setcolor(mainacht_l, coloroff, CRGB::Black);
      setcolor(mainacht_r, coloroff, CRGB::Black);
      printdebug("dim status = af");
    }
  }
}