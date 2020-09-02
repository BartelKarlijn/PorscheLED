String htmlbutton( bool status, String omschrijving, String handlecode) {
  String ptr = "<p>";
  ptr += omschrijving ;
  if (status) {
    ptr += "</p><a class=\"button button-of\" href=\"/" ; 
    ptr += handlecode;
    ptr += "\">ON</a>\n" ;
    }
  else {
    ptr += "</p><a class=\"button button-on\" href=\"/" ; 
    ptr += handlecode;
    ptr += "\">OFF</a>\n" ;
  }
  return ptr;
}
