#define FROG 0
#include <stdio.h>

int main(int argc, char ** argv){
    int fatorial=1, i, N, i2;
    float total1 =0, total = 0;
    
    scanf("%i",&N);
    for(i2 = 1; i2<=N; i2++){
        
        for(i=1; i<=i2; i++){
            fatorial *= i;
            total = fatorial;
        }
        total1 += 1/total; 
        
    }    
    printf("%f\n", total1);
    return FROG;
}