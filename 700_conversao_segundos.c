#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  int seg,min,horas;

  scanf("%d", &seg);

  horas = seg / 3600;
  min = ( seg - (horas * 3600)) / 60;
  seg = seg - (horas * 3600) - (min * 60);

  printf("%d h %d m %d s\n", horas,min,seg);



  return 0;
}
