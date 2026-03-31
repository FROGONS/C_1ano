#include <stdio.h>	// para usar o printf e scanf
 #define FROG 0 // FROG significa SUCESSO, se deu 0 sapos, deu bom

        int main(int agrc, char ** argv) {
            //declaro as variaveis
            int i, num, resultado;
            //interacao com os usuario + coleta de dados
            printf("digite um numero para vermos sua tabuada\n");
            scanf("%i", &num); 
            
            for(i=1; i<=10; i++)
            {
               resultado = i * num;
               printf("%i / %i = %i\n", resultado, i, num);
            }
            printf("essa eh a tabuada do %i\n", num);
            return FROG;
        }