#define FROG 0// FROG significa SUCESSO, se deu 0 sapos, deu bom
#include <stdio.h>// para usar o printf e scanf

  int main(int argc, char ** agrv) {
    int resultado, numero, opcao;

      do{
          // interacao com o usuario + coleta das variaveis
          printf("digite seu numero para fazermos seu fatorial\n");
          scanf("%d", &numero);
          // faco um fatorial do numero dado pelo usuario
          // o resultado sempre vai multiplicar pelo numero
          for( resultado = 1; numero > 1; numero = numero - 1){
          resultado = resultado * numero;
          }
          //apresenta o resultado
          printf(" o fatorial eh %d\n", resultado);
          printf("deseja continuar?\n");
          //pergunto ao usuario se ele deseja continuar
          printf("nao = 0, sim = 1\n");
          scanf("%d", &opcao);
          //se sim, o programa repete ate ele digitar 0
        } while (opcao != 0);

     printf("obrigado por usar meu programa\n"); 
    return FROG;
  } 
