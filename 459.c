#include <stdio.h>
#include <string.h>

void canina()
{
	int idade = 0;
	char porte[20];
	int i = 0;

	scanf("%d", &idade);
	scanf("%s", porte);
	
	for(i; i < 20; i++)
	{
	    porte[i] = toupper(porte[i]);
	}

	if(idade >= 1 && idade < 3)
	{
		if(porte[0] == 'P')
		{
			printf("5\n");
		}

		else if(strcmp(porte,"GRANDE") == 0)
		{
			printf("8\n");
		}
		else
		{
			printf("6\n");
		}
	}
	if(idade >= 3 && idade < 5)
	{
		if(porte[0] == 'P')
		{
			printf("21\n");
		}
		else if(strcmp(porte,"GRANDE") == 0)
		{
			printf("23\n");
		}
		else
		{
			printf("19\n");
		}
	}
	if(idade == 5)
	{
		if(porte[0] == 'P')
		{
			printf("26\n");
		}
		else if(strcmp(porte,"GRANDE") == 0)
		{
			printf("38\n");
		}
		else 
		{
			printf("32\n");
		}
	}
}

int main()
{
	canina();
	return 0;
}