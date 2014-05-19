#include <wiringPi.h>
#include <pcf8591.h>

main ()
{
  wiringPiSetup () ;
  pcf8591Setup (200, 0x48) ;

  for (;;)
    printf ("%4d %4d %4d %4d\n", analogRead (200), analogRead (201), analogRead (202), analogRead (203)) ;
}
