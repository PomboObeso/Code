#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main()
{

  int inf_ano = 0;

  scanf("%d", &inf_ano);

  if(inf_ano % 4  == 0){
      printf("BISSEXTO\n");
        if(inf_ano % 100 != 0 && inf_ano % 400 != 0){
        printf("BISSEXTO\n");
      }
      }
  }


  return 0;
}
