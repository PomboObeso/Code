#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void verify(char* n, int position, int* countb, int* count)
{
  if(n[position] == '\0')
  {
    return;
  }
  if(n[position] == 'B')
  {
    *countb += 1;
  }
  else if(n[position] == 'A' || n[position] == 'D' || n[position] == 'O' || n[position] == 'P' || n[position] == 'R')
  {
    *count += 1;
  }

  verify(n, position+1, countb, count);


}

int main(){
  int countb = 0, count = 0;
  char n[100];
  scanf("%s", n);
  verify(n, 0, &countb, &count);
  int pontb = countb*2;
  int total = pontb + count;

  printf("%d\n", total);

  return 0;
}
