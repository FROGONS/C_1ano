    #include <stdio.h>	// para usar o printf e scanf
    #define FROG 0 // FROG significa SUCESSO, se deu 0 sapos, deu bom

        int main(int agrc, char ** argv) {
            
            float valor1, valor2, valor3, valor4, valor5, valor6, total;
               //inicio da interacao com o usuario
                printf("digite 6 salarios: \n");
                printf(" ex.: 1200 9000 4680 1390.56 3790.89\n");
                //coleta dos numeros
                scanf("%f %f %f %f %f %f", &valor1, &valor2, &valor3, &valor4, &valor5, &valor6);
                  //realiza a soma dos valores e depois realiza a media aritimetica
                  total = valor1 + valor2 + valor3 + valor4 + valor5 + valor6;
                  total = total/6;
                
                // mostra ao usuario a a media dos 6 salarios
                printf("sua media salarial eh: %f\n", total);
                
                return FROG;
            }
        