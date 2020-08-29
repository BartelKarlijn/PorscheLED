// Configuration file
#define PINNEON      19

// hoe lang wachten per kleur
#define DELAYVAL 50

// lichtsterkte
int maxval = 90 ;

// Debug
#define debugmode  true
#define serialspeed 115200

// PinDefinitions
#define PINLED        5

// aantalpixels
#define drl_voor_num    4
#define drl_acht_num    4
#define mainrond_num    7
#define mainacht_num   10
#define stopacht_num    3

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
int *pointer1v = &drl_voor_l[0];
int *pointer1t = &drl_voor_l[1];
int *pointer1n = &drl_voor_l[2];

int *pointer2v = &drl_voor_r[0];
int *pointer2t = &drl_voor_r[1];
int *pointer2n = &drl_voor_r[2];

int *pointer3v = &mainrond_l[0];
int *pointer3t = &mainrond_l[1];
int *pointer3n = &mainrond_l[2];

int *pointer4v = &mainrond_r[0];
int *pointer4t = &mainrond_r[1];
int *pointer4n = &mainrond_r[2];

int *pointer5v = &drl_acht_l[0];
int *pointer5t = &drl_acht_l[1];
int *pointer5n = &drl_acht_l[2];

int *pointer6v = &drl_acht_r[0];
int *pointer6t = &drl_acht_r[1];
int *pointer6n = &drl_acht_r[2];

int *pointer7v = &mainacht_l[0];
int *pointer7t = &mainacht_l[1];
int *pointer7n = &mainacht_l[2];

int *pointer8v = &mainacht_r[0];
int *pointer8t = &mainacht_r[1];
int *pointer8n = &mainacht_r[2];

int *pointer9v = &stopachter[0];
int *pointer9t = &stopachter[1];
int *pointer9n = &stopachter[2];
// berekening, blijf hier af
#define NUMPIXELS      ( 2 * ( drl_voor_num + drl_acht_num + mainrond_num + mainacht_num ) + stopacht_num )
