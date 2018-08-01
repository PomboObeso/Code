#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  int a,b;

  scanf("%d", &a);
  scanf("%d", &b);

  if(a == 0 && b == 0){
    printf("0\n");
  }
  if(a == 1 && b == 0){
    printf("1\n");
  }
  if(a == 0 && b == 1){
    printf("1\n");
  }
  if(a == 1 && b == 1){
    printf("1\n");
  }



  return 0;
}
