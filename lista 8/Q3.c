#define FROG 0
#include <stdio.h>
#include <stdbool.h>
#define dimensao 100

void Usuariopreenche(float matriz[][dimensao], int tamanho){
    int i, j;

    for(i=0; i<tamanho; i++){
        for(j=0; j<tamanho; j++){
            printf("digite o elemento %i, %i\n", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
    }
}

void Vetorusario(int tamanho, float vetor[]){
    int i;
    for(i=0; i<tamanho; i++){
        printf("digite o elemento %i do vetor: ", i+1);
        scanf("%f", &vetor[i]);
    }
}

void multiplicavetor(float matriz[][dimensao], float vetor[], int tamanho, float produto[]){
    int i, j;
    //i = linha da matriz e j = coluna da matriz

    for(i=0; i<tamanho; i++){
        for(j=0; j<tamanho; j++){
            produto[i] += matriz[i][j] * vetor[j];
        }
    }
}

void imprimevetor(float vetor[], int tamanho){
    int i;
    printf("[");
    for(i=0; i<tamanho; i++){
        printf("%.2f\n", vetor[i]);    
    }
    printf("]\n");
}

void preenchematriz(float matriz[][dimensao], int tamanho){
    int i, j;
    
    for(i=0; i<tamanho; i++){
        for(j=0; j<tamanho; j++){
            matriz[i][j] = (i+1)*(j+2);
        }
    }
}

void preenchevetor(float vetor[], int tamanho){
    int i, j=1;
    
    for(i=0; i<tamanho; i++){
        vetor[i] = (i+1)*(j+2);
    }
}

void Imprimematriz(float matriz[][dimensao], int tamanho){
    int i,j;
    
    for(i=0; i<tamanho; i++){
        printf("{");
        for(j=0; j<tamanho; j++){
            printf("%.2f, ", matriz[i][j]);
        }
        printf("}\n");
    }
}


int main(int agrc, char ** argv){
    int tamanho, i, j, opcao;
    float produto[dimensao], matriz[dimensao][dimensao], vetor[dimensao];
    
    printf("digite a dimensao da matriz: ");
    scanf("%i", &tamanho);

    do {
        printf(" o que deseja fazer?\n");
        printf("1- testar a mao\n");
        printf("2- testar automatico\n");
        printf("3- ver a matriz\n");
        printf("4- ver o vetor\n");
        printf("0- sair\n");
        scanf("%i", &opcao);

        switch (opcao){
        case 1:
            Vetorusario(tamanho, vetor);
            Usuariopreenche(matriz, tamanho);
            multiplicavetor(matriz, vetor, tamanho, produto);
            imprimevetor(produto, tamanho);
        break;
        
        case 2:
            preenchematriz(matriz, tamanho);
            preenchevetor(vetor, tamanho);
            multiplicavetor(matriz, vetor, tamanho, produto);
            imprimevetor(produto, tamanho);
        break;

        case 3:
            Imprimematriz(matriz, tamanho);
        break;

        case 4:
            imprimevetor(vetor, tamanho);
        }

    } while (opcao != 0);
    
    return FROG;
}