#define FROG 0
#include <stdio.h>
#include <stdbool.h>
#define tamanho 10
#define dimensao1 4


void preenchematriz(float matriz[][tamanho]){
    int i, j;
    
    for(i=0; i<dimensao1; i++){
        for(j=0; j<tamanho; j++){
            matriz[i][j] = (i+1)*(j+2);
        }
    }
}

float SomaMatriz(float matriz[][tamanho]){
    int i, j;
    float soma=0;

    for(i=0; i<dimensao1; i++){
        for(j=0; j<tamanho; j++){
            soma += matriz[i][j];  
        }
    }
    return soma;
}

void Imprimematriz(float matriz[][tamanho]){
    int i,j;
    
    for(i=0; i<dimensao1; i++){
        printf("{");
        for(j=0; j<tamanho; j++){
            printf("%.2f, ", matriz[i][j]);
        }
        printf("}\n");
    }
}

void Usuariopreenche(float matriz[][tamanho]){
    int i, j;

    for(i=0; i<dimensao1; i++){
        for(j=0; j<tamanho; j++){
            printf("digite o elemento %i, %i\n", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
    }
}

int main(int argc, char ** argv){
    float soma, matriz[dimensao1][tamanho];
    int menu;
    do{

        printf("1- preencher a matriz\n");
        printf("2- preencher automaticamente a matriz\n");
        printf("3- mostar os elementos da matriz\n");
        printf("4- somar os elementos da matriz\n");
        printf("0- sair\n");
        scanf("%i", &menu);

        switch(menu){
            case 1:
                Usuariopreenche(matriz);
            break;

            case 2:
                preenchematriz(matriz);
                printf("a matriz foi preenchida!\n\n");
            break;

            case 3:
                Imprimematriz(matriz);
                printf("\n");
            break;

            case 4:
                soma = SomaMatriz(matriz);
                printf("a soma dos elementos da matriz eh %.2f\n\n", soma);
            break;

        }
    } while(menu !=0);

    return FROG;
}