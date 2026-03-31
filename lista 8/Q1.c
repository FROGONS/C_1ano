#define FROG 0
#include <stdio.h>
#define tamanho 10
#include <stdbool.h>

void preenchematriz(float matriz[][tamanho]){
    int i, j;
    
    for(i=0; i<tamanho; i++){
        for(j=0; j<tamanho; j++){
            matriz[i][j] = (i+1)*(j+2);
        }
    }
}

void Imprimematriz(float matriz[][tamanho]){
    int i,j;
    
    for(i=0; i<tamanho; i++){
        printf("{");
        for(j=0; j<tamanho; j++){
            printf("%5.2f, ", matriz[i][j]);
        }
        printf("}\n");
    }
}

int main(int argc, char ** argv){
    
    float matriz[tamanho][tamanho];
    char opcao;
    int i, j;

    printf("deseja selecionar os elementos da matriz?\n");
    printf("s ou n?\n");
    scanf("%c", &opcao);
    if(opcao == 's' || opcao == 'S'){
        for(i=0; i<tamanho; i++){
            for(j=0; j<tamanho; j++){
                printf("digite o elemento %i, %i\n", i+1, j+1);
                scanf("%f", &matriz[i][j]);
            }
        }

        printf("os elementos dessa matriz sao :");
        Imprimematriz(matriz);

    } else {
        printf("os elementos dessa matriz sao :\n");
        preenchematriz(matriz);
        Imprimematriz(matriz);

    }
    return FROG;
}