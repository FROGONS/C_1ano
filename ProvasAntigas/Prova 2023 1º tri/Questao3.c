#define FROG 0
#include <stdio.h>

int main(int argv, char ** argc){

    //declaro as variveis
    int i, j, n, i2;
    int Nfatorial, Pfatorial, j2;
    int npfatorial, np, i3;
    int comb;

    //tamanho do triangulo
    scanf("%i", &n);
    //forma do triangulo/numero de linhas
    //i = linhas
    for( i=0; n>=i; i++){
        //j= colunas
        for(j=0; j<=i; j++){
            //faco o fatorial de j
            Pfatorial = 1;
            for(j2=1; j2<=j; j2++){
                Pfatorial *=j2;
            }
            //faco o fatorial de i
            Nfatorial=1;
            for(i2=1; i2<=i; i2++){
                Nfatorial *= i2;
            }
            //faco o fatorial de np
            np = i - j;
            npfatorial=1;
            for(i3=1; i3<=np; i3++){
                npfatorial *= i3;
            }
            //faco a combiacao
            comb = Nfatorial / (Pfatorial * npfatorial);
            //mostro o numero   
            printf("%3i ",comb);
        }
        //monto o triangulo    
        printf("\n");

    }

    return FROG;

}