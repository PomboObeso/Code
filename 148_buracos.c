#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


void pombo_obeso(char* texto, int posicao, int* contadorb, int* contador)
{
  if(texto[posicao] == '\0')
  {
    return;
  }
  if(texto[posicao] == 'B')
  {
    *contadorb += 1;
  }
  else if(texto[posicao] == 'A' || texto[posicao] == 'D' || texto[posicao] == 'O' || texto[posicao] == 'P' || texto[posicao] == 'R' || texto [posicao] == 'Q')
  {
    *contador += 1;
  }

  pombo_obeso(texto, posicao+1, contadorb, contador);


}

void read(int teste, int contadorX)
{
  if(teste == contadorX)
  {
    return;
  }
  int contadorb = 0, contador = 0;
  char texto[100];
  scanf("%s", texto);
  pombo_obeso(texto, 0, &contadorb, &contador);
  int pontb = contadorb*2;
  int total = pontb + contador;
  printf("%d\n", total);
  read(teste, contadorX+1);

}


int main(){
  int teste = 0;
  scanf("%d", &teste);
  read(teste, 0);

  return 0;
}
