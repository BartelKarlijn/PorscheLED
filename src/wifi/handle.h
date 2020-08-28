
void handle_OnConnect() {
  printdebug("handle_OnConnect");
  server.send(200, "text/html", SendHTML(BUT1status,BUT2status)); 
}
void handle_but1on() {
  BUT1status = HIGH;
  printdebug("handle_but1on");
  server.send(200, "text/html", SendHTML(true,BUT1status)); 
}
void handle_but1off() {
  BUT1status = LOW;
  printdebug("handle_but1off");
  server.send(200, "text/html", SendHTML(true,BUT1status)); 
}
void handle_but2on() {
  BUT1status = HIGH;
  printdebug("handle_but2on");
  server.send(200, "text/html", SendHTML(true,BUT2status)); 
}
void handle_but2off() {
  BUT1status = LOW;
  printdebug("handle_but2on");
  server.send(200, "text/html", SendHTML(true,BUT2status)); 
}
void handle_NotFound(){
  printdebug("handle_NotFound");
  server.send(404, "text/plain", "Not found");
}
