#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){

  int canal = 0;


  printf("Digite um numero de um canal:\n");
  scanf("%d", &canal);

  if(canal != 2 && canal != 4 && canal != 6 && canal != 9 && canal != 13){
    printf("Canal invalido\n");
  }
  if (canal == 2){
    printf("SBT\n");
  }
  if (canal == 4){
    printf("BAND\n");
  }
  if (canal == 6){
    printf("REDETV!\n");
  }
  if (canal == 9){
    printf("RECORD\n");
  }
  if (canal == 13){
    printf("GLOBO\n");
  }


  return 0;
}
