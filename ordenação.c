#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
int n1 = 0;
int n2 = 0;
int n3 = 0;
int apoio = 0;

  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &n3);

  if(n1 > n2){
    apoio = n1;
    n1 = n2;
    n2 = apoio;
  }
  if(n1 > n3){
    apoio = n1;
    n1 = n3;
    n3 = apoio;
  }
  if(n2 > n3){
    apoio = n2;
    n2 = n3;
    n3 = apoio;
  }

  printf("\n%d\n",n1);
  printf("%d\n",n2);
  printf("%d\n",n3);

    return 0;
}
