#include <stdio.h>

void ler(int n, double total, int cont)
{
	double aux = 0;

	if(n == 999)
	{
		printf("%.2lf\n%d\n",total,cont);
		return;
	}
	else
	{
		scanf("%d",&n);

		if(n >= 2)
		{
			n = n - 2;
			aux = n * 12.68;
			cont += 1;
		}

		ler(n,total + aux, cont);
	}
}

int main()
{
	ler(0,0,0);
	return 0;
}