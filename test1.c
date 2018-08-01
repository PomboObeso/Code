#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int pares(int num, int contante)
{
  if(num == 0)
  {
    return contante;
  }

  if(num % 2 == 0)
  {
    contante += 1;
  }
  return pares(num/10, contante);
}
int main()
{
  int num = 0;
  int cont;
  scanf("%d", &num);

  cont = pares(num, 0);

  printf("%d\n", cont);

	return 0;
}
