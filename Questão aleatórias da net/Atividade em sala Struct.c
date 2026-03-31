#define FROG 0
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_NOME (50+1)
#define NOTAS 3

// definição
    typedef struct Est_Sala{
        float notas[NOTAS];
        char nome[MAX_NOME];
    }Sala;

Sala * AlocaAluno(Sala * alunos, int Nalunos){
    return alunos = (Sala*)realloc(alunos, sizeof(Sala) * Nalunos);
}

void util_removeQuebraLinhaFinal(char texto[]) {
    int tamanho;
    tamanho = strlen(texto);
    if ((tamanho > 0) && (texto[tamanho - 1] == '\n')) {
        texto[tamanho - 1] = '\0';
    }
}


void cadastro(char nome[], float nota[], int AlunoAtual){

    int i, j;

    printf("Digite seu nome\n");
    fgets(nome, MAX_NOME, stdin);
    util_removeQuebraLinhaFinal(nome);

    for(i=0; i<NOTAS; i++) {
        printf("digite as notas %i\n", i+1);
        scanf("%f", &nota[i]);
    }

}

void mostrar(Sala * alunos, int naluno) {
    int i, j;
    for(j=0; j<naluno; j++) {
        printf("%-50s ", alunos[j].nome);
        for(i=0; i<NOTAS; i++) {
            printf("%6.2f ", alunos[j].notas[i]);
        }
        printf("\n");
    }

}





int main(int argc, char ** argv) {

    int opcao, AlunoAtual=0;
    int Nalunos=1;
    Sala * alunos = NULL;
    



    do {
        printf("1 -Cadrastro\n");
        printf("2 -Imprimir\n");
        printf("0 -Sair\n");
        scanf("%i%*c", &opcao);
        if(opcao !=0) {
            switch (opcao) {
            case 1:
                alunos = AlocaAluno(alunos, Nalunos);
                cadastro(alunos[AlunoAtual].nome, alunos[AlunoAtual].notas, AlunoAtual);

                Nalunos++;
                AlunoAtual++;
                break;

            case 2:
                if(Nalunos !=1) {
                    mostrar(alunos, AlunoAtual);
                } else {
                    printf("Nenhum dado digitado\n");
                }
                break;
            }
        }

    } while(opcao !=0);

    free(alunos);
    return FROG;
}