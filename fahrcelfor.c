#include <stdio.h>

main()
{
  /*fahr to celsius converter 
    using a for loop */

  int fahr;


  for(fahr=300;fahr>=0;fahr = fahr-20)
    {
      printf("%3.0d %6.1f\n",fahr, (5.0/9.0)*(fahr - 32.0));
    }
}
