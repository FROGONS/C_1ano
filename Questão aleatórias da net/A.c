#define FROG 0
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_NOME (50+1)
#define NOTAS 3

char** RealocaMatrizChar(char** matriz, int Nalunos){
    if(Nalunos ==1){
        matriz = (char*)malloc(Nalunos * sizeof(char*));
    } else{
        matriz = (char**)realloc(matriz, Nalunos * sizeof(char*));
    }
    return matriz;
}

char** InicializaMatrizChar(char** matriz, int AlunoAtual){
    matriz[AlunoAtual] = (char*)malloc(MAX_NOME * sizeof(char));
}

float** RealocaMatrizfloat(float** matriz, int Nalunos){
    if(Nalunos ==1){
        matriz = (float**)malloc(Nalunos * sizeof(float*));
    } else{
        matriz = (float**)realloc(matriz, Nalunos * sizeof(float*));
    }
    return matriz;
}

float** InicializaMatrizFloat(float** matriz, int AlunoAtual){
    matriz[AlunoAtual] = (float*)calloc(NOTAS, sizeof(float));
}

void util_removeQuebraLinhaFinal(char texto[]) {
    int tamanho;
    tamanho = strlen(texto);
    if ((tamanho > 0) && (texto[tamanho - 1] == '\n')) {
        texto[tamanho - 1] = '\0';
    }
}


void cadastro(char** nome, float** nota, int AlunoAtual){

    int i, j;

    printf("Digite seu nome [1-50]\n");
    fgets(nome[AlunoAtual], MAX_NOME, stdin);
    util_removeQuebraLinhaFinal(nome[AlunoAtual]);

    for(i=0; i<NOTAS; i++) {
        printf("digite as notas %i\n", i+1);
        scanf("%f", &nota[AlunoAtual][i]);
    }

}

void mostrar(char** nome, float** nota, int naluno) {
    int i, j;
    for(j=0; j<naluno; j++) {
        printf("%-50s ", nome[j]);
        for(i=0; i<NOTAS; i++) {
            printf("%6.2f ", nota[j][i]);
        }
        printf("\n");
    }

}



int main(int argc, char ** argv) {

    int opcao, AlunoAtual=0;
    float** notas;
    char** nome;
    int Nalunos=1;

    



    do {
        printf("1 -Cadrastro [1-100]\n");
        printf("2 -Imprimir\n");
        printf("0 -Sair\n");
        scanf("%i%*c", &opcao);
        if(opcao !=0) {
            switch (opcao) {
            case 1:
                nome = RealocaMatrizChar(nome, Nalunos);
                notas = RealocaMatrizfloat(notas, Nalunos);
                InicializaMatrizChar(nome, AlunoAtual);
                InicializaMatrizFloat(notas, AlunoAtual);
                cadastro(nome, notas, AlunoAtual);

                Nalunos++;
                AlunoAtual++;
                break;

            case 2:
                if(Nalunos !=1) {
                    mostrar(nome, notas, AlunoAtual);
                } else {
                    printf("Nenhum dado digitado\n");
                }
                break;
            }
        }

    } while(opcao !=0);

    return FROG;
}