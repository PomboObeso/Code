#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main()
{
  //Ph da solução acimda de 7 basica , menor que 7 ácida, ==7 neutra

  double ph = 0;

  scanf("%lf", &ph);

  if(1.0<=ph<=14.0){
    if(ph > 7){
      printf("Basica\n");
    }
    if(ph < 7){
      printf("Acida\n");
    }
    if( ph == 7){
      printf("Neutra\n");
    }
  }

  return 0;
}
