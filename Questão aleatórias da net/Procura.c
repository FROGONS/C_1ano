#define FROG 0
#define MAXNOME 30
#define VERDADEIRO              (1 == 1)
#define FALSO                   (!VERDADEIRO)

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

//funcao que remove QuebraLinha
void util_removeQuebraLinhaFinal(char dados[]) {
    int tamanho;
    tamanho = strlen(dados);
    if ((tamanho > 0) && (dados[tamanho - 1] == '\n')) {
        dados[tamanho - 1] = '\0';
    }
}

char ** Aloca(int D1, char** string){
    int i;
    string = malloc(D1 * sizeof(char*));
    for(i=0; i<D1; i++){
        string[i] = malloc(MAXNOME*sizeof(char));
    }
    return string;
}
char ** Realoca(char ** string, int D1){
    
}


bool ComparaString(char* string, char pesquisa){
  int igual;
  igual = strncmp(string, pesquisa, igual);
  if(igual !=0){
      return FALSO;
  }
  return VERDADEIRO;
}

int ProcuraString(char ** string, char pesquisa [], int Nstring){
    int i;
    bool DeuBom;
    
    for(i=0; i<Nstring; i++){
        DeuBom = ComparaString(string[i], pesquisa);
        if(DeuBom == VERDADEIRO){
            return i;
        }
    }
    return -1;
}

int main(int agrc, char ** argv){
    int D1;
    char pesquisa[MAXNOME];
    char ** string = NULL;
    
    printf("digite o número de nomes");
    scanf("%d", &D1);
}