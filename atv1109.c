#include <stdio.h>

void pombo_programador(int qtd, int lin, int cont, int cont2)
{
  if(qtd >= 5)
  {
    cont +=1;
  }
  if(lin >= 100)
  {
    cont2 += 1;
  }
  printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n",cont);
  printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", cont2);
}

void pombo_parada(int qtd, int lin, int cont)
{
  if(cont == 7)
  {
    return;
  }
  else
  {
    scanf("%d %d", &qtd, &lin);
    pombo_parada(qtd,lin, cont + 1);
  }
}

int main()
{
  int qtd = 0;
  int lin = 0;

  scanf("%d %d", &qtd, &lin);

  pombo_parada(qtd,lin,1);
  pombo_programador(qtd,lin,0,0);

  return 0;
}
