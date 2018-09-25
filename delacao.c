#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void delacao()
{
	char delator[20];
	char delatado[20];

	int i = 0;

	int roubo1, trafico1; //delator
	int roubo2, trafico2; //delatado

	scanf(" %[^\n]s", delator);
	scanf(" %[^\n]s", delatado);

	for(i; i < 20; i++)
	{
		delator[i] = tolower(delator[i]);
		delatado[i] = tolower(delatado[i]);
	}

	if(strcmp(delator,"homicidio") == 0 && strcmp(delatado,"homicidio") == 0)//homicidio com homicidio
	{
		printf("Delação concedida.\n");
	}
	else if(strcmp(delator,"trafico") == 0 && strcmp(delatado,"roubo") == 0)//trafico com roubo
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
	else if(strcmp(delator,"roubo") == 0 && strcmp(delatado,"roubo") == 0)//roubo com roubo
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
	else if(strcmp(delator, "trafico") == 0 && strcmp(delatado,"trafico") ==0)//trafico com trafico
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
	else if(strcmp(delator, "roubou") == 0|| strcmp(delator,"trafico") == 0 && strcmp(delatado, "homicidio") == 0)//roubo ou trafico com homicidio
	{
		printf("Delação concedida.\n");
	}
	else
	{
		printf("Crime inválido.\n");
	}

}

int main()
{
	delacao();
	return 0;
}