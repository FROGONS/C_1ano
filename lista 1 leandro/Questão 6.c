 #include <stdio.h>	// para usar o printf e scanf
 #define FROG 0 // FROG significa SUCESSO, se deu 0 sapos, deu bom

    int main(int agrc, char ** agrv ) {
        float a, b, c;

            //inicio da interacao com o usuario
            printf("digite o numerador e o denominador");
           //coleta dos numeros
            scanf("%f %f", &a, &b);
            //realizo a operacao
            c = a/b;
            //mostro ao usuario o resultado
            printf("%0.3f / %0.3f = %0.3f\n", a, b, c);
            printf("bons numeros\n");
            
            } 