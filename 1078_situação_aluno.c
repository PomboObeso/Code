#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  int n1, n2 , n3;

  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &n3);

  double media = (n1 + n2 + n3)/3.0;

  if(0 <= n1 && n1 <= 100 && 0 <= n2 && n2 <= 100 && 0 <= n3 && n3 <= 100){
    if( 70 <= media && media <=100){
      printf("A media do aluno foi %.2lf e ele foi APROVADO\n", media);
    }
    if(40 <= media && media <= 70){
      printf("A media do aluno foi %.2lf e ele foi FINAL\n", media);
    }
    if(0 <=media && media <= 40){
      printf("A media do aluno foi %.2lf e ele foi REPROVADO\n", media);
    }
  }else
  {
    printf("Media invalida\n");
  }

  return 0;
}
