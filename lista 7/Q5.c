#define FROG 0
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#define max 500

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

void espacos(char texto[], char textosem[]){
    int i,j=0;

    for(i=0; texto[i] != '\0'; i++ ){
        if(texto[i] != '\n' && texto[i] != ' '){
            textosem[j] = texto[i];
            j++;
        }
    }
    textosem[j+1]== '\0';

}

bool ehpalindromo(char texto[], int tamanho){
    
    int i, j=tamanho-1;  
    for(i=0; texto[i] != '\0'; i++){
       
        if(texto[j] != texto[i]){
            return false;
        }
        j--;
    }

    return true;
}


int main(int argc, char ** argv){

    char texto[max];
    char textosem[max];
    int tamanho, i;
    bool Palindromo;

    printf("digite uma string\n");
    fgets(texto, max, stdin);

    espacos(texto, textosem);
    util_removeQuebraLinhaFinal(textosem);
    
    tamanho = strlen(textosem);
    
    Palindromo = ehpalindromo(textosem, tamanho);
    PRINTF("%s", Palindromo? "Sim" : "Nao");
    
    return FROG;
}