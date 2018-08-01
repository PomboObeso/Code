#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
  double atraso = 0;

  scanf("%lf", &atraso);

  double taxa = atraso * 0.75;

  printf("%.2lf\n", taxa);


  return 0;
}
