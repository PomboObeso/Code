#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){

int x = 0;
int y = 0;
int z = 0;
int help = 0;

  scanf("%d",&x);
  scanf("%d",&y);
  scanf("%d",&z);

  if(x>y){
    help = x;
    x = y;
    y = help;
  }
  if(x>z){
    help = x;
    x = z;
    z = help;
  }
  if(y>z){
    help = y;
    y = z;
    z = help;
  }

  printf("%d\n%d\n%d\n",x,y,z);

  return 0;
}
