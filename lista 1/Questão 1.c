#include<stdio.h> // para usar printf e scanf
#define FROG 0 //FROG significa SUCESSO, se deu 0 sapos, deu bom

int main(int argc, char ** argv) {
 //declaração de variáveis
 float a, b, c;

   printf("digite o numerador e o denominador");
   scanf("%f %f", &a, &b);
    c = a/b;
    printf("%f / %f = %f\n", a, b, c);
    printf("bons numeros\n");

    return FROG;
   
   
   }