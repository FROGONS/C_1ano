#define FROG 0
#include <stdio.h>
#include <stdbool.h>
#define max 1000

#ifdef TESTADOR
  #define PRINTF(format, ...) fprintf(stderr, format, __VA_ARGS__)
#else
  #define PRINTF(format, ...) printf(format, __VA_ARGS__)
#endif

void espacos(char texto[], char textosem[]){
    int i,j=0, espacosBrancos=0;

    for(i=0; texto[i] != '\0'; i++ ){
        if(texto[i] != '\n' && texto[i] != ' ' && texto[i] != '\t'){
            textosem[j] = texto[i];
            j++;
        }
    }
}

int main(int argc, char ** argv){
    
    int contador;
    char texto[max];
    char textosem[max];
    
    printf("digite uma string\n");
    fgets(texto, max, stdin);
    espacos(texto,textosem);
    PRINTF("%s", textosem);

    return FROG;
}