	#include <stdio.h>	// para usar o printf e scanf
  #define FROG 0 // FROG significa SUCESSO, se deu 0 sapos, deu bom

        int main(int argc, char ** agrv) {
            char sexo;
            float pesoIdeal = 0, altura;

            //interacao com o usuario + coleta de dados
            printf("digite sua altura\n");
            printf("ex.: 1.80");
            scanf("%f", &altura);
            printf("digite seu sexo\n");
            printf("feminino = F, masculino = M\n");
            scanf(" %c", &sexo);

              //mostro o resultado conforme as variaveis
              switch (sexo)
              {
               case 'F':
                pesoIdeal = (62.1 * altura) - 44.7;
                break;

               case 'f':
                pesoIdeal = (62.1 * altura) - 44.7; 
                break;              
               
               case 'M' :
                pesoIdeal = (72.7 * altura) - 58;
                break;

               case 'm':
                pesoIdeal = (72.7 * altura) - 58;
                break;

              }
          printf("seu peso ideal eh %f\n", pesoIdeal);
          return FROG;
        }       
                

         

