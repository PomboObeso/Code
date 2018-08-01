#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

double temperatura(double F , double C){

  C = (5 * (F - 32)/9);

  return C;
}

int main()
{
  double F = 0;
  double C = 0;

  printf("Digite uma temperatura na escala Fahrenheit:\n");
  scanf("%lf", &F);

  double temp = temperatura(F,C);

  printf("Temperatura em Celsius: %.1lf\n", temp);

  return 0;
}
