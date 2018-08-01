#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void raiz(){
  printf("A raiz do número %.2lf é %.2lf\n",4.0 , sqrt(4) );
  printf("A raiz do número %.2lf é %.2lf\n",9.0 , sqrt(9) );
  printf("A raiz do número %.2lf é %.2lf\n",25.0 , sqrt(25) );
}

int main (){
  printf("===================Raízes quaradradas===================\n");

  raiz();

  printf("By Papa Emeritus\n");

  return 0;
}
