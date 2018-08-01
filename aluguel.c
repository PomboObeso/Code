#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){

double dias = 0;
double km = 0;
double diaria = 0;
double tkm = 0;
double desc = 0;
double total = 0;

  scanf("%lf",&dias);
  scanf("%lf",&km);

  diaria = 30 * dias;
  tkm = km * 0.01;
  desc = (diaria + tkm) * 0.1;
  total = (diaria + tkm)- desc;

  printf("%.2lf\n", total);
  //printf("%.2f\n", desc);
  return 0;
}
