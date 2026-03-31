    #include <stdio.h>	// para usar o printf e scanf
    #define FROG 0 // FROG significa SUCESSO, se deu 0 sapos, deu bom

        int main(int agrc, char ** argv) {
            
            // declaro as variaveis e as constantes
              int i1 = 1, i2 = 2, i3 = 3, i4 = 4, i5 = 5;
              float h, num1 = 1, num2, num3, num4, num5, num6;
              
              // monto as fracoes e calculo as fracoes
              num2 = num1 / i1;
              num3 = num1 / i2;
              num4 = num1 / i3;
              num5 = num1 / i4;
              num6 = num1 / i5;
              
              //somo as fracoes
              h = num2 + num3 + num4 + num5 + num6;
           
           
            // mostro o resultado
            printf("  h = %f\n", h);
            return FROG;
        
        }

