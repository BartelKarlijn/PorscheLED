// Arduino library includes
#include <Arduino.h>
#include <FastLED.h>
#include <WiFi.h>
#include <WebServer.h>

//Configuratie
#include <configuration.h>
#include <main/globalvariables.h>

// define
#include <main/arraydefine.h>

// eigen subprogrammas
#include <main/printdebug.h>
#include <wifi/wifidefinitions.h>
#include <wifi/htmlbutton.h>
#include <wifi/sendhtml.h>
#include <wifi/handle.h>
#include <wifi/setupwifi.h>
#include <pixels/setcolor.h>
#include <pixels/pixeldrl.h>
#include <pixels/pixeldim.h>
#include <pixels/pixelstop.h>
#include <pixels/pixelpinkersweep.h>
#include <pixels/pixeltest.h>
#include <pixels/showpixels.h>
#include <main/setuppins.h>
#include <main/setupleds.h>

