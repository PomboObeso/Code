#include <stdio.h>

int ferradura(int cavalos, int total)
{
	total = cavalos * 4;

	return total;
}

int main()
{
	int cavalos_transantes = 0;

	printf("Informe a quantidade de cavalos existentes no haras:\n");

	scanf("%d", &cavalos_transantes);

	int total = ferradura(cavalos_transantes);

	printf("Numero de ferraduras a serem compradas: %d\n", total);
	return 0;
}