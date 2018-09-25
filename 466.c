#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void executar(char city[20], int dist, int money, int dmenor, int maxdist, char cit[20])
{
	if(strcmp(city,"FIM"))
	{
		int i = 0;
		for(i; i<20; i++)
		{
			cit[i] = toupper(cit[i]);
		}
		printf("%s\n", cit);

		return;
	}
	else
	{
		if(money * 2 > 300)
		{
			return;
		}
		if(money < dmenor)
		{
			dmenor = money;
		}
		if(dist > maxdist)
		{
			dist = maxdist;
		}
		if(dmenor < money && maxdist < dist)
		{
			strcpy(city,cit);
		}

		scanf(" %s %d %d", city, &dist, &dist);

		executar(city,dist,money,dmenor,maxdist,cit);

	}
}

int main()
{
	char city[20];
	int money, dist;

	scanf("%s %d %d", city, &dist, &dist);

	executar(city,dist,money,money,dist,city);
	return 0;
}