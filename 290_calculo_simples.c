#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  int codigo; double qtd = 0; double valor = 0;

  scanf("%d %lf %lf", &codigo, &qtd, &valor);

  double total = qtd * valor;

  int codigo2; double qtd2 = 0; double valor2 = 0;

  scanf("%d %lf %lf", &codigo2, &qtd2, &valor2);

  double total2 = qtd2 * valor2;

  double total_final = total + total2;

  printf("VALOR A PAGAR: R$ %.2lf\n", total_final);

  return 0;
}
