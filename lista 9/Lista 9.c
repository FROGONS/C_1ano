#define FROG 0
#include <stdio.h> //Para usar printf, scanf, etc
#include <stdlib.h> //para usar malloc, calloc, etc
#include <float.h> // Para usar -INFINITY

// Questao 1

/*Faça uma função que aloque dinamicamente um vetor de
inteiros. Essa função deve receber como parâmetro um inteiro
representando o tamanho do vetor e retornar um ponteiro com o endereço
inicial do vetor alocado.*/

int * AlocaInt(int tamanho){
    return (int*)calloc(tamanho, sizeof(int));
}

//funcao principal
void Q1(){
    int * vetor = NULL;
    int tamanho;

    printf("digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = AlocaInt(tamanho);

    free(vetor);
}

//Questao 2

/*Faça uma função que aloque dinamicamente uma matriz de
números reais. Essa função deverá receber como parâmetro dois números
inteiros representando o tamanho da matriz e retornar um ponteiro com o
endereço inicial da matriz.*/

//funcao que aloca matriz de reais;
float ** AlocaMatriz(float ** matriz, int D1, int D2){
    int i;
    matriz = (float**)malloc(sizeof(float*) * D1);

    for(i=0; i<D1; i++){
        matriz[i] = (float*)malloc(sizeof(float));
    }
    return matriz;
}

//funcao que libera matriz
void LiberaMatriz(void ** matriz, int tamanho){
    int i;
    for(i=0; i<tamanho; i++){
        free(matriz[i]);
    }
    free(matriz);
}

//funcao principal
void Q2(){
    int D1 = 0, D2 = 0; //tamanho da matriz
    float ** matriz = NULL;

    //tamanho nunca pode ser = 0
    while(D1 == 0 || D2 == 0){
        printf("digite a d1 e d2 da matriz: ");
        scanf("%d %d", &D1, &D2);
    }

    matriz = AlocaMatriz(matriz, D1 , D2);
    LiberaMatriz((void**)matriz, D1);
}


//QUESTAO 3

/*Faça uma função que leia um vetor de um tamanho qualquer.
Faça uma função que recebe um vetor e calcule e média aritmética dos
elementos desse vetor.*/

//funcao que guarda 1 float
void GuardaFloat(float * variavel){
    scanf("%f", variavel);
}

//Funcao que le o vetor
void LeVetor(int tamanho, float * vetor){
    int i;
    for(i=0; i<tamanho; i++){
        printf("digite o elemento %d: ", i+1);
        GuardaFloat(&vetor[i]);
    }
}

//Funcao que imprime media

void imprimeMedia(float * vetor, int tamanho){
    int i;
    float media=0;

    for(i=0; i<tamanho; i++){    
        media += vetor[i];
    }
    media /= tamanho;
    printf("a media eh: ");
    printf("%.1f", media);
    printf("\n");
}

//funcao principal
void Q3(){
    float * vetor = NULL;
    int tamanho = 0;
    while(tamanho == 0){
        printf("digite o tamanho do vetor: ");
        scanf("%d", &tamanho);
        if (tamanho <= 0) {
            printf("Tamanho inválido. Deve ser maior que 0\n");
        }
    }

    vetor = (float*)malloc(sizeof(float) * tamanho);
    LeVetor(tamanho, vetor);
    imprimeMedia(vetor, tamanho);
    free(vetor);
}


// Questao 4

/*Faça uma função que leia um vetor de números reais de
tamanho escolhido pelo usuário e descubra qual é o maior elemento do
vetor, junto com seu índice.
Essa função deve receber um endereço onde o maior valor será guardado e
deve retornar o índice onde foi encontrado.
Assuma que esse vetor nunca possa estar vazio!*/

//funcao que encontra o maior elemento
void EncontraMaior(float * vetor, int tamanho){
    
    float maior = -1e30; //menor float
    //tentei usar '-INFINITY' da biblioteca float.h, mas o programa nao compilava
    int i, indice;
    
    for(i=0; i<tamanho; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            indice = i;
        }
    }

    printf("o maior eh %f e seu indice eh %d\n", maior, indice);
}

//funcao principal
void Q4(){
    
    float * vetor = NULL;
    int tamanho=0;
    
    while(tamanho == 0){
        printf("digite o tamanho do vetor: ");
        scanf("%d", &tamanho);
        
        if (tamanho <= 0) {
            printf("Tamanho inválido. Deve ser maior que 0\n");
        }
    }

    vetor = (float*)malloc(tamanho * sizeof(float));
    
    //funcao que le vetor(Questao 3)
    LeVetor(tamanho, vetor);
    EncontraMaior(vetor, tamanho);
    
    free(vetor);

}

//questao 5

/*Implemente uma função que receba uma matriz de dimensões
quaisquer N x M e retorne a soma dos elementos dessa matriz. Assuma que
essa matriz seja alocada dinamicamente.*/

//funcao que imprime vetor de float

void ImprimeVetor(float * vetor, int tamanho){
    int i;
    printf("[");
    for(i=0; i<tamanho; i++){
        printf("%f, ", vetor[i]);
    }
    printf("]");
}

//funcao que soma as matrizes
void SomaMatriz(float ** matriz1, float ** matriz2, int D1, int D2){
    float ** resultado;
    int i, j;

    //funcao que aloca matriz do tipo float
    resultado = AlocaMatriz(resultado, D1, D2);

    //faz a soma das matrizes (elemento 1 da matriz 1 + elemento 1 da matriz 2....)
    for(i=0; i<D1; i++){
        for(j=0; j<D2; j++){
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    //imprime a matriz 1
    printf("matriz 1:\n");
    printf("{");
    for(i=0; i<D1; i++){
        ImprimeVetor(matriz1[i], D2);
        printf("\n");
    }
    printf("}");
    printf("\n");

    // imprime a segunda matriz
    printf("matriz 2:\n");
    printf("{");
    for(i=0; i<D1; i++){
        ImprimeVetor(matriz2[i], D2);
        printf("\n");
    }
    printf("}");
    printf("\n");

    //imprime o resultado
    printf("a soma dessas matrizes eh:\n");
    printf("{");
    for(i=0; i<D1; i++){
        ImprimeVetor(resultado[i], D2);
        printf("\n");
    }
    printf("}");
    LiberaMatriz((void**)resultado, D1);
}

//funcao principal
void Q5(){
    float ** matriz1;
    float ** matriz2;
    int D1, D2; //tamanho das dimensoes das matrizes
    int i;

    while(D1 == 0 || D2 == 0){
        printf("digite o tamanho da dimensao 1 e 2 das matrizes: ");
        scanf("%d %d", &D1, &D2);
        
        if (D1 <= 0 || D2 <=0) {
            printf("Tamanho inválido. Deve ser maior que 0\n");
        }
    }

    //aloca memoria nas matrizes
    matriz1 = AlocaMatriz(matriz1, D1, D2);
    matriz2 = AlocaMatriz(matriz2, D1, D2);

    //Le as matrizes
    for(i=0; i<D1; i++){
        printf("linha %d da matriz 1 :\n", (i+1));
        LeVetor(D2, matriz1[i]);
    }

    for(i=0; i<D1; i++){
        printf("linha %d da matriz 2 :\n", (i+1));
        LeVetor(D2, matriz2[i]);
    }
    
    //Soma as matrizes
    SomaMatriz(matriz1, matriz2, D1, D2);
    
    //libera as matrizes
    LiberaMatriz((void**)matriz1, D1);
    LiberaMatriz((void**)matriz2, D1);
}

// Questao 6

/*Faça um programa que leia a quantidade de um total de X
produtos que uma empresa tem em suas Y lojas e imprimir em formato de
tabela:
• O total de cada produto nessas lojas
• A loja que tem menos produtos.*/

//funcao que aloca matriz de int
int ** AlocaMatrizInt(int ** matriz, int D1, int D2){
    int i;

    matriz = (int**)malloc(sizeof(int*) * D1);
    for(i=0; i<D1; i++){
        matriz[i] = (int*)malloc(D2 * sizeof(int));
    }

    return matriz;
}

//funcao que registra 1 int
void LeQuantidade(int * quantidade){
    printf("quantidade: ");
    scanf("%d", quantidade);
}

//funcao que Le um vetor de int
void LeNprodutos(int * Nprodutos, int D2){
    int i;

    for(i=0; i<D2; i++){
        printf("produto %i\n", (i+1));
        LeQuantidade(&Nprodutos[i]);
    }
}

//funcao que le uma matriz de int
void LeLojas(int ** lojas, int D1, int D2){
    int i;
    for(i=0; i<D1; i++){
        printf("loja %d\n\n", (i+1));
        LeNprodutos(lojas[i], D2);
    }
}

//Funcao que soma um produtos de uma loja
void SomaProdutos(int produto, int * TotalProdutos, int posicao) {
    TotalProdutos[posicao] += produto;
}

//funcao que soma os produtos de N lojas
void SomaLojas(int ** lojas, int * TotalProdutos, int D1, int D2){
    int i, j;
    for(j=0; j<D2; j++){
        for(i=0; i<D1; i++){
            SomaProdutos(lojas[i][j], TotalProdutos, j);
        }
    }
    
}

//imprime o total de 1 produto
void ImprimeTotalProduto(int TotalProdutos){
    printf("%9d", TotalProdutos);
}

//imprime 1 produto de uma loja
void ImprimeProduto(int lojas){
    printf("%9d ", lojas);
}

//imprime a loja com menos produtos;
void ImprimeMenorEstoque(int indice){
    printf("a loja %d eh a que possui menos produtos", (indice+1));
}

//funcao que imprime em tabela os N produos de N lojas
void ImprimeProdutos(int ** lojas, int D1, int D2, int indice, int * TotalProdutos){
    int i, j;
    printf("\n%-10s ", "produtos");
    printf("||");
    for(i=0; i<D1; i++){
        printf("%-6s", "loja");
        printf("%d ", (i+1));
        printf("||");
    }
    printf("total de produtos");
    printf("||\n\n");
    for(j=0; j<D2; j++){
        printf("produto %d: ", (j+1));
        for(i=0; i<D1; i++){
            ImprimeProduto(lojas[i][j]);
        }
        ImprimeTotalProduto(TotalProdutos[j]);
        printf("\n");
    }

    ImprimeMenorEstoque(indice);
    printf("\n");
}

//funcao que encontra loja com menos produtos daquele tipo
int EncontraMenosP(int ** lojas, int D1, int D2, int * Mprodutos){
    int menor = 2147483647; // tamanho do maior int
    int indice;
    int i, j;

    for(i=0; i<D1; i++){
        for(j=0; j<D2; j++){
            Mprodutos[i] += lojas[i][j];
        }
    }

    for(i=0; i<D1; i++){
        if(menor < Mprodutos[i]){
            menor = Mprodutos[i];
            indice = i;
        }
    }
    return indice;
}


void Q6(){
    
    int ** lojas;
    int Nlojas, Nprodutos;
    int * TotalProdutos; // total de produtos de cada loja
    int * Mprodutos; //total de produtos em cada loja
    int indice; // indice da loja com menos produtos

    printf("digite o numero de lojas: ");
    scanf("%d", &Nlojas);
    printf("digite o numero de produtos: ");
    scanf("%d", &Nprodutos);

    //aloca memoria
    TotalProdutos = AlocaInt(Nprodutos);
    lojas = AlocaMatrizInt(lojas, Nlojas, Nprodutos);
    //aloca memoria
    Mprodutos = AlocaInt(Nlojas);
    
    //leio as lojas
    LeLojas(lojas, Nlojas, Nprodutos);

    //soma os produtos das lojas
    SomaLojas(lojas, TotalProdutos, Nlojas, Nprodutos);

    // encontra a loja com menos produtos
    indice = EncontraMenosP(lojas, Nlojas, Nprodutos, Mprodutos);

    //imprime em tabela os produtos
    ImprimeProdutos(lojas, Nlojas, Nprodutos, indice, TotalProdutos);

    LiberaMatriz((void**)lojas, Nlojas);
}

// funcao que chama a funcao da Questao
void EscolheQuestao(int menu){
    switch (menu){
        case 0:
            printf("tchau\n");
            return;
        break;

        case 1:
            Q1();
            return;
        break;

        case 2:
            Q2();
            return;
        break;

        case 3:
            Q3();
            return;
        break;

        case 4:
            Q4();
            return;
        break;

        case 5:
            Q5();
            return;
        break;

        case 6:
            Q6();
            return;
        break;
        
        default:
            printf("opcao invalida\n");
        break;
    }
}

//funcao de menu
int Funcaomenu(){
    int menu;
    printf("\n1. Ex. 1\n");
    printf("2. Ex. 2\n");
    printf("3. Ex. 3\n");
    printf("4. Ex. 4\n");
    printf("5. Ex. 5\n");
    printf("6. Ex. 6\n");
    printf("0. sair\n");
    printf(": ");
    scanf("%d", &menu);
    return menu;
}

int main(int argc, char ** argv){
    int menu =1;
    while(menu != 0){
        menu = Funcaomenu();
        EscolheQuestao(menu);
    }

    return FROG;
}