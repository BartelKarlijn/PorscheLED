void pixelpinkersweep() {
  byte pinkerstuk_l[3];  // 0=van, 1=tot, 2=num
  byte pinkerstuk_r[3];  // 0=van, 1=tot, 2=num

  if (left_status or righ_status) {
    // pinkers moet altijd doorlopen worden als er eentje aan staat
    millis_current = millis();
    if (millis_current > millis_next_led) {
      // een nieuw ledje aansteken
      if ( millis_current > millis_next_onoff) {
        // we beginnen een nieuwe seqeuntie
        pinkerstatus = not(pinkerstatus);
        statuschanged = true;
        millis_next_onoff = millis_current + mainacht_num * pinkerledmillis;
        if (pinkerstatus) {
          millis_next_led   = millis_current + pinkerledmillis ; }
          pinkerstuk_l = mainacht_l;
          pinkerstuk_l = mainacht_l;
          pinkerstuk_l[0] = mainacht_l[0] + nextled;
          pinkerstuk_r[0] = mainacht_r[1] + nextled - mainacht_num;
          
          //pinkers nu aan
          if ( left_status ) { setcolor(pinkerstuk_l, CRGB::OrangeRed); }  //wel eerst checken of pinker aan die kant aan staat
          if ( righ_status ) { setcolor(pinkerstuk_r, CRGB::OrangeRed); }  // anders laten we gewoon dim staan
        else {
          millis_next_led   = millis_current + mainacht_num * pinkerledmillis ;
          // pinkers nu uit: alles uit
          if ( left_status ) { setcolor(mainacht_l, CRGB::Black); }
          if ( righ_status ) { setcolor(mainacht_r, CRGB::Black); }
        }        
        nextled = 0;    // bij begin van een sequentie is volgend lichtje het eerste
      }
    }

   if ( (left_status != left_statusold) or (righ_status != righ_statusold) ) {
    // Als er wijziging in pinkers is: terug naar gewone dim
    printdebug("left_status=" + (String) left_status + " righ_status=" + (String) righ_status);
    printdebug("dimstatus=" + (String) dim_status);
    left_statusold = left_status;
    righ_statusold = righ_status;
    dim_statusold = not(dim_status);   // Zorg dat we weer gewone dimlichten hebben
  }
}