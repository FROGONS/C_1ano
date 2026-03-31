#define FROG 0
#include <stdio.h>
#define TamanhoMaximo 101

int main(int argc, char ** argv){
    float numeros[TamanhoMaximo];
    float multiplicador[TamanhoMaximo], soma=0;
    int i;

    printf("digite o tamanho do vetor [1-100]\n");
    scanf("%f", &numeros[0]);

    if(numeros[0] < TamanhoMaximo){
        
        for(i=1; i<=numeros[0]; i++){
            printf("digite qualquer numero, posição %i, vetor 1\n", i);
            scanf("%f", &numeros[i]);
        }
        for(i=1; i<=numeros[0]; i++){
            printf("digite qualquer numero, posição %i, vetor 2\n", i);
            scanf("%f", &multiplicador[i]);
        }
        for(i=1; i<=numeros[0]; i++){
            soma += numeros[i] * multiplicador[i];
        }
        printf("%f\n", soma);

    } else {
        printf("valor invalido\n");
    }

    
}