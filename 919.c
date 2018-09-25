#include <stdio.h>

void calcular_saldo()
{
	double saldo_inicial = 0;
	double debitos = 0;
	double creditos = 0;

	printf("Informe o saldo inicial do cliente:\n");
	scanf("%lf", &saldo_inicial);
	
	printf("Informe o total de debitos adquiridos pelo cliente:\n");
	scanf("%lf", &debitos);
	
	printf("Informe o total de creditos adquiridos pelo cliente:\n");
	scanf("%lf", &creditos);

	double saldo_final = (saldo_inicial - debitos) + creditos;

	if(saldo_final > 0)
	{
		printf("Saldo positivo em R$ %.13lf\n",saldo_final);
	}
	else if(saldo_final < 0)
	{
		printf("Saldo negativo em R$ %.14lf\n",saldo_final);
	}
	else
	{
		printf("Saldo Zero\n");
	}
}	
int main()
{
	calcular_saldo();
	return 0;
}