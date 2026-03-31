#define FROG 0
#include <stdio.h>
#include <stdbool.h>
#define TAMANHO 100

void Fibonacci(int N, int numeros[]){
    int i;
    numeros[0]=1;
    numeros[1]=1;
    for(i = 2; i<N; i++){
        numeros[i] = numeros[i-1] + numeros[i-2];
    }
}

int main(int argc, char ** argv){
    int numeros[TAMANHO];
    int N, i;
    bool executar;

    do{
        printf("digite o nnumero de fibonacci [1 - 100]\n");
        scanf("%i", &N);
        
        if(N <= 100 && N > 0){
            Fibonacci(N, numeros);

            for(i=0; i<N; i++){
                printf("%i ", numeros[i]);
            }
            printf("\n");

            executar = true;
       
        } else {    
            printf("\n");
            printf("tamanho invalido\n");
            executar = false;
        }

    } while(executar == false);
    

}