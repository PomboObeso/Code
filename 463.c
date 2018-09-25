#include <stdio.h>

void ler_vacina(int idade, int cont1_s, int cont2_h, int cont)
{
	scanf("%d", &idade);
	
	if(idade == 100)
	{
		printf("%d\n%d\n%d\n",cont1_s,cont2_h,cont);
		return;
	}
	else
	{
		if(idade >= 3 && idade <= 6)
		{
			cont1_s += 1;
		}
		if(idade >= 5 && idade <= 8)
		{
			cont2_h += 1;
		}
		if(idade >= 5 && idade <= 8 && idade >= 3 && idade <= 6)
		{
			cont += 1;
		}

		ler_vacina(idade,cont1_s,cont2_h,cont);
	}
}

int main()
{
	ler_vacina(0,0,0,0);
	return 0;
}