#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  double raio = 0;
  double pi = 3.14159;

  scanf("%lf", &raio);

  raio = raio/100;

  double area =  pi * (raio * raio);

  printf("Area = %.4lf\n", area);

  return 0;
}
