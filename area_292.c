#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{

  double a,b,c;
  double pi = 3.14159;

  scanf("%lf %lf %lf", &a,&b,&c);

  double areaT = (a * c)/2;
  double areat = ((a + b) * c)/2.0;
  double areaC = pi * (c * c);
  double areaQ = b * b;
  double areaR = a * b;

  printf("TRIANGULO: %.3lf\n",areaT);
  printf("CIRCULO: %.3lf\n", areaC);
  printf("TRAPEZIO: %.3lf\n", areat);
  printf("QUADRADO: %.3lf\n", areaQ);
  printf("RETANGULO: %.3lf\n", areaR);


  return 0;
}
