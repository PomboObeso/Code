#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  //Alcool: ate 20 litros = 3% / acima de 20 litros = 5% p/ litros
  //Gasolina: ate 20 lts = 4% / acima de 20 lts = 6% p/ litros
  //Diesel: acima de 25 lts = 4% p/ lts
  //Alcool = R$ 1.90 / Gasolina = R$ 2.50 / Diesel = R$ 1.66


  double litros = 0;
  char combustivel;

  scanf("%lf", &litros);
  scanf(" %c", &combustivel);


  double total = 0;
  double perc = 0;

  if(combustivel == 'A'){
    if(litros <= 20){
      perc = litros * 0.03;
      total = (litros - perc) * 1.90 ;
      printf("R$ %.2lf\n", total);
    }
    if(litros > 20){
      perc = litros * 0.05;
      total = (litros - perc) * 1.90;
      printf("R$ %.2lf\n", total);
    }
  }
  if(combustivel == 'G'){
    if(litros <= 20){
      perc = litros * 0.04;
      total = (litros - perc) * 2.50;
      printf("R$ %.2lf\n", total);
    }
    if(litros > 20){
      perc = litros * 0.06;
      total = (litros - perc) * 2.50;
      printf("R$ %.2lf\n", total);
    }
  }
  if(combustivel == 'D'){
    if(litros > 25){
      perc = litros * 0.04;
      total = (litros - perc) * 1.66;
      printf("R$ %.2lf\n", total);
    }
    if(litros <= 25){
      total = litros * 1.66;
      printf("R$ %.2lf\n", total);
    }
  }

  return 0;
}
