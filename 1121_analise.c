#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double emprestimo(double  comprometido , double salario)
{
  double percentual = comprometido / salario;
  double x = 0;
  double h = 0;
  if( percentual <= 0.30)
  {
    x = 0.30 - percentual;
    h = x * salario;
    return h;
  }
  else{
    return 0.0;

  }
}

int main()
{
  double salario = 0;
  double comprometido = 0;

  scanf("%lf", &salario);
  scanf("%lf", &comprometido);

  double resultado = emprestimo(comprometido,salario);

  printf("%.2lf\n", resultado);

  return 0;
}
