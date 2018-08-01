#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
//Cinco valores para "a" onde a saída mostre quantos são negativos
  double a = 0;
  int cont = 0;
  printf("Digite um valor:\n");
  scanf("%lf", &a);
  if(a<0){
    cont ++;
  }
  printf("Digite um valor:\n");
  scanf("%lf", &a);
  if(a<0){
    cont ++;
  }
  printf("Digite um valor:\n");
  scanf("%lf", &a);
  if(a<0){
    cont ++;
  }
  printf("Digite um valor:\n");
  scanf("%lf", &a);
  if(a<0){
    cont ++;
  }
  printf("Digite um valor:\n");
  scanf("%lf", &a);
  if(a<0){
    cont ++;
  }
  printf("Foram digitados %d numeros negativos\n", cont);


  return 0;
}
