#include <stdio.h>

void RU(int refe, int cedu)
{
	double aux;
	double aux2;
	double aux3;
	int aux4;
	
	if(cedu == 2)
	{
		aux3 = refe;

		aux = refe * (cedu * 2);
	
		aux2 = aux - (aux3 * 3.25);

		aux4 = aux2 / 3.25;

		printf("%d\n", aux4);
	}
	else
	{
		aux3 = refe;

		aux = refe * cedu;
	
		aux2 = aux - (aux3 * 3.25);

		aux4 = aux2 / 3.25;

		printf("%d\n", aux4);
	}


}

int main()
{
	int refe;
	int cedu;

	scanf("%d %d", &refe, &cedu);
	RU(refe,cedu);
	return 0;
}