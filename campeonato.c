#include <stdio.h>

void campeonato()
{
	int cv, ce, cs;
	int fv, fe, fs;

	scanf("%d %d %d %d %d %d", &cv,&ce,&cs,&fv,&fe,&fs);

	cv = cv * 3;
	fv = fv * 3;

	if(cv + ce > fv + fe)
	{
		printf("C\n");
	}
	if(fv + fe > cv + ce)
	{
		printf("F\n");
	}
	if(cv + ce == fv + fe)
	{
		if(cs > fs)
		{
			printf("C\n");
		}
		else if(fs > cs)
		{
			printf("F\n");
		}
		else
		{
			printf("=\n");
		}
	}
}

int main()
{
	campeonato();

	return 0;
}