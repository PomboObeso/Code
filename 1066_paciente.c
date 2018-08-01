#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void diagnostico(double temp, char diag){

  if(temp >= 37.00 && diag == 'S'){
    printf("Exames especiais\n");
    return;
  }
  else if(temp < 37.00 && diag == 'S' || temp >= 37.0 && diag == 'N'){
    printf("Exames Basicos\n");
    return;
  }
  else if(temp < 37.00 && diag == 'N'){
    printf("Liberado\n");
    return;
  }
  else{
    printf("Erro\n");
    return;
  }


}

int main()
{
  double temp = 0;
  char diag;

  scanf("%lf %c",&temp, &diag);

  diagnostico(temp,diag);

  return 0;
}
