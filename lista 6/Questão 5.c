#define FROG 0
#include <stdio.h>
#include <stdbool.h>
#define TAM_MAX_VETOR1 100
#define TAM_MAX_VETOR2 2

void menor(int numeros[], int TAMANHO, int indices[], int Menor[]){
    int i;
    Menor [0]= numeros[0];
    indices [0] = 0;
    for(i=0; i<TAMANHO; i++){
        
        if(Menor[0] > numeros[i]){
            Menor[0] = numeros[i];
            indices [0] = i;

        }
    }
}

void Maior(int numeros[], int TAMANHO, int indices[], int Maior[]){
    
    int i;
    Maior[1]= numeros[0];

    for(i=0; i<TAMANHO; i++){

        if(Maior[1]< numeros[i]){
            indices[1] = i;
            Maior[1] = numeros[i];
        }
    }
}


int main(int argc, char ** argv){
    int i, tamanho;
    int Numeros[TAM_MAX_VETOR1];
    int indices[TAM_MAX_VETOR2];
    int MaiorMenor[TAM_MAX_VETOR2];
    bool executar;
    
    do{
    
        printf("digite o tamanho do vetor[0-100]\n");
        scanf("%i", &tamanho);
        if(tamanho <= 100 && tamanho > 0){
            for(i=0; i<tamanho; i++){
                printf("digite o numero da posicao %i do vetor: ", i+1);
                scanf(" %i", &Numeros[i]);
            }

            printf("\n");
            Maior(Numeros, tamanho, indices, MaiorMenor);
            menor(Numeros, tamanho, indices, MaiorMenor);
            printf("o maior eh %i e seu indice eh %i\n", MaiorMenor[1], indices[1] +1);
            printf("o menor eh %i e seu indice eh %i\n", MaiorMenor[0], indices[0] +1);
            
            executar = true;
            

        } else{

            printf("tamanho invalido\n");
            executar = false;
        }

    } while (executar == false);
    
    printf("\n");
    printf("obrigado por usar meu codigo\n");
    return FROG;
    
    
}