#include <stdio.h>

void calcular(double arv, double qtd, double pre, double aux,int cont)
{
	double tot = 0;
	if(cont == 3)
	{
		double total = arv + aux;
		double div = total / 21;

		printf("%.2lf\n%.2lf\n", total, div);
		return;
	}
	else
	{
		scanf("%lf %lf", &qtd, &pre);

		tot = qtd * pre;

		calcular(arv,qtd,pre,aux + tot, cont + 1);
	}
}

int main()
{
	double arv;
	
	scanf("%lf", &arv);

	calcular(arv,0,0,0,0);
	
	return 0;
}