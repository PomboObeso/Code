#include <stdio.h>

int main()
{
    double aux;
    int aux2;
    int i, j;
    int alu[10];
    double med[10];
    double n1;
    double n2;

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &alu[i]);
        scanf("%lf %lf", &n1, &n2);
        med[i] = (n1 + n2)/2;
    }
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 9; j++)
        {
            if(med[j] > med[j + 1])
            {
                aux = med[j];
                med[j] = med[j + 1];
                med[j + 1] = aux;

                aux2 = alu[j];
                alu[j] = alu[j + 1];
                alu[j + 1] = aux2;
            }
        }
    }
    for(i = 0; i < 10; i++)
    {
        printf("Matricula: %d\nMedia do Aluno de Matricula [%d] %.2lf\n", alu[i], alu[i],med[i]);
    }

    return 0;
}
