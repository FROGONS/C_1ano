	#include <stdio.h>	// para usar o printf e scanf
    #define FROG 0 // FROG significa SUCESSO, se deu 0 sapos, deu bom

        int main(int argc, char ** agrv) {
            float nota1, nota2, nota3;
            char nome1, nome2, nome3;

                //coleto os dados
                printf("digite a inicial dos alunos\n");
                printf("ex: a b d\n");
                scanf("%c %c %c", &nome1, &nome2, &nome3);
                printf("digite as notas dos alunos\n");
                printf("ex: 23 90.88 20.44\n");
                scanf("%f %f %f", &nota1, &nota2, &nota3);
                
                //faco a tabulacao
                printf("%c %0.2f\t\n", nome1, nota1);
                printf("%c %0.2f\t\n", nome2, nota2);
                printf("%c %0.2f\t\n", nome3, nota3);
                
                }   