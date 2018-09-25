#include <stdio.h>

void ler(char modelo, int ano, double velocidade, double vmax, int myear, double vmedia, double cont)
{

	scanf("%c %d %lf", &modelo, &ano, &velocidade);

	if(modelo == 'n' || modelo == 'N')
	{
		printf("zero\n");
	}
	if(modelo == 'n' || modelo == 'N')
	{
		double total = vmedia / cont;

		printf("%.2lf\n%d\n%.2lf\n", vmax,myear,total);
		return;
	}
	else
	{
		
		if(velocidade > vmax)
		{
			vmax = velocidade;
		}
		if(ano > myear)
		{
			myear = ano;
		}

		ler(modelo,ano,velocidade,vmax,myear,vmedia + velocidade, cont + 1);
	}
}

int main()
{
	char vacilo;

	ler(vacilo,0,0,0,0,0,0);

	return 0;
}