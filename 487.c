#include <stdio.h>

void ler(int n, int aux, int cont, int cont2)
{
	scanf("%d", &n);

	if(n == 0)
	{
		if(cont == cont2)
		{
			printf("EM ORDEM\n");
		}
		else
		{
			printf("FORA DE ORDEM\n");
		}
		return;
	}
	else
	{

		if(n > aux)
		{
			cont2 += 1;
		}
		
		ler(n,n,cont + 1, cont2);
	}
}

int main()
{
	int n;
	
	ler(n,0,0,0);
	
	return 0;
}