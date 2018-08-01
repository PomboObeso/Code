#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void semana(int dia){

  if(dia < 8){
    if(dia == 1){
      printf("Domingo\n");
      return;
    }
    if(dia == 2){
      printf("Segunda\n");
      return;
    }
    if(dia == 3){
      printf("Terça");
      return;
    }
    if(dia == 4){
      printf("Quarta\n");
      return;
    }
    if(dia == 5){
      printf("Quinta\n");
      return;
    }
    if(dia == 6){
      printf("Sexta\n");
      return;
    }
    if(dia == 7){
      printf("Sabado\n");
      return;
    }
  }else{
    printf("valor invalido\n");
    return;
  }

}

int main()
{
  int dia = 0;

  scanf("%d", &dia);

  semana(dia);
  return 0;
}
