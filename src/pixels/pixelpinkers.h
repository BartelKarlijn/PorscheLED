void pixelpinkers() {
  if (left_status or righ_status) {
    // pinkers moet altijd doorlopen worden als er eentje aan staat
    millis_current = millis();
    if ( millis_current > millis_next_onoff) {
      // we beginnen een nieuwe seqeuntie
      pinkerstatus = not(pinkerstatus);
      statuschanged = true;
      millis_next_onoff = millis_current + mainacht_num * pinkerledmillis;

      if (pinkerstatus) {
        // pinkers nu aan
        if ( left_status ) { setcolor(mainacht_l, colorang, CRGB::OrangeRed); }  //wel eerst checken of pinker aan die kant aan staat
        if ( righ_status ) { setcolor(mainacht_r, colorang, CRGB::OrangeRed); }  // anders laten we gewoon dim staan
      }
      else {
        // pinkers nu af
        if ( left_status ) { setcolor(mainacht_l, coloroff, CRGB::Black); }
        if ( righ_status ) { setcolor(mainacht_r, coloroff, CRGB::Black); }
      }
    }
  }
  if ( (left_status != left_statusold) or (righ_status != righ_statusold) ) {
    // Als er wijziging in pinkers is: terug naar gewone dim
    left_statusold = left_status;
    righ_statusold = righ_status;
    dim_statusold = not(dim_status);   // Zorg dat we weer gewone dimlichten hebben
  }
}