#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

double conversao(double real, double dolar){

  dolar = real * 3.55;

  return dolar;
}

int main()
{
  double real = 0; double dolar = 0;

  scanf("%lf", &real);

  printf("%.2lf\n",conversao(real,dolar));

  return 0;
}
