#define FROG 0 //
#include <stdio.h>
//funcao q faz o fatorial de um numero
int fatorial(int num){
        int i;
        int fatorial=1;
        for(i=1; i<=num; i++){
            fatorial *= i;
        }
        return fatorial;
    }
//funcao q realiza a formula de combinacao
int comb(int fatorial1, int fatorial2, int fatorial3){
    int resultado;
    resultado = fatorial1 / (fatorial2 * fatorial3);
    return resultado;
}


int main(int argv, char ** argc){

    //declaro as variveis
    int i, j, n, i2;
    int Nfatorial, Pfatorial, j2;
    int npfatorial, np, i3;
    int elemento;

    //tamanho do triangulo
    scanf("%i", &n);
    //forma do triangulo/numero de linhas
    //i = linhas
    for( i=0; n>=i; i++){
        //j= colunas
        for(j=0; j<=i; j++){
            //faco o fatorial de j
            Pfatorial = fatorial(j);
            //faco o fatorial de i
            Nfatorial = fatorial(i);
            //faco o fatorial de np
            np = i - j;
            npfatorial = fatorial(np);
            //faco a combiacao
            elemento = comb(Nfatorial, Pfatorial, npfatorial);
            //mostro o numero   
            printf("%3i ",elemento);
        }
        //monto o triangulo    
        printf("\n");

    }

    return FROG;

}