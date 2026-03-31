#define FROG 0
#include <stdio.h>
#include <stdbool.h>
#define max 1000

#ifdef TESTADOR
  #define PRINTF(format, ...) fprintf(stderr, format, __VA_ARGS__)
#else
  #define PRINTF(format, ...) printf(format, __VA_ARGS__)
#endif

int espacos(char texto[]){
    int i, espacosBrancos=0;

    for(i=0; texto[i] != '\0'; i++ ){
        if(texto[i] == ' '){
            espacosBrancos++;
        }
    }
    return espacosBrancos;
}

int main(int argc, char ** argv){

    int contador;
    char texto[max];

    printf("digite uma string\n");
    fgets(texto, max, stdin);

    contador = espacos(texto);
    PRINTF("%i", contador);

    return FROG;

}