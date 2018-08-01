#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
  //bonus: alemanha > 3000, Espanha entre 2000 e 3000 e argentina < 2000
  double salario = 0;

  scanf("%lf", &salario);

  double bonus = salario * 0.75;

  if( bonus < 2000){
    printf("ARGENTINA\n");
  }
  if (bonus >= 2000 && bonus <= 3000){
    printf("ESPANHA\n");
  }
  if(bonus > 3000){
    printf("ALEMANHA\n");
  }

  return 0;
}
