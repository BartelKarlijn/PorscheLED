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

int drl_voor_l[3] ;           // 0=van, 1=tot, 2=num
int drl_voor_r[3] ;           // 0=van, 1=tot, 2=num
int mainrond_l[3] ;           // 0=van, 1=tot, 2=num
int mainrond_r[3] ;           // 0=van, 1=tot, 2=num
int drl_acht_l[3] ;           // 0=van, 1=tot, 2=num
int drl_acht_r[3] ;           // 0=van, 1=tot, 2=num
int mainacht_l[3] ;           // 0=van, 1=tot, 2=num
int mainacht_r[3] ;           // 0=van, 1=tot, 2=num
int stopachter[3] ;           // 0=van, 1=tot, 2=num

// pointers om volgorde aan te geven.  pointer1 = 1e stuk vd led strip
// helaas weet ik niet hoe je naar array pointers kan wijzen
int *pointer1v = &mainacht_l[0];
int *pointer1t = &mainacht_l[1];
int *pointer1n = &mainacht_l[2];

int *pointer2v = &mainrond_r[0];
int *pointer2t = &mainrond_r[1];
int *pointer2n = &mainrond_r[2];

int *pointer3v = &drl_voor_l[0];
int *pointer3t = &drl_voor_l[1];
int *pointer3n = &drl_voor_l[2];

int *pointer4v = &drl_voor_r[0];
int *pointer4t = &drl_voor_r[1];
int *pointer4n = &drl_voor_r[2];

int *pointer5v = &mainacht_r[0];
int *pointer5t = &mainacht_r[1];
int *pointer5n = &mainacht_r[2];

int *pointer6v = &drl_acht_r[0];
int *pointer6t = &drl_acht_r[1];
int *pointer6n = &drl_acht_r[2];

int *pointer7v = &mainrond_l[0];
int *pointer7t = &mainrond_l[1];
int *pointer7n = &mainrond_l[2];

int *pointer8v = &drl_acht_l[0];
int *pointer8t = &drl_acht_l[1];
int *pointer8n = &drl_acht_l[2];

int *pointer9v = &stopachter[0];
int *pointer9t = &stopachter[1];
int *pointer9n = &stopachter[2];

