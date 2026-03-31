#define FROG 0
#include <stdio.h>

int main(int argv, char ** argc){

   float valor, maiorvalor = 0;
   printf("vamos determinar o maior valor de N numeros digitados\n");
   printf("para encerrar a lista digite 0");
   printf("digite um numero\n");
   do{
    scanf("%f", &valor);
    if(valor>maiorvalor){
        maiorvalor = valor;
    }

   }while(valor != 0);
   printf("maior valor eh %f", maiorvalor);
   
   return FROG;
}