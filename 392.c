#include <stdio.h>

void ler_ligacao(double lig, double aux, int cont,double tot2)
{
	double tot1 = 0;
	double adc = 0;
	//double adc2 = 0;

	scanf("%lf",&lig);

	if(lig == 0)
	{
		if(aux > 40)
		{
			adc += aux - 40;
			tot1 += adc * 0.20;
		}
		if(tot1 > 0 && cont < 9)
		{
			printf("%.2lf\n", 10.0 + tot1);
      		return;
		}
		if(tot2 > 0 && cont > 9)
		{
			printf("%.2lf\n", tot2 + 10.0);	//tot2 > 0
      		return;
		}
		
		return;
	}
	else
	{
		if(cont > 9)
		{
			tot2 += lig * 0.20;	
		}

		ler_ligacao(lig,aux + lig, cont + 1,tot2);
	}
}

int main()
{
	int lig = 0;
	
	ler_ligacao(lig,0,0,0);
	
	return 0;

}

