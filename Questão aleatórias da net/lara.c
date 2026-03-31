//Menu lista 9




#include <stdio.h>
#define SUCESSO 0
#include <stdlib.h>
#include <float.h> //para ex. 4




//--------------------------------------------------------------------------------------------------------------------------------------




//funcoes questao 1: alocar vetor de numeros inteiros

int * alocarVetorInteiro(int * vetor, int D1){
    vetor = (int *)malloc(D1 * sizeof(int));
    return vetor;
}

void leVetorInteiro(int * vetor, int D1){
    int i;
    for(i=0; i<D1; i++){
        printf("Digite posicao %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
}

void imprimeVetorInteiro(int * vetor, int D1){
    int i;
    for(i=0; i<D1; i++){
        printf("Posicao %d: %d\n", i+1, vetor[i]);
    }
}

void liberaVetorInteiro(int * vetor){
    free(vetor);
}

//void que chama funcoes de ex. 1

void exercicio_1(){

    int * vetor;
    int tamanho_vetor;
    
    printf("\n");
    printf("Questão 1: alocando vetor de numeros inteiros. \n");
    printf("Digite tamanho de vetor: ");
    scanf("%d", &tamanho_vetor);

    vetor = alocarVetorInteiro(vetor, tamanho_vetor);
    
    leVetorInteiro(vetor, tamanho_vetor);
    imprimeVetorInteiro(vetor, tamanho_vetor);
    liberaVetorInteiro(vetor);
    printf("\n");
}




//--------------------------------------------------------------------------------------------------------------------------------------




//funcoes questao 2: alocar matriz de numeros reais

float ** alocaMatrizPontoFlutuante(float ** matriz, int D1, int D2){
    int i;
    matriz = (float **)malloc(sizeof(float *) * D1);
    for(i=0; i<D1; i++){
        matriz[i] = (float *)malloc(sizeof(float) * D2);
    }
    return matriz;
}

void leMatrizPontoFlutuante(float ** matriz, int D1, int D2){
    int i, j;
    for(i=0; i<D1; i++){
        printf("Linha %d. \n", i+1);
        for(j=0; j<D2; j++){
            printf("Numero coluna %d: ", j+1);
            scanf("%f", &matriz[i][j]);
        }
    }  
}

void imprimeMatrizPontoFlutuante(float ** matriz, int D1, int D2){
    int i, j;
    for(i=0; i<D1; i++){
        for(j=0; j<D2; j++){
        printf("Linha %3d, coluna %2d: %6.2f \n", i+1, j+1, matriz[i][j]);
        }
    }
}

void liberaMatrizPontoFlutuante(float ** matriz, int D2){
    int i;
    for(i=0; i<D2; i++){
        free(matriz[i]);
    }
    free(matriz);
}

//void que chama funcoes de ex. 2

void exercicio_2(){
    int n_Linhas, n_Colunas;
    float ** matriz;

    printf("\n");
    printf("Questao 2: alocando matriz de numeros reais. \n");
    printf("Digite numero de linhas: ");
    scanf("%d", &n_Linhas);
    printf("Digite numero de colunas: ");
    scanf("%d", &n_Colunas);

    matriz = alocaMatrizPontoFlutuante(matriz, n_Linhas, n_Colunas);
    
    leMatrizPontoFlutuante(matriz, n_Linhas, n_Colunas);
    imprimeMatrizPontoFlutuante(matriz, n_Linhas, n_Colunas);
    liberaMatrizPontoFlutuante(matriz, n_Colunas);
    printf("\n");
}




//--------------------------------------------------------------------------------------------------------------------------------------




//funcoes questao 3: alocar vetor de {tipo qualquer} e calcular media

float * alocaVetorPontoFlutuante(float * vetor, int D1){
    vetor = (float *)malloc(sizeof(float) * D1);
    return vetor;
}

void leVetorPontoFlutuante(float * vetor, int D1){
    int i;
    for(i=0; i<D1; i++){
        printf("Digite posição %d: ", i+1);
        scanf("%f", &vetor[i]);
    }
}

void fazMedia(float * vetor, int D1, float soma, float media){
    int i;
    for(i=0; i<D1; i++){
        soma += vetor[i];
    }
    printf("Media eh %f \n", soma/D1);
}

void liberaVetorPontoFlutuante(float * vetor){
    free(vetor);
}

//void que chama funcoes de ex. 3

void exercicio_3(){
    float soma=0, media;
    float * vetor;
    int tamanho_vetor;
    
    printf("\n");
    printf("Questao 3: alocando vetor de tipo qualquer e calculando media. \n");
    printf("Digite tamanho de vetor: ");
    scanf("%d", &tamanho_vetor);

    vetor = alocaVetorPontoFlutuante(vetor, tamanho_vetor);
    
    leVetorPontoFlutuante(vetor, tamanho_vetor);
    fazMedia(vetor, tamanho_vetor, soma, media);
    liberaVetorPontoFlutuante(vetor);
    printf("\n");
}




//--------------------------------------------------------------------------------------------------------------------------------------




//funcoes questao 4: alocar vetor de numeros reais e descubrir qual eh o maior elemento do vetor

float * alocaVetorPontosFlutuantes(float * vetor, int D1){
    vetor = (float *)calloc(sizeof(float), D1);
    return vetor;
}

int leVetor_defineMaior(float * vetor, int D1, float  maior, int indice){
    int i;
    vetor[0] = maior;
    for(i=1; i<=D1; i++){
        printf("Digite posicao %d: ", i);
        scanf("%f", &vetor[i]);
        
        if(vetor[i] > vetor[0]){
            vetor[0] = vetor[i];
            indice = i;
        }
    }
    return indice;
}

void imprimeMaior(float * vetor, int indice){
    printf("Maior: %f \n", vetor[0]);
    printf("Indice: %d \n", indice);
}

void liberaVetorPontosFlutuantes(float * vetor){
    free(vetor);
}

//void que chama funcoes de ex. 4

void exercicio_4(){
    float * vetor;
    int tamanho_vetor;
    float maior = -FLT_MAX; //menor num de float
    int indice;
    
    printf("\n");
    printf("Questao 4: alocando vetor de numeros reais e descubrindo qual eh o maior elemento do vetor. \n");
    printf("Qual o tamanho do vetor: ");
    scanf("%d", &tamanho_vetor);

    vetor = alocaVetorPontosFlutuantes(vetor, tamanho_vetor);
    
    indice = leVetor_defineMaior(vetor, tamanho_vetor, maior, indice);
    imprimeMaior(vetor, indice);
    liberaVetorPontosFlutuantes(vetor);
    printf("\n");  
}




//--------------------------------------------------------------------------------------------------------------------------------------




//funcoes questao 5:

float ** alocaMatriz(float ** matriz, int D1, int D2){
    int i;
    matriz = (float **)malloc(sizeof(float *) * D1);
    for(i=0; i<D2; i++){
        matriz[i] = (float *)malloc(sizeof(float) * D2);
    }
    return matriz;
}

void leMatriz(float ** matriz, int D1, int D2){
    int i, j;
    for(i=0; i<D1; i++){
        printf("Linha %d. \n", i+1);
        for(j=0; j<D2; j++){
            printf("Digite numero de coluna %d: ", i+1);
            scanf("%f", &matriz[i][j]);
        }
    }
}

float calculaSoma(float ** matriz, int D1, int D2, float soma){
    int i, j;
    for(i=0; i<D1; i++){
        for(j=0; j<D2; j++){
            soma += matriz[i][j];
        }
    }
    return soma;
}

void imprimeSoma(float soma){
    printf("Soma é %f \n", soma);
}

void liberaMatriz(float ** matriz, int D2){
    int i;
    for(i=0; i<D2; i++){
        free(matriz[i]);    
    }
    free(matriz);
}

//void que chama funcoes de ex. 5

void exercicio_5(){
    float ** matriz;
    float soma=0;
    int n_Linhas, n_Colunas;

    printf("\n");
    printf("Questão 5: alocando uma matriz e calculando a soma dos elementos. \n");
    printf("Digite numero de linhas: ");
    scanf("%d", &n_Linhas);
    printf("Digite numero colunas: ");
    scanf("%d", &n_Colunas);

    matriz = alocaMatriz(matriz, n_Linhas, n_Colunas);
    
    leMatriz(matriz, n_Linhas, n_Colunas);
    soma = calculaSoma(matriz, n_Linhas, n_Colunas, soma);
    imprimeSoma(soma);
    liberaMatriz(matriz, n_Colunas);
    printf("\n"); 
}




//--------------------------------------------------------------------------------------------------------------------------------------




//funcoes questao 6:

int ** alocaMatrizInteiro(int ** matriz, int D1, int D2){
    int i, j;
    matriz = (int **)malloc(sizeof(int *) * D1);
    for(i=0; i<D1; i++){
        matriz[i] = (int *)malloc(sizeof(int) * D2);
    }
    return matriz;
}

int * alocaVetorInteiro(int * vetor, int D1){
    vetor = (int *)malloc(sizeof(int) * D1);
    return vetor;    
}

void leMatrizInteiro(int ** empresa, int D1, int D2){
    int i, j;
    for(i=0; i<D1; i++){
        printf("Loja %d. \n", i+1);
        for(j=0; j<D2; j++){
            printf("Digite quantidade do produto %d: ", j+1);
            scanf("%d", &empresa[i][j]);
        }
    }
}

void calculaProduto(int ** empresa, int D1, int D2, int * tot_produtos, int * tot_produtos_loja){
    int i, j;
    for(i=0; i<D1; i++){
        tot_produtos[i] = 0; 
        tot_produtos_loja[i] = 0; 
    }

    for(i=0; i<D1; i++){
        for(j=0; j<D2; j++){
            tot_produtos[j] += empresa[i][j];
        }
    }

    for(i=0; i<D1; i++){
        for(j=0; j<D2; j++){
            tot_produtos_loja[i] += empresa[i][j];
        }    
    }
    
    for(i=0; i<D2; i++){
    printf("Total produtos %d: %d \n", i+1, tot_produtos[i]);
    }    
    
    for(i=0; i<D1; i++){
        printf("Total produtos de loja %d: %d \n", i+1, tot_produtos_loja[i]);
    }
        
}

void defineMenorEstoque(int ** empresa, int D1, int * tot_produtos_loja, int indice_menor_estoque, int menorint){
    int i;
    for(i=0; i<D1; i++){
        if(tot_produtos_loja[i]<menorint){
            menorint = tot_produtos_loja[i];
            indice_menor_estoque = i;
        }
    }
    printf("Loja de menor estoque é a %d. \n", indice_menor_estoque+1);
}

void libera(int ** empresa, int * tot_produtos, int * tot_produtos_loja, int D2){
    int i;
    for(i=0; i<D2; i++){
        free(empresa[i]);
    }
    free(empresa);

    free(tot_produtos);

    free(tot_produtos_loja);
}

//void que chama funcoes de ex. 6

void exercicio_6(){
    int ** empresa;
    int n_Empresas, n_Produtos;
    int * tot_produtos; //total de um produto   
    int * tot_produtos_loja; //soma de todos os produtos de uma loja
    int indice_menor_estoque;
    int menorint = 2147483647;
    
    printf("\n");
    printf("Questao 6: lendo a quantidade X de produtos que uma empresa tem em suas Y lojas. \n");
    printf("Quantas lojas são: ");
    scanf("%d", &n_Empresas);
    printf("Quantos produtos são: ");
    scanf("%d", &n_Produtos);

    empresa = alocaMatrizInteiro(empresa, n_Empresas, n_Produtos);
    tot_produtos = alocaVetorInteiro(tot_produtos, n_Empresas);
    tot_produtos_loja = alocaVetorInteiro(tot_produtos_loja, n_Empresas);

    leMatrizInteiro(empresa, n_Empresas, n_Produtos);
    calculaProduto(empresa, n_Empresas, n_Produtos, tot_produtos, tot_produtos_loja);
    defineMenorEstoque(empresa, n_Empresas, tot_produtos_loja, indice_menor_estoque, menorint);
    libera(empresa, tot_produtos, tot_produtos_loja, n_Produtos);
    printf("\n");
}




//--------------------------------------------------------------------------------------------------------------------------------------------




int main(int argc, char ** argv){
    int opcao;

 //menu    
 do{ 
        printf("Escolha uma opcao: \n");
        printf("1 - exercicio 1\n");
        printf("2 - exercicio 2\n");
        printf("3 - exercicio 3\n");
        printf("4 - exercicio 4\n");
        printf("5 - exercicio 5\n");
        printf("6 - exercicio 6\n");
        printf("0 - sair\n");
        scanf("%d%*c", &opcao);

        switch(opcao){

            case 1:
            exercicio_1();
            break;

            case 2:
            exercicio_2();
            break;    

            case 3:
            exercicio_3();
            break;   

            case 4:
            exercicio_4();
            break;

            case 5:
            exercicio_5();
            break;

            case 6:
            exercicio_6();
            break;

            case 0: 
            break;  

            default:
            printf("Opcao invalida. \n");
            break; 

        }
        
    } while (opcao != 0);


 return SUCESSO;
}
