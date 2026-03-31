#define FROG 0
#include <stdio.h>
#include <stdbool.h>
#define TAMANHO_MAX_VETOR 100

void Escalar(float numeros[], int tamanho, float escalar){
    
    int i;
    for(i=0; i<tamanho; i++){
        numeros[i] *= escalar;
    }

}

int main(int argc, char ** argv){
    int i, tamanho;
    float numeros[TAMANHO_MAX_VETOR];
    float escalar;
    bool executar;

    do{
        printf("digite o tamanho do vetor [0 - 100]\n");
        scanf("%i", &tamanho);

        if(tamanho <= 100 && tamanho > 0){

            for(i=0; i<tamanho; i++){
                printf("digite o numero da posicao %i do vetor: ", i+1);
                scanf("%f", &numeros[i]);
            }

            printf("digite o escalar\n");
            scanf("%f", &escalar);
            Escalar(numeros, tamanho, escalar);

            for(i=0; i<tamanho; i++){
                printf("%.2f ", numeros[i]);
            }
            printf("\n");
            executar = true;

        } else {
            
            printf("\n");
            printf("tamanho invalido");
            executar = false;

        }

    } while(executar == false);

    printf("\n");
    printf("obrigado por usar meu codigo\n");
    return FROG;
}