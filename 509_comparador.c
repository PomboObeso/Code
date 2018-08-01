#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  int x = 0;
  int y = 0;

  scanf("%d", &x);
  scanf("%d", &y);

  if(x > y){
    printf("1\n");
  }
  else{
    printf("0\n");
  }
  if(x == y){
    printf("1\n");
  }
  else{
    printf("0\n");
  }
  if(x < y){
    printf("1\n");
  }
  else{
    printf("0\n");
  }
  if(x != y){
    printf("1\n");
  }
  else{
    printf("0\n");
  }
  if(x >= y){
    printf("1\n");
  }
  else{
    printf("0\n");
  }
  if(x <= y){
    printf("1\n");
  }
  else{
    printf("0\n");
  }
  return 0;
}
