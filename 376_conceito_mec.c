#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  int livro = 0;
  int alunos = 0;

  scanf("%d", &livro);
  scanf("%d", &alunos);

  double mec = alunos / livro;

  if(mec <= 8){
    printf("A\n");
  }
  if(mec >= 9 && mec <= 12){
    printf("B\n");
  }
  if(mec >= 13 && mec <= 18){
    printf("C\n");
  }
  if(mec > 18){
    printf("D\n");
  }
  return 0;
}
