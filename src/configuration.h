// Configuration file

// hoe lang wachten per kleur
#define DELAYVAL 50


// Debug
#define debugmode  true
#define serialspeed 115200

// PinDefinitions
#define PINLED        5
#define PINNEON      19

// aantalpixels
#define drl_voor_num    4
#define drl_acht_num    4
#define mainrond_num    7
#define mainacht_num   10
#define stopacht_num    3

// Vermogen pixelstrip
#define power_max_volt 5
#define power_max_mA 700
#define maxbrightness 60

#define pinkerledmillis 100 // om de x msec een nieuw ledje.  Aftijd is n leds x deze totale pinkertijd

byte drl_voor_l[3] ;           // 0=van, 1=tot, 2=num
byte drl_voor_r[3] ;           // 0=van, 1=tot, 2=num
byte mainrond_l[3] ;           // 0=van, 1=tot, 2=num
byte mainrond_r[3] ;           // 0=van, 1=tot, 2=num
byte drl_acht_l[3] ;           // 0=van, 1=tot, 2=num
byte drl_acht_r[3] ;           // 0=van, 1=tot, 2=num
byte mainacht_l[3] ;           // 0=van, 1=tot, 2=num
byte mainacht_r[3] ;           // 0=van, 1=tot, 2=num
byte stopachter[3] ;           // 0=van, 1=tot, 2=num

// pointers om volgorde aan te geven.  pointer1 = 1e stuk vd led strip
// helaas weet ik niet hoe je naar array pointers kan wijzen
byte *pointer1v = &mainacht_r[0];
byte *pointer1t = &mainacht_r[1];
byte *pointer1n = &mainacht_r[2];

byte *pointer2v = &mainrond_r[0];
byte *pointer2t = &mainrond_r[1];
byte *pointer2n = &mainrond_r[2];

byte *pointer3v = &drl_voor_l[0];
byte *pointer3t = &drl_voor_l[1];
byte *pointer3n = &drl_voor_l[2];

byte *pointer4v = &drl_voor_r[0];
byte *pointer4t = &drl_voor_r[1];
byte *pointer4n = &drl_voor_r[2];

byte *pointer5v = &drl_acht_l[0];
byte *pointer5t = &drl_acht_l[1];
byte *pointer5n = &drl_acht_l[2];

byte *pointer6v = &mainacht_l[0];
byte *pointer6t = &mainacht_l[1];
byte *pointer6n = &mainacht_l[2];

byte *pointer7v = &drl_acht_r[0];
byte *pointer7t = &drl_acht_r[1];
byte *pointer7n = &drl_acht_r[2];

byte *pointer8v = &mainrond_l[0];
byte *pointer8t = &mainrond_l[1];
byte *pointer8n = &mainrond_l[2];

byte *pointer9v = &stopachter[0];
byte *pointer9t = &stopachter[1];
byte *pointer9n = &stopachter[2];

