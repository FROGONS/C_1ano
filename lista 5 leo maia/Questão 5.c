#define FROG 0
#include <stdio.h>

    //funcao q faz o fatorial de um numero
    int fatorial(int num){
        int i;
        int fatorial=1;
        for(i=1; i<=num; i++){
            fatorial *= i;
        }
        return fatorial;
    }

    int main(int agrc, char ** argv){
        int N, resultado;
        //interacao com o usuario
        printf("digite um numero\n");
        scanf("%i", &N);
        resultado = fatorial(N);
        //mostro o fatorial do numero
        printf("%i\n", resultado);
    }