#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char nome[51] ;
  char nome_2[51]  ;

  scanf("%s", nome);
  scanf("%s", nome_2);

  int retorno = strcmp(nome, nome_2);

  if(retorno == 0){
    printf("IGUAIS\n");
  }
  else{
    printf("DIFERENTES\n");
  }

  return 0;
}
