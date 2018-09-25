#include <stdio.h>

void inverter(int num)
{
	int in = num % 10;
	int ou = num / 10;
	if(in == 0)
	{
		printf("%d",ou);
	}
	else
	{
		printf("%d%d\n", in,ou);
	}
}

int main()
{
	int num = 0;

	scanf("%d", &num);

	inverter(num);
	return 0;
}