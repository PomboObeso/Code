#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void tab(int *x int * tabuada){

  x = 1;

  tabuada = 0;

  printf("%d x %d = %d", x , tabuada, x * tabuada);

  x + 1;

  if( x < 10){

    tab(x);

  }


}

int main()
{
  tab(&tabuada);

  int tab = &tabuada;

  printf("Digite o numero que deseja saber sua tabuada\n>>>");
  scanf("%d", tab);



  return 0;
}
