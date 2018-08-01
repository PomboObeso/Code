#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  int av = 0;
  int car = 0;
  int pass = 0;

  scanf("%d", &av);
  scanf("%d", &car);
  scanf("%d", &pass);

  int qtd_av = 0;
  int qtd_car = 0;
  int qtd_pass = 0;

  scanf("%d", &qtd_av);
  scanf("%d", &qtd_car);
  scanf("%d", &qtd_pass);

  double total = (av * qtd_av) + (car * qtd_car) + (pass * qtd_pass);

  printf("Valor : R$%.2lf\n", total);


  return 0;
}
