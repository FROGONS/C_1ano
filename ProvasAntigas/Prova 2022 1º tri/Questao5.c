#define FROG 0
#include <stdio.h>

    int main(int agrc, char ** argv){
        
        int i, i2, resultado;
        
        //tabuada do 1 ate o 10
        for(i=0; i<=10; i++){
            for(i2=0; i2<=10; i2++){
                resultado = i * i2;
                printf("%3i * %3i = %3i\n", i, i2, resultado);
            }
        }
    }