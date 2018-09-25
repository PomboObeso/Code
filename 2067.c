#include <stdio.h>

int ler(int x, int y, int i, int cont,int a)
{
	if (i == x)
	{
		return cont;
	}
	else
	{
		scanf("%d",&a);
		if(a == y)
		{
			cont += 1;
		}
		ler(x,y,i+1,cont,a);
	}
}

int main()
{
	int x = 0;
	int y = 0;

	scanf("%d %d", &x,&y);

	int num = ler(x,y,0,0,0);

	printf("%d\n",num);
	return 0;
}