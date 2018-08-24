#include <stdio.h>

int euc(int d, int n)
{
  if(d%n == 0)
  {
    return n;
  }
  else
  {
    return euc(n, d % n);
  }
}

int main()
{
  int d, n;
  scanf("%d%d", &d, &n);
  euc(d,n);
  printf("%d\n", euc(d,n));
  return 0;
}
