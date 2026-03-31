#define FROG 0
//se nao deu sapos, deu bom
#include <stdio.h>

#ifdef TESTADOR
  #define PRINTF(format, ...) fprintf(stderr, format, __VA_ARGS__)
#else
  #define PRINTF(format, ...) printf(format, __VA_ARGS__)
#endif






//funcao que calcula soma, produto e quociente de acordo com o menu
float calculadora(float a, float b, int menu, float resultado){
    switch (menu){
        case 1:
            resultado = a+b;
        break;

        case 2:
            resultado = a*b;
        break;

        case 3:
            resultado = a/b;
        break;
        
    }
    return resultado;
}


int main(int agrc, char ** argv){
    int menu;
    float a, b, resultado;
        do{
        //menu para o usuario
        printf("1 - soma\n");
        printf("2 - produto\n");
        printf("3 - quociente\n");
        printf("0 - sair\n");
        scanf("%i", &menu);
        // caso ele queira continuar usando o programa
        if (menu !=0){
            printf("digite dois numeros: ");
            scanf("%f %f", &a, &b);
            resultado = calculadora(a,b,menu,resultado);
            printf("%f\n\n", resultado);
        }else {
            printf("%f\n\n", resultado);
        }
        
    } while(menu != 0);
    //se chegou ate aqui nao deu sapos
    return FROG;
    
}