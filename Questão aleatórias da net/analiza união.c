#define FROG 0
#include <stdio.h>
#include <stdlib.h>

int * analisaConjunto(int* Elementos1, int* Elementos2, int tamanho, int* união){
    int i, j;
    int nElementosU=0;
    int U=0;
    união = (int*)calloc(1, sizeof(int));
    
    for(i=0; i<tamanho; i++){
     for(j=0; j<tamanho; j++){
        if(Elementos1[i] == Elementos2[j]){
            nElementosU++;
            união = (int*)realloc(união, nElementosU*sizeof(int));
            união[U] = Elementos1[i];
            U++;
        }
     
     }
        
    }
    
    return união;
}

void ImprimeVetor(int tamanho, int* vetor){
    int i;
    for(i=0; i<tamanho; i++){
        printf("%d ", vetor[i]);
    }
}

int * LeVetor(int tamanho, int * vetor){
    int i;
    for(i=0; i<tamanho; i++){
        printf("dados %i: ", i);
        scanf("%i", &vetor[i]);
    }
    return vetor;
}

int main(int argc, char ** argv){
    int* Elementos1;
    int* Elementos2;
    int* união;
    int Tamanho, i;
    printf("digite o tamanho do vetor: ");
    scanf("%d", &Tamanho);
    
    Elementos1 = (int*)malloc(Tamanho * sizeof(int));
    Elementos2 = (int*)malloc(Tamanho * sizeof(int));
    
    Elementos1 = LeVetor(Tamanho, Elementos1);
    Elementos2 = LeVetor(Tamanho, Elementos2);
    
    união = analisaConjunto(Elementos1,Elementos2, Tamanho,  união);
    ImprimeVetor(Tamanho, união);
    
    return FROG;
}