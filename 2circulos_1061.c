#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
  float raio1 = 0;
  float raio2 = 0;
  double pi = 3.14;

  scanf("%f", &raio1);
  scanf("%f", &raio2);

  double area1 = pi * (raio1 * raio1);
  double area2 = pi * (raio2 * raio2);

  if(area1 == area2){
    printf("Iguais\n");
  }
  if(area1 > area2){
    printf("Primeiro circulo\n");
  }
  if(area1 < area2){
    printf("Segundo circulo\n");
  }

  return 0;
}
