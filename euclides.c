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

void loop(int i, int n)
{
  if (i == n)
  {
    return;
  }
  else
  {
    int div, num;
    scanf("%d%d", &div, &num);
    printf("MDC(%i,%i) = %d\n",div,num,euc(div,num));
    loop(i+1, n);
  }
}
int main()
{
  int n;
  scanf("%d", &n);
  loop(0,n);  
  return 0;
}
