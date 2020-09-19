void pixelsweep(){
  pinkerstuk_l[0] = mainacht_l[0] ;
  pinkerstuk_l[1] = mainacht_l[0] + nextled ;
  pinkerstuk_l[2] = mainacht_l[2] ;
  pinkerstuk_r[0] = mainacht_r[1] - nextled ;
  pinkerstuk_r[1] = mainacht_r[1] ;
  pinkerstuk_r[2] = mainacht_r[2] ;
  nextled = nextled + 1;

  //pinkers nu aan
  if ( left_status ) { 
    //wel eerst checken of pinker aan die kant aan staat, anders laten we gewoon dim staan
    // alle achterlichten uit zetten om vreemde overgangen te vermijden
    setcolor(mainacht_l,   CRGB::Black, brightness_main);
    setcolor(pinkerstuk_l, CRGB::Orange, brightness_main);
    setcolor(pinkvoor_l, CRGB::OrangeRed, brightness_main);
  }
  if ( righ_status ) { 
    //wel eerst checken of pinker aan die kant aan staat, anders laten we gewoon dim staan
    setcolor(mainacht_r,   CRGB::Black, brightness_main);
    setcolor(pinkerstuk_r, CRGB::Orange, brightness_main); 
    setcolor(pinkvoor_r, CRGB::OrangeRed, brightness_main);
  }
}
