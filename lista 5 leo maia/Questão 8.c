#define FROG 0
#include <stdio.h>

int Fibonacci(int N){
    int i = 1 , soma, i2 =0, lim;
    
    if (N== 1){
        return i2;
    }
    if (N== 2){
        return i;
    } else {
        for(lim = 3; lim<=N; lim++){
        soma = i2 + i;
        i2= i;
        i= soma;
    }
        return soma;
    }
    
    
}

int main(int agrc, char ** argv){
    int i, N, numero;
    printf("digite um numero: ");
    scanf("%i", &N);
    for(i = 1; i<=N; i++){
        numero = Fibonacci(i);
        printf("%i ", numero);
    }
    printf("\n");
    return FROG;
}
