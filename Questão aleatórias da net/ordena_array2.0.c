/*

INTRODUCAO:

Este programa recebe até 20 inteiros e ordena eles em ordem crescente 

*/

#include <stdio.h>
#define SUCESSO 0
#define MAX_int 20

void ordena(int inteiros[], int nint){
    int i, j;
    int temp;
    for(j=0; j < nint-1; j++){
        for(i=0; i < nint-1; i++){
            if(inteiros[i]>inteiros[i+1]){
                temp= inteiros[i+1];
                inteiros[i+1]= inteiros[i];
                inteiros[i]=temp;
            }
        }
    }
}

int main(int argc, char** argv){
    int j, k, nint;
    int inteiros[MAX_int];
    int intord[MAX_int];
    do{
        printf("Quantos inteiros voce quer digitar? Max = %i\n", MAX_int);
        scanf("%i", &nint);
        if(nint<=MAX_int){
            printf("Digite %i inteiros para ordena-los em ordem crescente\n", nint);//solicita os inteiros
            for(j=0; j<nint; j++){
                scanf("%i", &inteiros[j]);// armazena nas posicoes do array
            }
            ordena(inteiros, nint);// chama a funcao que ordena
            for(k=0; k<nint; k++){
                printf("%i ", inteiros[k]);// armazena nas posicoes do array
            }
        }else{
            printf("Numero maior do que %i, digite novaente\n", MAX_int);
        }
    }while(nint>MAX_int);
    return SUCESSO;// se chegou ate aqui eh porque ocorreu tudo bem 
}