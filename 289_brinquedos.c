#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  int alt = 0;
  int idade = 0;
  int contador = 0;
  scanf("%d", &alt);
  scanf("%d", &idade);

  if(alt >= 140 && idade >= 12){
    contador++;
  }
  if(alt > 150 && idade >= 14){
    contador++;
  }
  if(alt >= 170 || idade >= 16){
    contador++;
  }

  printf("%d\n", contador );

  return 0;
}
