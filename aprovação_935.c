#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main()
{
  double n1,n2,n3;

  printf("Informe a primeira nota:\n");
  scanf("%lf", &n1);
  printf("Informe a segunda nota:\n");
  scanf("%lf", &n2);
  printf("Informe a terceira nota:\n");
  scanf("%lf", &n3);

  double media = (n1 + n2 + n3)/3;

  if(media >= 7){
    printf("Aprovado com media %.2lf\n",media);
  }
  if(media >= 5 && media < 7){
    printf("Recuperacao com media %.15lf\n", media);
  }
  if(media < 5){
    printf("Reprovado com media %.2lf\n", media);
  }

  return 0;
}
