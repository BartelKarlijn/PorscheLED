void setupleds() {
  drl_voor_l[2] = drl_voor_num;
  drl_voor_r[2] = drl_voor_num;
  mainrond_l[2] = mainrond_num;
  mainrond_r[2] = mainrond_num;
  drl_acht_l[2] = drl_acht_num;
  drl_acht_r[2] = drl_acht_num;
  mainacht_l[2] = mainacht_num;
  mainacht_r[2] = mainacht_num;
  stopachter[2] = stopacht_num;

  *pointer1v = 0;
  *pointer1t = *pointer1v + *pointer1n - 1;

  *pointer2v = *pointer1t + 1;
  *pointer2t = *pointer2v + *pointer2n - 1;

  *pointer3v = *pointer2t + 1;
  *pointer3t = *pointer3v + *pointer3n - 1;

  *pointer4v = *pointer3t + 1;
  *pointer4t = *pointer4v + *pointer4n - 1;

  *pointer5v = *pointer4t + 1;
  *pointer5t = *pointer5v + *pointer5n - 1;

  *pointer6v = *pointer5t + 1;
  *pointer6t = *pointer6v + *pointer6n - 1;

  *pointer7v = *pointer6t + 1;
  *pointer7t = *pointer7v + *pointer7n - 1;

  *pointer8v = *pointer7t + 1;
  *pointer8t = *pointer8v + *pointer8n - 1;

  *pointer9v = *pointer8t + 1;
  *pointer9t = *pointer9v + *pointer9n - 1;

  printdebug( "drl_voor van l" + (String) drl_voor_l[0] + " tot " + (String) drl_voor_l[0] );
  printdebug( "drl_voor van r" + (String) drl_voor_r[0] + " tot " + (String) drl_voor_r[0] );
  printdebug( "drl_acht van l" + (String) drl_voor_l[0] + " tot " + (String) drl_acht_l[0] );
  printdebug( "drl_acht van r" + (String) drl_acht_r[0] + " tot " + (String) drl_acht_r[0] );
  printdebug( "mainrond van l" + (String) mainrond_l[0] + " tot " + (String) mainrond_l[0] );
  printdebug( "mainrond van r" + (String) mainrond_r[0] + " tot " + (String) mainrond_r[0] );
  printdebug( "mainacht van l" + (String) mainacht_l[0] + " tot " + (String) mainacht_l[0] );
  printdebug( "mainacht van r" + (String) mainacht_r[0] + " tot " + (String) mainacht_r[0] );
  printdebug( "stopachter van" + (String) stopachter[0] + " tot " + (String) stopachter[0] );
}