#include <stdio.h>

void sequencia(int x, int y, int cont)
{
    if(cont > y)
    {
        return;
    }
    else
    {
        if(cont % x == 0)
        {
            printf("%d\n", cont);
            sequencia(x,y,cont+1);
        }
        else
        {
            printf("%d ", cont);
            sequencia(x,y,cont + 1);
        }
    }
}
int main()
{
    int x,y;
    scanf("%d %d", &x,&y);
    
    sequencia(x,y,1);

    return 0;
}
