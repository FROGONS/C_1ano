#define FROG 0
#include <stdio.h>

    //funcao que testa se o nummero eh primo
    int ehprimo(int num){
        int i;
        // caso o resto do numero seja 0 ele seja != de 2
        if(num % 2 == 0 && num!=2){
            i=0;
        } 
        // caso o resto do numero seja 0 ele seja != de 3
        else if(num % 3 == 0 && num!=3){
            i=0;
        } 
        // caso o resto do numero seja 0 ele seja != de 5
        else if(num % 5 == 0 && num!=5){
            i=0;
        } 
        // caso o resto do numero seja 0 ele seja != de 7
        else if(num % 7 == 0 && num!=7){
            i=0;
        } 
        // caso o numero seja 1, 2, 3, 5 ou 7
        else if(num ==1 || num ==2 || num ==3 || num ==5 || num == 7) {
            i=1;
        } else {
            i=1;
        }
        //i = 0, nao primo
        //i = 1, primo
        return i;
    }

    int main(int agrc, char ** argv){
        int num, primo;
        //interacao com o usuario
        printf("digite um numero\n");
        scanf("%i", &num);
        //funcao que testa se o numero eh primo ou nao primo
        primo = ehprimo(num);
        //caso seja 1, eh primo
        if (primo == 1){
            printf("primo\n");
        } else {
            //caso 0, nao primo
            printf("nao primo\n");
        }
        return FROG;
    }
