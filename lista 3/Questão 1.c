#include <stdio.h>// para usar o printf e scanf
#include <stdbool.h>// para usar variaveis booleanas
#define FROG 0


int main(int agrc, char ** argv) {
    //declaro as variaveis
    int i;
    bool impar;

    //faco a estrutura de repeticao para passar por todos os numeros
    for (i = 0; i <=100; i++)
    {
     //avalio se o numero eh impar
     impar = ( (i % 2) == 1);
    // caso seja impar, ele mostrara o numero
     if (impar) {
        printf("%i eh impar\n", i);
     }
    }
    return FROG;
}
    

