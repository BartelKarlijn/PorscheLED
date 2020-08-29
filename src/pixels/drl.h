void drl() {
  if (drl_status !=drl_statusold) {
    drl_statusold = drl_status;
    // only when changed
    if(drl_status) {
      for(int i=drl_voor_l[0]; i <drl_voor_l[1]+1; i++) {
        pixels.setPixelColor(i, maxval/3, maxval/3, maxval/3);  
      }
      printdebug("drl status = aan");
    } 
    else {
      for(int i=drl_voor_l[0]; i <drl_voor_l[1]+1; i++) {
        pixels.setPixelColor(i, 0, 0, 0);  
      }
      printdebug("drl status = af");
    }
  }
}