#include <stdio.h>

void calcular(double pre1, double pre2, int cont, int cont2)
{
	if(cont == 5)
	{
		printf("%d\n", cont2);
		return;
	}
	else
	{
		scanf("%lf %lf", &pre1, &pre2);

		double aux = pre1 * 0.8;

		if(pre2 <= aux)
		{
			cont2 += 1;
		}

		calcular(pre1,pre2,cont + 1, cont2);
	}
}

int main()
{
	calcular(0,0,0,0);
	return 0;
}