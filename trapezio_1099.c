#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
  int baseM = 0;
  int basem = 0;
  int alt = 0;

  scanf("%d", &baseM);
  scanf("%d", &basem);
  scanf("%d", &alt);

  double area = ((baseM + basem) * alt)/2.0;

  printf("%.1lf\n", area);
  return 0;
}
