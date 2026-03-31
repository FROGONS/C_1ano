#define FROG 0 
#include <stdio.h>

//funcao q calcula o numero de dias
int idade(int anos, int meses, int dias){
    int i, totaldias=0;
    //converte anos em dias
    for(i=1; i<=anos; i++){
        totaldias += 365;
    }
    //converte meses em dias
    for(i=1; i<= meses; i++){
        totaldias +=30;
    }
    //soma o numero de dias
    totaldias += dias;
    return totaldias;
}

int main(int agrc, char ** argv){
    int a, b, c;
    //interacao com o usuario
    printf("digite sua idade:");
    scanf("%i", &a);
    printf("quantos meses:");
    scanf("%i", &b);
    printf("quantos dias:");
    scanf("%i", &c);
    
    //calculo o numero de dias
    c = idade(a, b, c);
    //mostro o numero de dias
    printf("voce tem %i dias de idade", c);
    
}