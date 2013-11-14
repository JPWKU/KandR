#include <stdio.h>

main()
{
  /*given a range of fahr temps and a step,
    find the equivlent celcius and
    print out a table */

  float fahr,celsius;
  int lower,upper,step;

  lower = 20;
  upper = 350;
  step = 10;
  fahr = lower; 

  while(fahr <= upper)
    {
      celsius = (5.0/9.0)*(fahr-32.0);
      printf("%3.0f %6.1f\n",fahr,celsius);
      fahr = fahr + step;
    }
}
