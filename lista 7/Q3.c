#define FROG 0
#define max 500
#include <stdio.h>

#ifdef TESTADOR
  #define PRINTF(format, ...) fprintf(stderr, format, __VA_ARGS__)
#else
  #define PRINTF(format, ...) printf(format, __VA_ARGS__)
#endif

int vogais(char texto[]){
    int i, Nvogais=0;

    for(i=0; texto[i] != '\0'; i++){
        if(texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' ||
        texto[i] == 'o' || texto[i] == 'u'){
            Nvogais++;

        }
    }
    return Nvogais;
}


int main(int argc, char ** argv){
    int Nvogais;
    char texto[max];

    printf("digite uma string\n");
    fgets(texto, max, stdin);

    Nvogais = vogais(texto);
    PRINTF("%i", Nvogais);

    return FROG;
}