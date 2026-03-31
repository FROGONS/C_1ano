// Questao 6

/*Faça um programa que leia a quantidade de um total de X
produtos que uma empresa tem em suas Y lojas e imprimir em formato de
tabela:
• O total de cada produto nessas lojas
• A loja que tem menos produtos.*/

// Questao 1

/*Faça uma função que aloque dinamicamente um vetor de
inteiros. Essa função deve receber como parâmetro um inteiro
representando o tamanho do vetor e retornar um ponteiro com o endereço
inicial do vetor alocado.*/

int * AlocaInt(int tamanho){
    return (int*)calloc(tamanho, sizeof(int));
}


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
void SomaProdutos(int loja, int * TotalProdutos, int posicao){
    TotalProdutos[posicao] += loja;
}

//funcao que soma os produtos de N lojas
void SomaLojas(int ** lojas, int * TotalProdutos, int D1, int D2){
    int i, j;
    for(j=0; j<D2; j++){
        for(i=0; i<D1; i++){
            SomaProdutos(lojas[i][j], &TotalProdutos[j], j);
        }
    }
    
}

//imprime o total de 1 produto
void ImprimeTotalProduto(int TotalProdutos){
    printf("%d\n", TotalProdutos);
}

//imprime o total de N produtos
void Imprime_N_TotalProduto(int * TotalProdutos, int tamanho){
    int i;
    
    for(i=0; i<tamanho; i++){
        printf("produto %d : ", (i+1));
        ImprimeTotalProduto(TotalProdutos[i]);
    }
}

void Q6(){
    int ** lojas;
    int Nlojas, Nprodutos;
    int * TotalProdutos;
    printf("digite o numero de lojas: ");
    scanf("%d", &Nlojas);
    printf("digite o numero de produtos: ");
    scanf("%d", &Nprodutos);

    //aloca memoria
    TotalProdutos = AlocaInt(Nprodutos);
    lojas = AlocaMatrizInt(lojas, Nlojas, Nprodutos);
    
    //leio as lojas
    LeLojas(lojas, Nlojas, Nprodutos);

    //soma os produtos das lojas
    SomaLojas(lojas, TotalProdutos, Nlojas, Nprodutos);

    //imprime o total dos produtos
    Imprime_N_TotalProduto(TotalProdutos, Nprodutos);
}