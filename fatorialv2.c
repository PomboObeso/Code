#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



void pombo_obeso(int n, int x)
{
  if(n <= 1)
  {
    printf("%d\n", 1);
    return;
  }
	if(x == 0)
	{
    printf("%d\n", n);
		return;
	}
	else
	{
		n = n * x;
		pombo_obeso(n,x - 1);
	}

}

void ler()
{
  int n = 0;

  scanf("%d", &n);

  if(n == -1)
  {
    return;
  }

  pombo_obeso(n, n - 1);

  ler(n);
}

int main()
{

  ler();

	return 0;
}
