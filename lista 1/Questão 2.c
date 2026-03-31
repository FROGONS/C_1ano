	#include <stdio.h>	// para usar o printf e scanf
    #define FROG 0 // FROG significa SUCESSO, se deu 0 sapos, deu bom

     int main(int argc, char ** argv) {
       
           int valor1, valor2, valor3, valor4, valor5, total;

    //inicio da interacao com o usuario
   printf("digite 5 valores inteiros ");
   //coleta dos numeros
   scanf("%d %d %d %d %d", &valor1, &valor2, &valor3, &valor4, &valor5 );
    total = valor1 + valor2 + valor3 + valor4 + valor5;
    // mostra ao usuario a soma de 5 valores
    printf("%d + %d + %d + %d + %d = %d\n", valor1, valor2, valor3, valor4, valor5, total);
    printf("bons numeros\n");

    return FROG;


     }
   
