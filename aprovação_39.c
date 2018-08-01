#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main()
{

  //calcular 3 notas, fazer a media, printar aprovado, reprovado, nota final

  double n1,n2,n3;

  scanf("%lf", &n1);
  scanf("%lf", &n2);
  scanf("%lf", &n3);

  double media = (n1 + n2 + n3)/3;

  if(media >= 7){
    printf("aprovado\n");
  }
  if(media < 3){
    printf("reprovado\n");
  }
  if(media < 7 && media >= 3){
    printf("prova final\n");
  }

  return 0;
}
