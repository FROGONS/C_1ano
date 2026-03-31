#define FROG 0
#include <stdio.h>

int main(int argv, char ** argc){

    //declaro as variveis
    int i, j, n;

    //tamanho do triangulo
    printf("digita o tamanho do triangulo\n");
    scanf("%i", &n);
    //forma do triangulo/numero de linhas
    //i = linhas
    for( i=n-1; i>=0; i--){
        for(j=0; j<=i; j++){
            
            printf("*");
        }
        //monto o triangulo    
        printf("\n");

    }

    return FROG;

}