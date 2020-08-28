String htmlbutton( bool status, String omschrijving, String handlecode) {
  String ptr = "<p>";
  ptr += omschrijving ;
  ptr += ": " ;
  ptr += status;
  if (status) {
    ptr += "</p><a class=\"button button-of\" href=\"/" ; 
    ptr += handlecode;
    ptr += "\">OF</a>\n" ;
    }
  else {
    ptr += "</p><a class=\"button button-on\" href=\"/" ; 
    ptr += handlecode;
    ptr += "\">ON</a>\n" ;
  }
  return ptr;
}
