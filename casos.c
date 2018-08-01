#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main()
{
    int carga = 480;
    int min = 0;
    int casos = 0;

    scanf("%d", &min);

    casos = carga / min;

    printf("%d\n", casos);

    return 0;
}
