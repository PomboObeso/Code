#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void conversao(char tipo, double temp){

  //k = C + 273.15
  //f = 1.8 * c + 32

  double kelvin = 0;
  double fah = 0;
  double cel = 0;

  if(tipo == 'C' && temp >= -273.0){
    kelvin = temp + 273.15;
    fah = (1.8 * temp) + 32;
    printf("%.2lf F\n%.2lf K\n",fah,kelvin);
    return;
  }
  else if(tipo == 'F' && temp >= -459.67){
    cel = (temp - 32)/1.8;
    kelvin = (temp + 459.67) * (5.0/9.0);
    printf("%.2lf C\n%.3lf K\n",cel,kelvin);
    return;
  }
  else if(tipo == 'K' && temp >= 0){
    fah = 1.8 * (temp - 273.15) + 32;
    cel = temp - 273.15;
    printf("%.2lf C\n%.2lf F\n",cel,fah);
    return;
  }
  else{
    printf("Valor de temperatura abaixo do minimo\n");
    return;
  }
}

int main()
{
  char type;
  double t = 0;

  scanf(" %c", &type);
  scanf("%lf", &t);

  conversao(type,t);
  return 0;
}
