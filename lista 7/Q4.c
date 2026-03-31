#define FROG 0
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define max 1000

#ifdef TESTADOR
  #define PRINTF(format, ...) fprintf(stderr, format, __VA_ARGS__)
#else
  #define PRINTF(format, ...) printf(format, __VA_ARGS__)
#endif

void util_removeQuebraLinhaFinal(char texto[]) {
    int tamanho;
    tamanho = strlen(texto);
    if ((tamanho > 0) && (texto[tamanho - 1] == '\n')) {
        texto[tamanho - 1] = '\0';
    }
}

void espacos(char texto[]){
    int i, espacosBrancos=0;

    for(i=0; texto[i] != '\0'; i++ ){
        if(texto[i] == ' '|| texto[i] == '\t'){
            texto[i+1] = toupper(texto[i+1]);
        }
    }
    texto[0] = toupper(texto[0]);

}   

int main(int argc, char ** argv){

    char texto[max];
    
    printf("digite uma string\n");
    fgets(texto, max, stdin);

    util_removeQuebraLinhaFinal(texto);
    espacos(texto);
    PRINTF("%s", texto);

    return FROG;
}