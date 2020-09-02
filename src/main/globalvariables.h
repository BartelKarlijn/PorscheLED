bool neonOnOff ;
bool statuschanged = false;

// voor webpagina
bool drl_status = false;
bool drl_statusold = false;
#define drl_oms  "Dagrijlicht"
#define drl_handle "butdrl"

bool dim_status = false;
bool dim_statusold = false;
#define dim_oms  "Dimlicht"
#define dim_handle "butdim"

bool stop_status = false;
bool stop_statusold = false;
#define stop_oms  "Stop licht"
#define stop_handle "butstop"

bool left_status = false;
bool left_statusold = false;
#define left_oms  "RichtingAW L"
#define left_handle "butleft"

bool righ_status = false;
bool righ_statusold = false;
#define righ_oms  "RichtingAW R"
#define righ_handle "butrigh"

bool test_status = false;
bool test_statusold = false;
#define test_oms  "TestStrip"
#define test_handle "buttest"

unsigned long millis_next_led;
unsigned long millis_next_onoff;
unsigned long millis_current;
bool pinkerstatus = false;    // pinkers staan af
byte nextled;
byte nextled_left;
byte nextled_righ;
