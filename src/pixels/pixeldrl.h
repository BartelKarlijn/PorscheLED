void pixeldrl() {
  if (drl_status !=drl_statusold) {
    drl_statusold = drl_status;
    // only when changed
    if(drl_status) {
      setcolor(drl_voor_l, colorwit);
      setcolor(drl_voor_r, colorwit);
      setcolor(drl_acht_l, colorred);
      setcolor(drl_acht_l, colorred);
      printdebug("drl status = aan");
    } 
    else {
      setcolor(drl_voor_l, coloroff);
      setcolor(drl_voor_r, coloroff);
      setcolor(drl_acht_l, coloroff);
      setcolor(drl_acht_l, coloroff);
      printdebug("drl status = af");
    }
  }
}