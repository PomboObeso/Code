#include <stdio.h>

void calcular(int preco, int garantia)
{
	double total = 0;
	if(garantia == 0)
	{
		printf("%d\n",preco);
	}
	if(garantia	== 1)
	{
		total = preco * 1.03;
		printf("%.2lf\n",total);
	}
	if(garantia == 2)
	{
		total = preco * 1.05.
		printf("%.2lf\n",total);
	}	

}

int main()
{
	int preco, garantia;
	scanf("%d %d", &preco,&garantia);

	calcular(preco.garantia);
	return 0;
}