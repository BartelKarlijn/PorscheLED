void pixelprocessdim() {
  // Overlopen mogelijkheden: later kan Pinker deze overschrijven
  if ( (dim_status !=dim_statusold) or (stop_status != stop_statusold) or (left_status != left_statusold) or (righ_status != righ_statusold) ) {
    // old waarden correct zetten
    dim_statusold  = dim_status;
    stop_statusold = stop_status;
    left_statusold = left_status;
    righ_statusold = righ_status;
    statuschanged = true; 
    // Bij wijziging, overlopen we de mogelijheden:
    // 0. dim uit stop uit  => dim voor uit,  dim achter uit,  stop uit
    // 1. dim aan stop uit  => dim voor aan,  dim achter aan,  stop uit
    // 2. dim uit stop aan  => dim voor uit,  dim achter fel,  stop fel
    // 3. dim aan stop aan  => dim voor aan,  dim achter fel,  stop fel
    if (dim_status and stop_status) {
      // case 3
      setcolor(mainrond_l, CRGB::White, fade_main);
      setcolor(mainrond_r, CRGB::White, fade_main);
      setcolor(mainacht_l, CRGB::Red  , fade_stop);
      setcolor(mainacht_r, CRGB::Red  , fade_stop);
      setcolor(stopachter, CRGB::Red  , fade_stop);
    }
    else if (dim_status) {
      // case 1
      setcolor(mainrond_l, CRGB::White, fade_main);
      setcolor(mainrond_r, CRGB::White, fade_main);
      setcolor(mainacht_l, CRGB::Red  , fade_main);
      setcolor(mainacht_r, CRGB::Red  , fade_main);
      setcolor(stopachter, CRGB::Black, fade_stop);
    }
    else if (stop_status) {
      // case 2
      setcolor(mainrond_l, CRGB::Black, fade_main);
      setcolor(mainrond_r, CRGB::Black, fade_main);
      setcolor(mainacht_l, CRGB::Red  , fade_stop);
      setcolor(mainacht_r, CRGB::Red  , fade_stop);
      setcolor(stopachter, CRGB::Red  , fade_stop);
    }
    else {
      // case 0
      setcolor(mainrond_l, CRGB::Black, fade_main);
      setcolor(mainrond_r, CRGB::Black, fade_main);
      setcolor(mainacht_l, CRGB::Black, fade_main);
      setcolor(mainacht_r, CRGB::Black, fade_main);
      setcolor(stopachter, CRGB::Black, fade_stop);
    }
  }

  if (left_status or righ_status) {
    // pinkers moet altijd doorlopen worden als er eentje aan staat
    millis_current = millis();
    if (millis_current > millis_next_led) {
      // een nieuw ledje aansteken
      statuschanged = true;
      if ( millis_current > millis_next_onoff) {
        // we beginnen een nieuwe seqeuntie
        pinkerstatus = not(pinkerstatus);
        millis_next_onoff = millis_current + (mainacht_num + 1) * pinkerledmillis;
        nextled = 0;    // bij begin van een sequentie is volgend lichtje het eerste
       
        if (pinkerstatus) {
          millis_next_led   = millis_current + pinkerledmillis ;
          pixelsweep(nextled);
          nextled = nextled +1;
        }
        else {
          millis_next_led   = millis_current + mainacht_num * pinkerledmillis ;
          // pinkers nu uit: alles uit, ook voorlichten
          if ( left_status ) { 
            setcolor(pinkvoor_l, CRGB::Black, fade_pink);
            setcolor(mainacht_l, CRGB::Black, fade_main);
            }
          if ( righ_status ) { 
            setcolor(pinkvoor_r, CRGB::Black, fade_pink);
            setcolor(mainacht_r, CRGB::Black, fade_main);
            }
        }        
      }
      else {
        // geen nieuwe sekwentie, gewoon een nieuw ledje er bij
        pixelsweep(nextled);
        nextled = nextled + 1;
      }
      millis_next_led = millis_next_led + pinkerledmillis ;
    }
    else if (statuschanged)
    {
      // als je bv dimlichten hebt aangestoken, maar geen nieuw ledje, dan moet de sekwentie gewoon doorlopen
      pixelsweep(nextled);
    }
    
  }
}