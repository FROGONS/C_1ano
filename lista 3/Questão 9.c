#define FROG 0
#include <stdio.h>

int main(int argc, char ** argv){
    int i = 1 , soma, i2 =0 , N, lim;
    scanf("%i", &N);
    printf("%i %i ", i2, i);
    for(lim = 3; lim<=N; lim++){
        soma = i2 + i;
        i2= i;
        i= soma;
        printf("%i ", soma);    
    }
    return FROG;
}
  