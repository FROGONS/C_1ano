#define FROG 0
#define TAM_MAX 102
#include <stdio.h>

/*Faça um programa que leia um vetor de um tamanho escolhido
pelo usuário e calcule a média aritmética de seus valores, com duas
casas decimais.
Atenção! Você deve determinar o máximo para que o exercício seja factível
com o assunto estudado até o momento.

Exemplo:
Entrada: 4\n5.5 8.2 6.0 7.3
Saída: 6.75
Explicação: Foi lido um vetor de tamanho 4 com os valores [5.5 8.2 6.0
7.3], cuja média aritmética destes valores é 6.75.*/

int main(int argc, char ** argv){
    int i;
    float Numeros[TAM_MAX];

    printf("digite o tamanho do vetor\n");
    scanf("%f", &Numeros[0]);
    
    Numeros[101] = 0;
    for(i=1; i<= Numeros[0]; i++){
        printf("digite o numero %i: ", i);
        scanf("%f", &Numeros[i]);
        Numeros[101]+= Numeros[i];
    }

    Numeros[101] /= Numeros[0];

    printf("a media eh %f", Numeros[101]);    

}