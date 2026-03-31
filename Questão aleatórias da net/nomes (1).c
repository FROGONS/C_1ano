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

void StringMinuscula(char string[]){
    int tamanho, i;
    tamanho =strlen(string);
    for(i=0; i<tamanho; i++){
        string[i] = tolower(string [i]);
    }
    
}

char ** Aloca(int D1, char** string){
    int i;
    string = (char**)malloc(D1 * sizeof(char*));
    for(i=0; i<D1; i++){
        string[i] = (char*)malloc(MAXNOME*sizeof(char));
    }
    return string;
}
char ** Realoca(char ** string, int D1){
    string = (char**)realloc(string, sizeof(char*) * D1);
    string[D1-1] = (char*)malloc(sizeof(char) * MAXNOME);
    return string;
}

void Libera(char ** matriz, int D1){
    int i;
    for(i=0; i<D1; i++){
        free(matriz[i]);
    }
    free(matriz);
}

char ** Remove(char ** string, int indice, int D1){
    int i;
    for(i=indice-1; i<D1 -1; i++){
        strcpy(string[i], string[i + 1]);
    }
    return (char**)realloc(string, sizeof(char*) * (D1-1));
}

char ** RemoveNome(char ** string, int * D1){
    int indice;
    printf("digite o numero do nome: ");
    scanf("%d%*c", &indice);
    while(indice > *D1 || indice<0){
        printf("numero invalido: ");
        scanf("%d%*c", &indice);
    }
    string = Remove(string, indice, *D1);
    (*D1)--;
    return string;
}

//cadastra 1 nome
void CadastraNome(char * nome){
    fgets(nome, MAXNOME, stdin);
    util_removeQuebraLinhaFinal(nome);
    StringMinuscula(nome);
}

//Cadastra N nomes
void CadastraNomes(char ** nomes, int D1){
    int i;
    for(i=0; i<D1; i++){
        printf("digite o nome %d: ", (i+1));
        CadastraNome(nomes[i]);
    } 
}

//imprime N nomes
void ImprimeNome(char * nome){
    printf("%s\n", nome);
}

//imprime N nomes
void ImprimeNomes(char ** nomes, int d1){
    int i;
    for(i=0; i<d1; i++){
        printf("nome %i: ", i+1);
        ImprimeNome(nomes[i]);
    }
}

//função que compara 1 string
bool ComparaString(char* string, char pesquisa[]){
  int igual;
  int tamanho = strlen(pesquisa);
  
  igual = strncmp(string, pesquisa, tamanho);
  if(igual !=0){
      return FALSO;
  }
  return VERDADEIRO;
}

//Função que compara N Strings
int ProcuraString(char ** string, char pesquisa [], int Nstring){
    int i;
    bool DeuBom;
    printf("digite a string: ");
    fgets(pesquisa, MAXNOME, stdin);
    //remove quebra linha
    util_removeQuebraLinhaFinal(pesquisa);
    StringMinuscula(pesquisa);
    
    for(i=0; i<Nstring; i++){
        DeuBom = ComparaString(string[i], pesquisa);
        if(DeuBom == VERDADEIRO){
            return i;
        }
    }
    return -1;
}

void Substituinome(char * nome){
    printf("digite o novo nome: ");
    fgets(nome, MAXNOME, stdin);
}


int main(int agrc, char ** argv){
    int D1 =1;
    char pesquisa[MAXNOME];
    char ** string = NULL;
    int menu, indice;
    
    printf("digite o número de nomes: ");
    scanf("%d%*c", &D1);
    string = Aloca(D1, string);
    CadastraNomes(string, D1);
    do{
        printf("1. Imprimir\n 2. Adicionar Nome\n 3. Remover Nome por indice\n 4. Procurar nome e remover\n 5. procurar e substituir nome\n 0.Sair\n");
        scanf("%d%*c", &menu);
        
        switch(menu){
            case 1:
                ImprimeNomes(string, D1);
            break;
            
            case 2:
                D1++;
                string = Realoca(string, D1);
                printf("digite o novo nome: ");
                CadastraNome(string[D1-1]);
            break;
            
            case 3:
                string = RemoveNome(string, &D1);
            break;
            
            case 4:
                if(D1 <=1){
                  printf("número de nomes pequeno para remoção");
                } else{
                    indice = ProcuraString(string, pesquisa, D1);
                   if(indice != -1){
                    string = Remove(string, indice+1, D1);
                    D1--;
                   } else{
                       printf("nome invalido!\n");
                   }
                }
               
            break;
            
            case 5:
                indice = ProcuraString(string, pesquisa, D1);
                if(indice != -1){
                    Substituinome(string[indice]);
               } else{
                   printf("nome invalido!\n");
               }
            break;
        }
    }while(menu != 0);
    
    Libera(string, D1);
    return FROG;
}