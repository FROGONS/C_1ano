	#include <stdio.h>	// para usar o printf e scanf
    #define FROG 0 // FROG significa SUCESSO, se deu 0 sapos, deu bom

        int main(int argc, char ** agrv) {
            int idade;
            char InicialNome;

                //coleto os dados
                printf("digite a inicial do seu nome\n");
                printf("ex: a\n");
                scanf("%c", &InicialNome);
                printf("digite a sua idade\n");
                printf("ex: 12\n");
                scanf("%d %d %d", &idade);
                
                //mostro ao usurio a idade e o nome
                printf("%c %d\n", InicialNome, idade);
                
                }   