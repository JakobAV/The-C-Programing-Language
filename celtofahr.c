#include <stdio.h>

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 200;
  step = 10;

  celsius = lower;
  printf("Celsius to Fahrenheit table:\n\n");
  while (celsius <= upper)
  {
    fahr = (celsius / (5.0/9.0) + 32.0);
    printf("%3.0f\t%6.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}