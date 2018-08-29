#include <stdio.h>

int moedas(int i, int n, int x, int y, int lado)
{
    if (i == n)
    {
        return -1;
    }

    char mov;

    int naMuralha = (x == y);

    scanf("%c\n", &mov);

    if (mov == 'D')
    {
        x++;
    }
    else if (mov == 'C')
    {
        y++;
    }

    int novoLado = 0;
    
    if (x < y)
    {
        novoLado = 1;
    }
    else if (x > y)
    {
        novoLado = 2;
    }
    else
    {
        novoLado = 0;
    }

    if (naMuralha && lado != novoLado)
    {
        return 1 + moedas(i+1, n, x, y, novoLado);
    }
    else 
    {
        return 0 + moedas(i+1 ,n ,x, y, lado);
    }
}
int main()
{   
    int n = 0;
    scanf("%d", &n);
    int m = moedas(0,n,0,0,0);

    printf("%d\n", m);
}