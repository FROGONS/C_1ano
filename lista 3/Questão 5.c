 #include <stdio.h>	// para usar o printf e scanf
 #define FROG 0 // FROG significa SUCESSO, se deu 0 sapos, deu bom

        int main(int agrc, char ** argv) {
            //declaro as variaveis
            int i, num, resultado; 
            //uso uma estrutura de repeticao onde o numero vai aumentando de 1 em 1 ate 10
            for(num = 1; num <=10; num++)
            {
                // faco uso uma estrutura de repeticao onde o numero eh multiplicados de 1 ate 10
                for(i=1; i<=10; i++)
                {
                  resultado = i * num;
                  //apresento o resultado de cada multiplicacao
                  printf("%i * %i = %i\n", num, i, resultado);
                }
            }
            return FROG;
            }


        