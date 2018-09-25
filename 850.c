#include <stdio.h>

void calcular(int reg)
{
	if(reg == 1)
	{
		printf("Nordeste\n");
		return;
	}
	if(reg == 2)
	{
		printf("Norte\n");
		return;
	}
	if(reg == 3 || reg == 4)
	{
		printf("Centro-Oeste\n");
		return;
	}
	if(reg >= 5 && reg <= 9)
	{
		printf("Sul\n");
		return;
	}
	if(reg >= 10 && reg <= 15)
	{
		printf("Sudeste\n");
		return;
	}
}

int main()
{
	int regiao;
	scanf("%d", &regiao);
	calcular(regiao);
	return 0;
}