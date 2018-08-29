#include <stdio.h>

void printDia(int dia) {

    printf("DIA QUE MAIS PRODUZIU: ");
    if (dia == 1)
    {
        printf("DOMINGO\n");
    }
    else if (dia == 2)
    {
        printf("SEGUNDA\n");
    }
    else if (dia == 3)
    {
        printf("TERCA\n");
    }
    else if (dia == 4)
    {
        printf("QUARTA\n");
    }
    else if (dia == 5)
    {
        printf("QUINTA\n");
    }
    else if (dia == 6)
    {
        printf("SEXTA\n");
    }
    else if (dia == 7)
    {
        printf("SABADO\n");
    }
    else 
    {
        printf("DIA INVALIDO\n");
    }
}

void pombo_parada(int qtd, int lin, int cont, int*programas, int*linhas, int maiorProd, int*dia)
{

    //printf("qtd=%d, lin=%d, cont=%d, programas=%d, linhas=%d, dia=%d\n", qtd, lin, cont, programas, linhas, dia);

    if (qtd >= 5)
    {
        *programas += 1;
    }

    if (lin >= 100)
    {
        *linhas += 1;
    }

    if (qtd + lin >= maiorProd)
    {
        maiorProd = qtd + lin;
        *dia = cont;
    }
    
    if(cont == 7)
    {
        return;
    }
    else
    {
        scanf("%d %d", &qtd, &lin);

        pombo_parada(qtd,lin, cont + 1, programas, linhas, maiorProd, dia);

        return;
    }

}

int main()
{
    int qtd = 0;
    int lin = 0;

    int programas = 0, linhas = 0, dia = 0;

    scanf("%d %d", &qtd, &lin);

    pombo_parada(qtd, lin, 1, &programas, &linhas, 0, &dia);

    printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n",programas);
    printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", linhas);

    printDia(dia);

  return 0;
}