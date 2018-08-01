#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void pombo_primo(int num, int primo)
{
  if(primo < num)
  {
    if(num % primo != 0)
    {
      printf("1\n");
    }
    else
    {
      printf("0\n");
    }
    pombo_primo(num,primo + 1);
  }
  else
  {
    return;
  }
}

void ler_desgraca()
{
  int num = 0;

  scanf("%d", &num);

  if(num == -1)
  {
    return;
  }
  pombo_primo(num, 1);

  ler_desgraca(num);
}

int main()
{
  ler_desgraca();

  return 0;
}
