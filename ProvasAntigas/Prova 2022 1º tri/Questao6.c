#define FROG 0
#include <stdio.h>

    int main(int agrc, char ** argv){
        int dia1, mes1, ano1, dia2, mes2, ano2, totaldias, i , i2;
        
        printf("digite a primeira data\n");
        printf(" ex.: 12 6 2009\n");
        scanf("%i %i %i", &dia1, &mes1, &ano1);
        printf("digite a segunda data\n");
        printf(" ex.: 12 6 2090\n");
        scanf("%i %i %i", &dia2, &mes2, &ano2);

        if(ano1 < ano2){
            for(i = ano1; i<ano2; i++){
                if( i % 4 ==0 ){
                    totaldias += 366;
                } else {
                    totaldias += 365;
                }
            }
        } else {
            for(i = ano2; i<ano1; i++){
                if( i % 4 ==0 ){
                    totaldias += 366;
                } else {
                    totaldias += 365;
                }
            }
        }

        switch (mes1){
        case 1:
         mes1= -31 + dia1;
        break;

        case 2:
         mes1= -59 +dia1;
        break;
    
        case 3:
         mes1= -90 + dia1;
        break;

        case 4:
         mes1= -120 + dia1;
        break;
        
        case 5:
         mes1= -151 + dia1;
        break;

        case 6:
         mes1= -181 + dia1;
        break;
        
        case 7:
         mes1= -212 + dia1;
        break;

        case 8:
         mes1= -243 + dia1;
        break;

        case 9:
         mes1= -273 + dia1;
        break;

        case 10:
         mes1=  -304 + dia1;
        break;

        case 11:
         mes1= -334 + dia1;
        break;

        case 12:
         mes1= -365 + dia1;
        break;
    }
    mes1 *= -1;

    switch (mes2){
        case 1:
         mes2= -31 + dia2;
        break;

        case 2:
         mes2= -59 +dia2;
        break;
    
        case 3:
         mes2= -90 + dia2;
        break;

        case 4:
         mes2= -120 + dia2;
        break;
        
        case 5:
         mes2= -151 + dia2;
        break;

        case 6:
         mes2= -181 + dia2;
        break;
        
        case 7:
         mes2= -212 + dia2;
        break;

        case 8:
         mes2= -243 + dia2;
        break;

        case 9:
         mes2= -273 + dia2;
        break;

        case 10:
         mes2= -304 + dia2;
        break;

        case 11:
         mes2= -334 + dia2;
        break;

        case 12:
         mes2=  -365 + dia2;
        break;
    }
    mes2 *= -1;
    i2 = mes1 - mes2;
    if(i2<0){
        i2 *= -1;
    }
    if( i2 <= 365){
        if(ano1 % 2 == 0 || ano2 % 2 == 0){
            i2 +=1;
        }
    }
    totaldias += i2;

    printf("%i\n", totaldias);

}