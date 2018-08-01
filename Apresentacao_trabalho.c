#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  int int_gra = 0;
  int int_art = 0;
  int encap = 0;
  int indent = 0;
  int struk = 0;

  scanf("%d", &int_gra);
  scanf("%d", &int_art);
  scanf("%d", &encap);
  scanf("%d", &indent);
  scanf("%d", &struk);

  if(int_gra == 1 || int_art == 1){
    if(encap == 1 && indent == 1){
      if(struk == 1){
        printf("AVALIADO\n");
      }else{
        printf("0\n");
      }
    }else{
      printf("0\n");
    }
  }else{
    printf("0\n");
  }

  return 0;
}
