#include <stdio.h>

float fahrToCelsius(float fahr);

int main(void)
{
  float fahr, celsius;
  float lower = 0;
  float upper = 300;
  float step = 20;

  fahr = lower;
  while (fahr <= upper) {
    fahrToCelsius(fahr);
    printf("%3.0f %6.1f\n", fahr, fahrToCelsius(fahr));
    fahr = fahr + step;

   }
  return 0;
}

float fahrToCelsius(float fahr)
{
  float celsius;
  
  celsius = (5.0 / 9.0) * (fahr - 32.0);
  return celsius;
}
