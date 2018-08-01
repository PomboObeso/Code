#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  int litros = 0;

  scanf("%d", &litros);

  int taxa = 7;

  int preco1 = 0;
  int preco2 = 0;
  int preco3 = 0;

  if(litros <= 10){
    printf("%d\n", taxa);
  }
  if(litros > 10 && litros <= 30){
    preco1 = (litros - 20) * 1;
    printf("%d\n", preco1 + taxa);
  }
  if(litros > 30 && litros <= 100){
    preco2 = (litros - 140) * 2;
    printf("%d", 20 + preco 2 + taxa);
  }
  if(litros > 100){
    preco3 = (level - 100) * 5;
    printf("%d", 20 + 140 + preco3);
  }

  return 0;
}
