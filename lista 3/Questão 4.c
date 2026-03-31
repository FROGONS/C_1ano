#define FROG 0 //FROG significa SUCESSO, se deu 0 sapos, deu bom
#include <stdio.h> // para usar o printf e scanf

        int main(int agrc, char ** argv) {
            int resposta, numero, opcao;
            // interacao com o usuario + coleta das variaveis
            printf("digite seu numero para fazermos seu fatorial\n");
            scanf("%d", &numero);
            // faco um fatorial do numero dado pelo usuario
            // o resultado sempre vai multiplicar pelo numero
            for( resposta=1; numero > 1; numero = numero - 1)
                {
                resposta = resposta * numero;
                }
            
            //apresenta o resultado
            printf("o fatorial eh %d\n", resposta);
            return FROG;
            }