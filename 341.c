#include <stdio.h>

void ler_jogos(int n, int cont, int dif, double preco)
{
	if(cont == n)
	{
		return;
	}
	else
	{
		scanf("%d %lf", &dif, &preco);

		if(preco >= 100)
		{
			if(dif == 0)
			{
				preco = preco * 0.75;
				preco = preco * 0.75;
				preco = preco * 0.75;
				printf("Jogo[%d] = R$%.2lf\n",cont,preco);
			}
			if(dif == 1)
			{
				preco = preco * 0.80;
				preco = preco * 0.80;
				preco = preco * 0.80;

				printf("Jogo[%d] = R$%.2lf\n",cont,preco);
			}
			if(dif == 2)
			{
				preco = preco * 0.82;
				preco = preco * 0.82;
				preco = preco * 0.82;
				printf("Jogo[%d] = R$%.2lf\n",cont,preco);
			}
			if(dif == 3)
			{
				preco = preco * 0.85;
				preco = preco * 0.85;
				preco = preco * 0.85;
				printf("Jogo[%d] = R$%.2lf\n",cont,preco);
			}
			if(dif == 4)
			{
				preco = preco * 0.88;
				preco = preco * 0.88;
				preco = preco * 0.88;
				printf("Jogo[%d] = R$%.2lf\n",cont,preco);
			}
			if(dif == 5)
			{
				preco = preco * 0.90;
				preco = preco * 0.90;
				preco = preco * 0.90;
				printf("Jogo[%d] = R$%.2lf\n",cont,preco);
			}
		}
		else
		{
			if(preco <= 45)
			{
				printf("Jogo[%d] = R$%.2lf\n",cont,preco);
			}
			else
			{	if(preco / 2 > 45)
				{
					preco = preco * 0.50;
					printf("Jogo[%d] = R$%.2lf\n",cont,preco);
				}
				else
				{
					printf("Jogo[%d] = R$%.2lf\n",cont,preco);
				}					
			}
		}

		ler_jogos(n, cont + 1, dif, preco);
	}
}
int main()
{	
	int n = 0;
	
	scanf("%d", &n);

	ler_jogos(n,0,0,0);
	
	return 0;
}