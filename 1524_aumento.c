#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

double fun(double salario){

    double percentual = 0;
    double aumento = 0;
    double total = 0;
    if(salario <= 280){
      percentual = 20;
      aumento = salario * 0.20;
      total = salario + aumento;
      printf("%.2lf\n%.0lf\n%.2lf\n%.2lf\n", salario , percentual , aumento, total);
    }
    if(salario > 280 && salario <= 700){
      percentual = 15;
      aumento = salario * 0.15;
      total = salario + aumento;
      printf("%.2lf\n%.0lf\n%.2lf\n%.2lf\n", salario , percentual , aumento, total);
    }
    if(salario > 700 && salario < 1500){
      percentual = 10;
      aumento = salario * 0.10;
      total = salario + aumento;
      printf("%.2lf\n%.0lf\n%.2lf\n%.2lf\n", salario , percentual , aumento, total);
    }
    if(salario >= 1500){
      percentual = 5;
      aumento = salario * 0.05;
      total = salario + aumento;
      printf("%.2lf\n%.0lf\n%.2lf\n%.2lf\n", salario , percentual , aumento, total);
    }
}

int main()
{
  double salario = 0;

  scanf("%lf", &salario);

  double f = fun(salario);

  return 0;
}
