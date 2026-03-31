#define FROG 0
//se nao deu nenhum sapo, deu bom
#include <stdio.h>
#include <stdbool.h>
//para usar o printf e variaveis booleanas

int main(int argc, char ** argv ){
    //declaro as variveis
    bool executar;
    float Pi, raio, ladobase, altura, resultado;
    int menu, lido;
    char opcao;
    
    //verifico se eh para executar
    printf("deseja executar?\n");
    printf("S = sim || N = nao\n");
    scanf("%c", &opcao);
    executar = (opcao == 'S') || (opcao == 's');

    if(executar) {

        //laco para o usuario poder usar o programa quantas vezes quiser
        do {
            //verifico qual forma ele deseja calcular o volume
            printf("escolha qual forma deseja calcular o volume\n");
            printf("piramide = 1\n");
            printf("esfera = 2\n");
            printf("cilindro = 3\n");
            printf("sair do programa = 0\n");
            printf(" \n");
            lido = scanf("%i", &menu);
            printf(" \n");
            
            //vejo se ele digitou um numero
            if (lido == 1){
               
                //calculo e mostro o volume das formas
                switch (menu){
                    case 1:
                        printf("digite o lado da base\n");
                        scanf("%f", &ladobase);
                        printf(" \n");
                        printf("digite a altura\n");
                        scanf("%f", &altura);
                        printf(" \n");
                        resultado = ladobase * altura * ladobase;
                        printf("o volume da piramide eh %f\n", resultado);
                    break;

                    case 2:
                        Pi = 3.14;
                        printf("digite o raio da esfera\n");
                        scanf("%f", &raio);
                        printf(" \n");
                        resultado = Pi * raio * raio * raio * 4;
                        resultado /= 3;
                        printf("o volume da sua esfera eh %f\n", resultado);
                    break;    

                    case 3:
                        Pi = 3.14;
                        printf("digite o raio do cilindro\n");
                        scanf("%f", &raio);
                        printf(" \n");
                        printf("digite a altura do cilindro\n");
                        scanf("%f", &altura);
                        printf(" \n");
                        resultado = Pi * raio * raio * altura;
                        printf(" o volume do circulo eh %f\n", resultado);

                    default:
                        printf("operacao invalida\n");    
            } 
            printf(" \n");

            } else {
                //caso ele nao digite um numero
                printf("operacao invalida\n");
            }
        //tiro o usuario do laco
        } while (menu != 0);

    } printf("obrigado por usar meu programa!\n");
    return FROG;

}