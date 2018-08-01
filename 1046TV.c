#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main()
{
  double vid = 0;
  double aud = 0;
  double dad = 0;
  double cap = 0;
  double max = 0;

  scanf("%lf", &vid);
  scanf("%lf", &aud);
  scanf("%lf", &dad);
  scanf("%lf", &cap);


  max = (vid * 5.2 + aud * 3.4 + dad * 1.5)/ cap;

  printf("%.2lf\n", max);



  return 0;
}
