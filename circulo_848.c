#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  double raio = 0;
  double pi = 3.1416;

  scanf("%lf", &raio);
  //area da superficie esferica: 4 * π * R²;
  //volume de uma esfera : (4πR³)/3
  double area = 4 * pi * (raio * raio);
  double vol = (4 * pi * (raio * raio * raio))/3;

  printf("%.2lf\n", area);
  printf("%.2lf\n", vol);

  return 0;
}
