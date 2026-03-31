/* Faça um programa que leia, via teclado, 20 valores do
tipo inteiro e determine qual o menor e o maior valor, além disso informe
o índice do menor e do maior.
Considere que todos os elementos possuem valores distintos.
Exemplo:
Entrada: 5 12 -3 8 20 1 99 -50 33 6 15 0 -8 42 17 7 28 -11 65 9
Saída: -50 7 99 6
Explicação: -50 é o menor valor e seu índice é o 7, 99 é o maior e seu
índice é o 6*/

#define FROG 0
//se nao deu sapos, deu bom
#include <stdio.h> // para usar printf/scanf
#define Numeros 20 // Quantidade de numeros

//rotina de testes
#ifdef TESTADOR
  #define PRINTF(format, ...) fprintf(stderr, format, __VA_ARGS__)
#else
  #define PRINTF(format, ...) printf(format, __VA_ARGS__)
#endif


int main(int argc, char ** argv){
    //declaro as variaveis
    int i, maior=-2147483648, menor=2147483647, Imaior, imenor;
    int num[Numeros];
    for(i=0; i<=Numeros; i++){
        //interacao com o usuario
        printf("digite o numero %i\n", (i + 1));
        scanf("%i", &num[i]);
        if(num[i] < menor){
            menor = num[i];
            imenor = i;
        }
        if(num[i] > maior){
            maior = num[i];
            Imaior = i;
        }
    }
    printf("%i eh o maior e seu indice eh %i\n", num[Imaior], (Imaior +1 ));
    printf("%i eh o menor e seu indice eh %i\n", num[imenor], (imenor + 1 ));
    
    return FROG;
}
