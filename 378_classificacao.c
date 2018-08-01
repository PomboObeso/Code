#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  int pont1,pont2,pont3,pont4,pont5,pont6;

  scanf("%d %d %d %d %d %d", &pont1,&pont2,&pont3,&pont4,&pont5,&pont6);

  char class[15] = "Classificado";
  char elim[10] = "Eliminado";

  int total = pont1 + pont2 + pont3 + pont4 + pont4 + pont5 + pont6;

  if(total >= 100){
    printf("%s\n", class);
  }
  else{
    printf("%s\n", elim);
  }

  return 0;
}
