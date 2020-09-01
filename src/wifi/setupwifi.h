void setupwifi() {
  printdebug("Setup wifi");
  WiFi.softAP(ssid, password);
  delay(100);
  WiFi.softAPConfig(local_ip, gateway, subnet);
  delay(100);

  server.on("/",        handle_OnConnect);
  server.on("/butdrl",  handle_drl);
  server.on("/butdim",  handle_dim);
  server.on("/butstop", handle_stop);
  server.on("/butleft", handle_left);
  server.on("/butrigh", handle_righ);
  server.on("/buttest", handle_test);

  server.onNotFound    (handle_NotFound);

  server.begin();
  printdebug("Setup HTTP server started");
}
