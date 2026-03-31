#define FROG 0
#include <stdio.h>
#define TamanhoMaximo 101

int main(int argc, char ** argv){
    float numeros[TamanhoMaximo];
    float multiplicador;
    int i;

    printf("digite o tamanho do vetor [1-100]\n");
    scanf("%f", &numeros[0]);

    if(numeros[0] < TamanhoMaximo){
        
        for(i=1; i<=numeros[0]; i++){
            printf("digite qualquer numero, posição %i\n", i);
            scanf("%f", &numeros[i]);
        }

        printf("digite o multiplicador\n");
        scanf("%f", &multiplicador);

        for(i=1; i<=numeros[0]; i++){
            numeros[i] = numeros[i] * multiplicador;
            printf("%f ",numeros[i]);
        }
        

    } else {
        printf("valor invalido\n");
    }

    
}