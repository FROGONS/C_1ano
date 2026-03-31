#define FROG 0
#include <stdio.h>
#include <stdbool.h>
#define TAMANHO_MAX_VETOR 100

float produto(float vetor1[], float vetor2[], float resultados[], int tamanho){
    int i;
    float soma=0;
    
    for(i=0; i<tamanho; i++){
        resultados[i] = vetor1[i] * vetor2[i];
        soma += resultados[i];
    }

    return soma;
}

int main(int argc, char ** argv){

    int i, tamanho;
    float vetor1[TAMANHO_MAX_VETOR];
    float vetor2[TAMANHO_MAX_VETOR];
    float resultados[TAMANHO_MAX_VETOR];
    float total;
    bool executar;

    do{
        printf("digite o tamanho do vetor [0 - 100]\n");
        scanf("%i", &tamanho);

        if(tamanho <= 100 && tamanho > 0){
            for(i=0; i<tamanho; i++){
                printf("digite o numero da posicao %i do vetor 1: ", i+1);
                scanf("%f", &vetor1[i]);
            }
            for(i=0; i<tamanho; i++){
                printf("digite o numero da posicao %i do vetor 2: ", i+1);
                scanf("%f", &vetor2[i]);
            }
            total = produto(vetor1, vetor2, resultados, tamanho);
            executar = true;
            printf("o valor eh %.2f", total);
        } else {
            
            printf("\n");
            printf("tamanho invalido\n");
            executar = false;
        }

    }while(executar == false);

    printf("\n");
    printf("obrigado por usar meu codigo\n");
    return FROG;
}