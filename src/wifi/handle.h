
void handle_OnConnect() {
  printdebug("handle_OnConnect");
  server.send(200, "text/html", SendHTML()); 
}
void handle_drl() {
  printdebug("handle_drl");
  drl_status = not(drl_status);
  server.send(200, "text/html", SendHTML()); 
}
void handle_dim() {
  printdebug("handle_dim");
  dim_status = not(dim_status);
  server.send(200, "text/html", SendHTML()); 
}
void handle_stop() {
  printdebug("handle_stop");
  stop_status = not(stop_status);
  server.send(200, "text/html", SendHTML()); 
}
void handle_left() {
  printdebug("handle_left");
  left_status = not(left_status);
  server.send(200, "text/html", SendHTML()); 
}
void handle_righ() {
  printdebug("handle_righ");
  righ_status = not(righ_status);
  server.send(200, "text/html", SendHTML()); 
}

void handle_NotFound(){
  printdebug("handle_NotFound");
  server.send(404, "text/plain", "Not found");
}

