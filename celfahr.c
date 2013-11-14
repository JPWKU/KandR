#include <stdio.h>


main()
{
  /*given a range of celsius and a step,
    give the equivalent fahr and print
    in table format */

  float fahr,celsius;
  int lower,upper,step;

  lower = 20;
  upper = 200;
  step = 10;

  celsius = lower;

  printf("Celsius    Fahrenheit\n");
  while(celsius <= upper)
    {
      fahr = (9.0/5.0)*celsius + 32.0;
      printf("%3.0f %11.1f\n",celsius,fahr);
      celsius = celsius + step;
    }
}
      
