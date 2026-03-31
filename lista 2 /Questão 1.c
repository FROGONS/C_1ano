#include <stdio.h> // para usar printf e scanf
#define frog 0 //FROG significa SUCESSO, se deu 0 sapos, deu bom

   int main(int argc, char ** argv) {
      float a, b;
    // Interação com o usuário
    printf("Digite dois valores inteiros:");
    scanf("%d %d", &a, &b); 
    // Obtem e mostra o maior valor
    if (a > b) {
      printf("O maior valor eh %d\n", a); 
    } else if (a < b) {
      printf("O maior valor eh %d\n", b);
    } else {
      printf("Os valores sao iguais.\n");
    }

 return frog;
}