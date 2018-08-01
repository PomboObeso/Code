#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void descrescente(int n1, int n2, int n3){

  int apoio = 0;

  if(n1 < n2){
    apoio = n2;
    n2 = n1;
    n1 = apoio;
  }
  if(n1 < n3){
    apoio = n3;
    n3 = n1;
    n1 = apoio;
  }
  if(n2 < n3){
    apoio = n3;
    n3 = n2;
    n2 = apoio;
  }

  printf("%d %d %d\n", n1,n2,n3);

}

int main()
{
  int n1 = 0; int n2 = 0; int n3 = 0;

  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &n3);

  descrescente(n1,n2,n3);

  return 0;
}
