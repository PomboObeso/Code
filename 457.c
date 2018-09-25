#include <stdio.h>
#include <string.h>

void medir(double largura, double comprimento, double altura)
{
	char per[20] = "PERMITIDA"
	char pro[20] = "PROIBIDA"

	if(largura > 45 || comprimento >56 || altura > 25)	//tudo em centimentros podendo ser quebrado
	{
		printf("%s\n",pro);
	}
	else
	{
		printf("%s\n",per);
	}
}

int main()
{
	double lar,com,alt;
	
	scanf("%lf %lf %lf", &lar,&com,&alt);

	medir(lar,com,alt);
	return 0;
}