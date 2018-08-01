#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main()
{
  double salario = 0;
  double aumento = 0;
  double total = 0;

  printf("Informe o salario do colaborador:\n");
  scanf("%lf", &salario);



  if(salario <= 280){
    aumento = salario * 0.20;
    total = salario + aumento;
    printf("Salario antes do reajuste: %.1lf\n", salario);
    printf("Percentual do aumento aplicado: 20%%\n");
    printf("Valor do aumento: %.14lf\n", aumento);
    printf("Salario com reajuste: %.2lf\n", total);
  }
  if(salario >= 280 && salario <= 700){
    aumento = salario * 0.15;
    total = salario + aumento;
    printf("Salario antes do reajuste: %.1lf\n", salario);
    printf("Percentual do aumento aplicado: 15%%\n");
    printf("Valor do aumento: %.14lf\n", aumento);
    printf("Salario com reajuste: %.2lf\n", total);
  }
  if(salario >= 700 && salario <= 1500){
    aumento = salario * 0.10;
    total = salario + aumento;
    printf("Salario antes do reajuste: %.1lf\n", salario);
    printf("Percentual do aumento aplicado: 10%%\n");
    printf("Valor do aumento: %.14lf\n", aumento);
    printf("Salario com reajuste: %.2lf\n", total);
  }
  if(salario > 1500){
    aumento = salario * 0.05;
    total = salario + aumento;
    printf("Salario antes do reajuste: %.1lf\n", salario);
    printf("Percentual do aumento aplicado: 5%%\n");
    printf("Valor do aumento: %.14lf\n", aumento);
    printf("Salario com reajuste: %.2lf\n", total);
  }

  return 0;
}
