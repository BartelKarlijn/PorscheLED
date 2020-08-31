void pixeldim() {
  if (dim_status !=dim_statusold) {
    dim_statusold = dim_status;
    // only when changed
    if(dim_status) {
      setcolor(mainrond_l, colorwit);
      setcolor(mainrond_r, colorwit);
      setcolor(mainacht_l, colorred);
      setcolor(mainacht_l, colorred);
      printdebug("dim status = aan");
    } 
    else {
      setcolor(mainrond_l, coloroff);
      setcolor(mainrond_r, coloroff);
      setcolor(mainacht_l, coloroff);
      setcolor(mainacht_l, coloroff);
      printdebug("dim status = af");
    }
  }
}