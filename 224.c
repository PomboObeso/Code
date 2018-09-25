#include <stdio.h>

void ler(int i, int aux, int cont)
{
	if(i == 0)
	{
		cont = aux;
		printf("%d\n", cont);
		return;
	}
	else
	{
		if(i > aux)
		{
			aux = i;
		}
		scanf("%d",&i);

		ler(i,aux,cont);
	}
}

int main()
{
	int i = 0;
	scanf("%d", &i);
	ler(i,0,0);
	return 0;
}