#include <stdio.h>

main()
{
  /*given a range of fahr temps and a step,
    find the equivlent celcius and
    print out a table */

  int fahr,celsius;
  int lower,upper,step;

  lower = 20;
  upper = 350;
  step = 10;
  fahr = lower; 

  while(fahr <= upper)
    {
      celsius = 5*(fahr-32)/9;
      printf("%3d %6d\n",fahr,celsius);
      fahr = fahr + step;
    }
}
