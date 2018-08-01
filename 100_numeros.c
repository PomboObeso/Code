#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void numeros(int x){

  printf("%d\n", x);
  x++;
  if(x < 100){
    numeros(x);
  }
}

int main()
{
  numeros(0);

  return 0;
}
