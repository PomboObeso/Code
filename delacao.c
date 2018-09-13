#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void delacao()
{
	char delator[20];
	char delatado[20];

	int roubo1, trafico1; //delator
	int roubo2, trafico2; //delatado

	scanf("%s", delator);
	scanf("%s", delatado);

	if(delator == 'homicidio' && delatado == 'homicidio')
	{
		printf("Delação concedida.\n");
	}
	if(delator == 'trafico' && delatado == 'roubo')
	{
		scanf("%d", &trafico1);
		scanf("%d", &roubo2);
		if(trafico1 / 3 > roubo2)
		{
			printf("Delação concedida.\n");
		}
		else
		{
			printf("Delação Rejeitada.\n");
		}
	}
	if(delator == 'roubo' && delatado == 'roubo')
	{
		scanf("%d", &roubo1);
		scanf("%d", &roubo2);

		if(roubo1 / 5 > roubo2)
		{
			printf("Delação concedida.\n");
		}
		else
		{
			printf("Delação rejeitada.\n");
		}
	}
	if(delator == 'trafico' && delatado == 'trafico')
	{
		scanf("%d", &trafico1);
		scanf("%d", &trafico2);

		if(trafico1 / 5 > trafico2)
		{
			printf("Delação concedida.\n");
		}
		else
		{
			printf("Delação rejeitada.\n");
		}
	}
}

int main()
{
	delacao();
	return 0;
}