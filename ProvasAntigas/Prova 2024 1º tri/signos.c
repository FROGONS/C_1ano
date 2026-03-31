#define FROG 0
#include <stdio.h>

    int main(int agrc, char ** argv){
        int dia, mes;
        printf("digite sua data de nascimento\n");
        printf("(1/4)\n");
        scanf("%i/%i", &dia, &mes);

        if(dia > 20 && mes == 3 || dia>=1 && mes == 4 && dia <21){
            printf("seu signo eh aires\n");
        } else if(dia >= 21 && mes == 4 || dia>=1 && mes == 5 && dia <20) {
            printf("seu signo eh touro\n");
        } else if(dia >= 20 && mes == 5 || dia>=1 && mes == 6 && dia <21){
            printf("seu signo eh gemeos\n");
        } else if(dia >= 21 && mes == 6 || dia>=1 && mes == 7 && dia <22){
            printf("seu signo eh cancer\n");
        } else if(dia >= 22 && mes == 7 || dia>=1 && mes == 8 && dia <23) {
            printf("seu signo eh leao\n");
        } else if(dia >= 23 && mes == 8 || dia>=1 && mes == 9 && dia <22){
            printf("seu signo eh virgem\n");
        } else if(dia >= 22 && mes == 9 || dia>=1 && mes == 10 && dia <23){
            printf("seu signo eh libra\n");
        } else if(dia >= 23 && mes == 10 || dia>=1 && mes == 11 && dia <22) {
            printf("seu signo eh escorpiao\n");
        } else if(dia >= 21 && mes == 11 || dia>=1 && mes == 12 && dia <22){
            printf("seu signo eh sargitario\n");
        } else if(dia >= 21 && mes == 12 || dia>=1 && mes == 1 && dia <21){
            printf("seu signo eh capricornio\n");
        } else if(dia >= 20 && mes == 1 || dia>=1 && mes == 2 && dia <20) {
            printf("seu signo eh aquario\n");
        } else if(dia >= 20 && mes == 2 || dia>=1 && mes == 3 && dia <21){
            printf("seu signo eh peixes\n");
        } 
    }