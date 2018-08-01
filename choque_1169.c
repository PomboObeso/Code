#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  int level = 0;

  scanf("%d", &level);

  double potencia = 0;

  if(level >= 1 && level <= 20){
    potencia = 20.0 + (level * level * level);
    printf("Potencia de : %.0lf W\n", potencia);
  }
  if(level >= 21 && level <= 40){
    potencia = 8000 + (pow(level,2) - 20 * level + pow(10,2));
    printf("Potencia de : %.0lf W\n", potencia);
  }
  if(level >= 41 && level <= 60){
    potencia = 9000 + (5 * level);
    printf("Potencia de : %.0lf W\n", potencia);
  }
  if(level >= 61 && level <=80){
    potencia = 9300 + (2 * level);
    printf("Potencia de : %.0lf W\n", potencia);
  }
  if(level >= 81 && level <= 100){
    potencia = 9500 + level;
    printf("Potencia de : %.0lf W\n", potencia);
  }

  return 0;
}
