#define FROG 0
#include <stdio.h>
#define Nlojas 7
#define Qprodutos 5

void leprodutos(int produtos[][Nlojas], int soma[]) {
    int i, j;
    for (i = 0; i < Qprodutos; i++) {
        soma[i] = 0;
    }

    for(i=0; i<Nlojas; i++){
        for (j = 0; j < Qprodutos; j++) {
            printf("digite o produto %i da loja %i: ", j+1, i+1);
            scanf("%i", &produtos[j][i]);
        }
        
    }
    for (i = 0; i < Qprodutos; i++) {
        for (j = 0; j < Nlojas; j++) {
            soma[i] += produtos[i][j];
        }
    }

}

void ImprimeProdutosEmTabela(int produtos[][Nlojas], int soma[]) {

    int i, j;

    for (i = 0; i < Qprodutos; i++) {
        printf("Produto %i: ", i + 1);
        for (j = 0; j < Nlojas; j++) {
            printf("%3i ", produtos[i][j]);
        }
        printf("= %3i\n", soma[i]);
    }
}

int main(int agrc, char** argv) {
    int produtos[Qprodutos][Nlojas];
    int soma[Qprodutos];
    int menu;

    do {
        printf("o que deseja fazer?\n");
        printf("1- registar produtos\n");
        printf("2- imprimir a quantidade de produtos\n");
        printf("0- sair\n");
        scanf("%i", &menu);

        switch (menu) {
        case 1:
            leprodutos(produtos, soma);
            break;

        case 2:
            ImprimeProdutosEmTabela(produtos, soma);
            break;
        }


    } while (menu != 0);

    return FROG;

}