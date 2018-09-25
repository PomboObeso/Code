#include <stdio.h>

void calcular(int pack)
{
	int rest = pack % 3;
	int div = pack / 3;
	printf("%d\n%d\n", div, rest);
}

int main()
{
	int pack = 0;
	scanf("%d", &pack);

	calcular(pack);
	return 0;
}