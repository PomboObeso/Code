#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  double a , b , c;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  if(a == b && b == c && a == c){
    printf("equilatero\n");
  }
  else if(a != b && b != c && a != c){
    printf("escaleno\n");
  }
  else{
    printf("isosceles")
  }
  return 0;
}
