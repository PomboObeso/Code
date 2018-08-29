#include <stdio.h>

void cafe(int caixa ,char tamanho, int total, int cont)
{

	if(cont == 7)
	{	
		int media = (total / 7) * 2;
		printf("Total = %d\nMedia = %d\n", total, media);
		return;
	}
	else
	{
		scanf("%d %c", &caixa, &tamanho);

		int qtd = 0;

		if(tamanho == 'p' || tamanho == 'P')
		{
			qtd = caixa * 10;
		}
		if(tamanho == 'g' || tamanho == 'G')
		{
			qtd = caixa * 16;
		}
		cafe(caixa,tamanho,total + qtd, cont + 1);
	}
}

int main()
{	
	cafe(0,0,0,0);
	return 0;
}