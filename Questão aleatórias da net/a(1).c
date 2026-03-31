#define FROG 0
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_NOME (50+1)
#define NOTAS 3
#define MAX_Alunos 100

void util_removeQuebraLinhaFinal(char texto[]) {
    int tamanho;
    tamanho = strlen(texto);
    if ((tamanho > 0) && (texto[tamanho - 1] == '\n')) {
        texto[tamanho - 1] = '\0';
    }
}

int cadastro(char** nome, float** nota, int Tamanho, int naluno, int Naluno) {

    int i, j;

    nome = (char**)realloc(nome, Naluno * sizeof(char*));
    nota = (float**)realloc(nota, Naluno * sizeof(float*));
    for (i = 0; i < Naluno; i++) {
        nota[i] = (float*)malloc(NOTAS * sizeof(float));
    }
    for (i = 0; i < Naluno; i++) {
        nome[i] = (char*)malloc(MAX_NOME * sizeof(char));
    }


    printf("Digite seu nome [1-50]\n");
    fgets(nome[naluno], MAX_NOME, stdin);
    util_removeQuebraLinhaFinal(nome[naluno]);

    for (i = 0; i < NOTAS; i++) {
        printf("digite as notas %i\n", i + 1);
        scanf("%f", &nota[naluno][i]);
    }

    for (i = 0; nome[naluno][i] != '\0'; i++) {
        Tamanho++;
    }


    return Tamanho;
}

void mostrar(char** nome, float** nota, int tamanho, int naluno) {
    int i, j;
    for (j = 0; j < naluno; j++) {
        printf("%-50s ", nome[j]);
        for (i = 0; i < NOTAS; i++) {
            printf("%6.2f ", nota[j][i]);
        }
        printf("\n");
    }

}



int main(int argc, char** argv) {

    int Tamanho = 0, opcao, nalunos = 0, Naluno = 0, i;
    float** notas;
    char** nome;





    do {
        printf("1 -Cadrastro [1-100]\n");
        printf("2 -Imprimir\n");
        printf("0 -Sair\n");
        scanf("%i%*c", &opcao);
        switch (opcao) {
        case 1:
            Naluno++;
            Tamanho = cadastro(nome, notas, Tamanho, nalunos, Naluno);
            nalunos++;
            break;

        case 2:
            if (Tamanho != 0) {
                mostrar(nome, notas, Tamanho, nalunos);
            }
            else {
                printf("Nenhum dado digitado\n");
            }
            break;

        case 3:
            for (i = 0; i < Naluno; i++) {
                free(notas[i]);
            }
            free(notas);

            for (i = 0; i < Naluno; i++) {
                free(nome[i]);
            }
            free(nome);
            break;
        }

    } while (opcao != 0);

    return FROG;
}