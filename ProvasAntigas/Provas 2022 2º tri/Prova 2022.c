#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FROG 0
#define MAX_string 50


typedef struct ingredientes{
    char nome[MAX_string];
    float quantidade;
    char unidade[MAX_string];
} T_ingrediente;

typedef struct receita{
    int codigo;
    char nome[MAX_string];
    char categoria[MAX_string];
    int qnt_ingredientes;
    T_ingrediente * ingredientes;
} T_receita;

void util_removeQuebraLinhaFinal(char dados[]) {
    int tamanho;
    tamanho = strlen(dados);
    if ((tamanho > 0) && (dados[tamanho - 1] == '\n')) {
        dados[tamanho - 1] = '\0';
    }
}

//função que aloca a receita
T_receita * AlocaReceita(int D1, T_receita * receitas){
    return (T_receita*)realloc(receitas, D1 * sizeof(T_receita));
}

//Função que aloca o numero de ingredientes
T_ingrediente * AlocaIngrediente(int qnt){
    return (T_ingrediente*)malloc(sizeof(T_ingrediente)*qnt);
}

//funnção que cadastra 1 int
void CadastraInt(int * variavel){
    printf(": ");
    scanf("%d%*c", variavel);
}

//função q cadastra string
void CadastraString(char string[]){
    fgets(string, MAX_string, stdin);
    util_removeQuebraLinhaFinal(string);
}

//função q cadastra 1 float
void CadastraFloat(float * variavel){
    printf(": ");
    scanf("%f%*c", variavel);
}

//função q cadastra 1 ingrediente
void CadastraIngrediente(T_ingrediente * ingrediente){
    
    printf("digite o nome do ingrediente");
    CadastraString(ingrediente->nome);
    printf("digite a quantidade");
    CadastraFloat(&ingrediente->quantidade);
    printf("digite a unidade");
    CadastraString(ingrediente->unidade);
    
}

//função q cadastra N ingredientea
void CadastraIngredientes(T_receita * receita){
    int i;
    printf("RECEITA: %s", receita->nome);
    printf("digite a quantiade de ingredientes");
    scanf("%d%*c", receita->qnt_ingredientes);
    while(receita->qnt_ingredientes <= 0){
        printf("tamanho invalido!: ");
        scanf("%d%*c", receita->qnt_ingredientes);
    }
    receita->ingredientes = AlocaIngrediente(receita->qnt_ingredientes);
    for(i=0; i<receita->qnt_ingredientes; i++){
        CadastraIngrediente(&receita->ingredientes[i]);
    }
}

//Função que cadastra 1 receita
void CadastraReceita(T_receita * receita){
    printf("digite o codigo");
    CadastraInt(&receita->codigo);
    printf("digite o nome");
    CadastraString(receita->nome);
    printf("digite a categoria");
    CadastraString(receita->categoria);
    printf("digite os ingredientes\n");
    CadastraIngredientes(receita);
}

void ImprimeReceita(T_receita * receita){
    
}


int main(){
    int menu, D1=0;
    T_receita * receita=NULL;
    
    do{
        printf("1. Nova receita\n");
        printf("2. imprimir receitas\n");
        printf("3. buscar receitas\n");
        printf("0.sair\n");
        scanf("%d", &menu);
        
        switch(menu){
            case 1:
                D1++;
                receita = AlocaReceita(D1, receita);
                CadastraReceita(&receita[D1-1]);
            break;
            
            case 2:
                if(D1 !=0){
                    
                } else {
                    printf("nenhuma receita cadastrada\n");
                }
            break;
            
            case 3:
            
            break;
            
            default:
                printf("opcao invalida\n");
            break;
        }
    }while(menu != 0);
    
    
    return FROG;
}