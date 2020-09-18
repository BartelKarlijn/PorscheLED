void pixelneon() {
  if (neon_status !=neon_statusold) {
    neon_statusold = neon_status;
    // only when changed
    if(neon_status) {
      digitalWrite(PINNEON, HIGH);
      printdebug("neon status = aan");
    } 
    else {
      digitalWrite(PINNEON, LOW);
      printdebug("neon status = af");
    }
  }
}