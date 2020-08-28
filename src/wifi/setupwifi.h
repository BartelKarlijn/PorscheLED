void setupwifi() {
  printdebug("Setup wifi");
  WiFi.softAP(ssid, password);
  delay(100);
  WiFi.softAPConfig(local_ip, gateway, subnet);
  delay(100);

  server.on("/",        handle_OnConnect);
  server.on("/but1on",  handle_but1on);
  server.on("/but1off", handle_but1off);
  server.on("/but2on",  handle_but2on);
  server.on("/but2off", handle_but2off);
  server.onNotFound    (handle_NotFound);

  server.begin();
  printdebug("Setup HTTP server started");
}
