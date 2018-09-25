#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void serie(int n , int s, double aux){

  int deno = 0;
  int nume = 0;

  if(s < n){
    nume = s;
    deno = s * 3;
    printf("(%d/%d)+",nume,deno);
    aux = nume/deno;
    serie(n,s+1,nume/deno);
  }
  else if(s == n){
    nume = s;
    deno = s * 3;
    aux = (nume/deno);
    printf("(%d/%d)\n",nume,deno);
    printf("%.2lf\n",aux);
  }
  else{
    printf("0.00\n");
  }
}

int main()
{
  int n = 0; int s = 0;

  scanf("%d", &n);

  s = n - (n - 1);

  serie(n,s,0);

  return 0;
}
