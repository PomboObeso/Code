#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void medidas(char tipo,double medida,double medida2)
{
  double area = 0;
  double peri = 0;

  if(tipo == 'Q')
  {
    area = medida * 4;
    peri = (medida * medida);
    printf("%.2lf\n%.2lf\n", area, peri);
  }
  else if(tipo == 'C')
  {
    area = 3.14 * (medida * medida);
    peri =  2 * (3.14 * medida);
    printf("%.2lf\n%.2lf\n", area, peri);
  }
  else if(tipo == 'R')
  {
    area = medida * medida2;
    peri = 2 * (medida + medida2);
    printf("%.2lf\n%.2lf\n", area, peri);
  }
  else
  {
    printf("Nenhuma figura selecionada\n");
  }
}

int main()
{
  char type;
  double medida = 0;
  double medida2 = 0;

  scanf("%c", & type);
  scanf("%lf", &medida);
  scanf("%lf", &medida2);

  medidas(type , medida, medida2);

  return 0;
}
