#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  double dia = 0;
  double taxa = 0;
  double diaria = 90.00;
  double km = 0;

  scanf("%lf", &dia);
  scanf("%lf", &km);

  double total = diaria * dia;
  double total_taxa = 0;
 


  if(km <= 100){
    printf("%.2lf\n", total);
  }
  if(km > 100){
    taxa = (km - 100) * 12;
    total_taxa = total + taxa;
    printf("%.2lf\n", total_taxa);
  }
	return 0;
}
