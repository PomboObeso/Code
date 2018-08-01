#include <stdio.h>
#include <stdlib.h>

int main(){

    int tabuada = 0;
    int x = 1;

    printf("\nDigite a tabuada que você deseja:\n>>>");
    scanf("%d", &tabuada);

    for(x ; x < 10; ++x){
        printf("%dx%d=%d\n",x,tabuada, tabuada*x);
    }


    return 0;
}
