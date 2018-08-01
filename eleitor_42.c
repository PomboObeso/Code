#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  int idade = 0;

  scanf("%d", &idade);

  if(idade < 16){
    printf("nao eleitor\n");
  }
  if(idade >= 16 && idade < 18 && idade > 65){
    printf("eleitor facultativo\n");
  }
  if(idade >= 18 && idade <=65){
    printf("eleitor obrigatorio\n");
  }

  return 0;
}
