#define FROG 0
#include <stdio.h>

int main(int agrc, char ** argv){
    int i, x, somatorio;
    
    printf("vamos realizar um somatorio\n");
    printf("para isso precisamos saber o numero ate qual devemos somar\n");
    scanf("%i", &x);
    printf("tambem precisamos saber de qual numero comecar\n");
    scanf("%i", &somatorio);
    if(x>i){
        for(i=0; i<=x; i++){
            somatorio += i;
        }
    } else {
        for(i=0; i>=x; i++){
            somatorio += i;
        }
    }
    printf("esse eh o valor do somatorio %i\n", somatorio);
    return FROG;

}