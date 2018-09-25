#include <stdio.h>

void calcular()
{
  int l,c,h; //largura/comprimento/altura = carro
  int L,C,H; //largura/comprimento/altura = garagem

  scanf("%d %d %d %d %d %d",&L,&C,&H,&l,&c,&h);
  if(l > L ||c > C || h > H)
  {
    printf("NAO\n");
  }
  else
  {
    printf("SIM\n");
  }
}

int main()
{
  calcular();
  return 0;
}