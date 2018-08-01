#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

      int id=0;
      char nome;


      printf("\t\t\tOla Seja Bem vindo\n");

      printf("Insira sua idade e seu nome nos campos a seguir\n");

      printf("Nome:\n");
      scanf("%c",&nome);
      printf("Insira sua idade:\n");
      scanf("%d",&id);
      printf("Seu nome e sua idade conferem?\n Nome:%c\nIdade:%d\n",nome,id);
      printf("Caso esteja errado, aperte 0\n");

  return 0;
}
