#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void consumo(double distance, double liters){
  double consumo = distance / liters;

  printf("%.3lf km/l\n", consumo);

}

int main(){

  double km = 0;
  double litros = 0;

  scanf("%lf", &km);
  scanf("%lf", &litros);

  consumo(km,litros);

  return 0;
}
