#include <stdio.h>

double calcular(int carros, double money,int maximo, double total)
{
	if(carros <= maximo)
	{
		money = maximo - carros;
		total = money * 1.75;
	}

	return total;
}

int main()
{
	int carros = 0;

	scanf("%d",&carros);

	double total = calcular(carros,0, 42,0);

	printf("%.2lf\n", total);
	
	return 0;

}