String SendHTML(){
  String ptr = "<!DOCTYPE html> <html>\n";
  ptr +="<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=no\">\n";
  // Title
  ptr +="<title>Porsche LED</title>\n";
  // CSS to style the on/off buttons 
  ptr +="<style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: left;}\n";
  ptr +="body{margin-top: 50px;}\n";
  ptr +="h1 {color: #444444;margin: 50px auto 30px; text-align: center;}\n";
  ptr +="h3 {color: #444444;margin-bottom: 50px; text-align: center;}\n";
  ptr +=".button {display: inline;width: 60px;background-color: #3498db;border: none;color: white;padding: 10px 10px;text-decoration: none;font-size: 25px;margin: 10px auto 25px;cursor: pointer;border-radius: 4px; margin-bottom: 50px;}\n";
  ptr +=".button-on {background-color: #3498db;}\n";
  ptr +=".button-on:active {background-color: #2980b9;}\n";
  ptr +=".button-of {background-color: #34495e;}\n";
  ptr +=".button-of:active {background-color: #2c3e50;}\n";
  ptr +="p {font-size: 20px;color: #888;margin-bottom: 30px;}\n";
  ptr +="</style>\n";
  ptr +="</head>\n";
// bodytitel
  ptr += "<body>\n";
  ptr +="<h1>Porsche LED control</h1>\n";
  ptr +="<h3>Using Access Point(AP) Mode on ESP32</h3>\n";

//knoppen
  ptr +=htmlbutton(neon_status, neon_oms, neon_handle);
  ptr +=htmlbutton(drl_status,  drl_oms,  drl_handle);
  ptr +=htmlbutton(dim_status,  dim_oms,  dim_handle);
  ptr +=htmlbutton(stop_status, stop_oms, stop_handle);
  ptr +=htmlbutton(left_status, left_oms, left_handle);
  ptr +=htmlbutton(righ_status, righ_oms, righ_handle);
  ptr +=htmlbutton(test_status, test_oms, test_handle);

  ptr +="</body>\n";
  ptr +="</html>\n";
  //printdebug(ptr);
  return ptr;
}
