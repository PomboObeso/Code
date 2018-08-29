#include <stdio.h>

void printdia(int dia)
{
	printf("O DIA QUE MAIS PRODUZIU: ");

	if(dia == 1)
	{
		printf("DOMINGO\n");
	}
	else if(dia == 2)
	{
		printf("SEGUNDA\n");
	}
	else if(dia == 3)
	{
		printf("TERÇA\n");
	}
	else if(dia == 4)
	{
		printf("QUARTA\n");
	}
	else if(dia == 5)
	{
		printf("QUINTA\n");
	}
	else if(dia == 6)
	{
		printf("SEXTA\n");
	}
	else if(dia == 7)
	{
		printf("SÁBADO\n");
	}
}

void pombo_programador(int qtd, int lin, int cont, int programas, int linhas, int produto, int dia)
{

	if(qtd >= 5)
  {
    programas +=1;
  }
  if(lin >= 100)
  {
    linhas += 1;
  }
  if(qtd + lin >= produto)
  {
    produto = qtd + lin;
    dia = cont;
  }
  if(cont == 7)
  {
  
  printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n",programas);
  
  printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", linhas);

  printdia(dia);

  return;
  }
  else
  {
    scanf("%d %d", &qtd, &lin);

    pombo_programador(qtd, lin, cont + 1, programas, linhas, produto, dia);

    return;
  }

}

int main()
{

  pombo_programador(0,0,0,0,0,0,0);

  return 0;
}
