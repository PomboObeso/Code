#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  double problemas = 0;
  double resolvido = 0;

  scanf("%lf %lf", &problemas , &resolvido);


  double chance = (resolvido / problemas) * 100.0;

  if( chance >= 0 && chance < 20){
    printf("%.2lf%% 4.40%% Pessimo\n", chance);
  }
  if( chance >= 20 && chance < 40){
    printf("%.2lf%% 31.65%% Ruim\n", chance);
  }
  if( chance >= 40 && chance < 60){
    printf("%.2lf%% 56.82%% Bom\n", chance);
  }
  if( chance >= 60 && chance < 80){
    printf("%.2lf%% 80.00%% Muito Bom\n", chance);
  }
  if ( chance >=80 && chance <= 100){
    printf("%.2lf%% 94.00%% Excelente\n", chance);
  }




  return 0;
}
