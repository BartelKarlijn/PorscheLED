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
#define drl_voor_num  4
#define drl_acht_num  4
#define rond_num      7
#define achter_num   10
#define stop_num      3
// berekening, blijf hier af
#define drl_voor_l_num drl_voor_num
#define drl_voor_r_num drl_voor_num
#define drl_acht_l_num drl_ach_num
#define drl_acht_r_num drl_ach_num
#define rond_l_num     rond_num
#define rond_r_num     rond_num
#define achter_l_num   achter_num
#define achter_r_num   achter_num
#define NUMPIXELS      ( 2 * ( drl_voor_num + drl_acht_num + rond_num + achter_num ) + stop_num )

#define drl_voor_l_van 0
#define drl_voor_l_tot  (drl_voor_l_van +  drl_voor_l_num)
