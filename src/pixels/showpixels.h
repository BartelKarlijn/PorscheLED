void showpixels() {
    if (statuschanged) {
      FastLED.show();
      statuschanged = false;
    }
}