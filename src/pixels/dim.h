void dim() {
  if (dim_status !=dim_statusold) {
    dim_statusold = dim_status;
    // only when changed
    if(dim_status) {
      for(int i=dim_v_l_van; i < rond_v_l_tot+1; i++) {
        pixels.setPixelColor(i, maxval/3, maxval/3, maxval/3);  
      }
      printdebug("dim status = aan");
    } 
    else {
      for(int i=dim_v_l_van; i <dim_v_l_tot+1; i++) {
        pixels.setPixelColor(i, 0, 0, 0);  
      }
      printdebug("dim status = af");
    }
  }
}