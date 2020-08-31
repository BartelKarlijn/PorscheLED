String SendHTML(){
  String ptr = "<!DOCTYPE html> <html>\n";
  ptr +="<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=no\">\n";
  // Title
  ptr +="<title>Porsche LED</title>\n";
  // CSS to style the on/off buttons 
  ptr +="<style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}\n";
  ptr +="body{margin-top: 50px;} h1 {color: #444444;margin: 50px auto 30px;} h3 {color: #444444;margin-bottom: 50px;}\n";
  ptr +=".button {display: block;width: 80px;background-color: #3498db;border: none;color: white;padding: 6px 30px;text-decoration: none;font-size: 18px;margin: 0px auto 35px;cursor: pointer;border-radius: 4px;}\n";
  ptr +=".button-on {background-color: #3498db;}\n";
  ptr +=".button-on:active {background-color: #2980b9;}\n";
  ptr +=".button-of {background-color: #34495e;}\n";
  ptr +=".button-of:active {background-color: #2c3e50;}\n";
  ptr +="p {font-size: 14px;color: #888;margin-bottom: 10px;}\n";
  ptr +="</style>\n";
  ptr +="</head>\n";
// bodytitel
  ptr += "<body>\n";
  ptr +="<h1>Porsche LED control</h1>\n";
  ptr +="<h3>Using Access Point(AP) Mode on ESP32</h3>\n";

//knoppen
  ptr +=htmlbutton(drl_status,  drl_oms,  drl_handle);
  ptr +=htmlbutton(dim_status,  dim_oms,  dim_handle);
  ptr +=htmlbutton(stop_status, stop_oms, stop_handle);
  ptr +=htmlbutton(left_status, left_oms, left_handle);
  ptr +=htmlbutton(righ_status, righ_oms, righ_handle);

  ptr +="</body>\n";
  ptr +="</html>\n";
  //printdebug(ptr);
  return ptr;
}