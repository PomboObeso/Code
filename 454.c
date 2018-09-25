#include <stdio.h>
#include <string.h>
#include <ctype.h>

void restaurante()
{
	int i = 0;
	char produto[20];
	char sabor[20];
	int qtd;
	double total = 0;

	scanf("%s", produto);

	scanf("%s",sabor);
	
	scanf("%d", &qtd);

	for(i;i<20;i++)
	{
		produto[i] = toupper(produto[i]);
		sabor[i] = toupper(sabor[i]);
	}

	if(strcmp(produto,"PIZZA")== 0)
	{

		if(strcmp(sabor,"CALABRESA") == 0)
		{
			total = 20.60 * qtd;
			printf("%.2lf\n", total + (2.0 * qtd));
		}

		else if(strcmp(sabor,"MARGUERITA") == 0)
		{
			total = 20.60 * qtd;
			printf("%.2lf\n", total + (2.0 * qtd));
		}
		else
		{
			total = 30.90 * qtd;
			printf("%.2lf\n", total + (2.0 * qtd));
		}

	}
	if(strcmp(produto,"LASANHA")==0)
	{
		if(strcmp(sabor,"QUEIJO") == 0)
		{
			total = 18.00 * qtd;
			printf("%.2lf\n", total + (2.0 * qtd));	
		}
		if(strcmp(sabor,"BOLONHESA") == 0)
		{
			total = 23.00 * qtd;
			printf("%.2lf\n", total + (2.0 * qtd));
		}
	}
}

int main()
{
	restaurante();
	return 0;
}