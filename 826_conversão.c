#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

double medida(int metros, double cm){

  cm = metros * 100;

  return cm;

}

int main()
{
  int metros = 0;
  double cm = 0;

  printf("Digite um valor em metros:\n");
  scanf("%d", &metros);


  printf("Resultado:%.1lf\n", medida(metros, cm));

  return 0;
}
