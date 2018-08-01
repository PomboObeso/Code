#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  int a,b,c;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  if(a == b && b == c && a == c){
    printf("1\n");
  }
  else if(a != b && b != c && a != c){
    printf("2\n");
  }
  else
  {
    printf("3\n");
  }


  return 0;
}
