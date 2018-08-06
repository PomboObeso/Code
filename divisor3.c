#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int pombo_divisor(int num, int contante)
{
	if(num % 3 == 0)
	{
		contante += 1;
		pombo_divisor(num/3, contante);
	}
	else
	{
		return 0;
	}
}

int main()
{
	int num = 0;

	scanf("%d", &num);

	pombo_divisor(num,0);
	return 0;
}