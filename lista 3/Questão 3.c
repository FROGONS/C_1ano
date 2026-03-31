 #include <stdio.h>	// para usar o printf e scanf
 #define FROG 0 // FROG significa SUCESSO, se deu 0 sapos, deu bom

        int main(int agrc, char ** argv) {
            //declaro as variaveis
            int i, num, resultado;
            // interacao com o usuario + coleta das variaveis
            printf("digite um numero para vermos sua tabuada\n");
            scanf("%i", &num); 

            // faco uso uma estrutura de repeticao onde o resultado eh multiplicados de 1 ate 10
            for(i=1; i<=10; i++)
            {
               resultado = i * num;
               //mostro o resultado de cada uma das operacoes ao usuario
               printf("%i * %i = %i\n", num, i, resultado);
            }
            printf("essa eh a tabuada do %i", num);
            return FROG;
        }