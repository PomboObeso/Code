#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
  double n1 = 0;
  double n2 = 0;
  double n3 = 0;

  double media = 0;

  int count = 0;

  scanf("%lf", &n1);
  scanf("%lf", &n2);
  scanf("%lf", &n3);

  media = (n1 + n2 + n3)/3;

  if(n1 <= 10 && n2 <= 10 && n3 <= 10){
      if(n1 >=10){
        count ++;
      }if(n2 >= 10){
        count ++;
      }if (n3 >= 10){
        count ++;
      }
  }

  printf("%d\n", count);

  return 0;

}
