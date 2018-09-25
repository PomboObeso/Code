#include <stdio.h>

void ler_imprimir(int n)
{
	if(n < 0)
	{
		return;
	}
	printf("Digite um numero (negativo para parar o programa):\n");
	
	scanf("%d",&n);

	if(n >= 0)
	{
		printf("Numero: %d\n",n);
	}

	ler_imprimir(n);
}

int main()
{
	ler_imprimir(0);
	return 0;
}