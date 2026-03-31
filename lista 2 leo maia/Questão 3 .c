#include<stdio.h> //para usar printf
#define FROG 0 //FROG significa SUCESSO, se deu 0 sapos, deu bom

int main(int argc, char ** argv) {
 //declaração de variáveis
  int dia;
 
  // explica ao usuario como se utiliza o programa
  printf(" digite um numero para descobrirmos que dia ele eh\n");
  printf("lembrando que o nummero tem que pertencer aos naturais tal que 1<= x <=7\n");
  // coleta a resposta do usuario
  scanf("%i", &dia);
 
  // identifica a resposta do usuario e mostra qual dia da semana eh determinado numero
  switch (dia) {
    case 1: { 
     printf("domingo\n"); 
    break; 
    }

    case 2:{ 
     printf("segunda feira\n");  
    break;
    } 
 
    case 3:{ 
     printf("terca feira\n"); 
    break;
    }

    case 4:{ 
     printf("quarta feira\n"); 
    break;
    }
 
    case 5:{ 
     printf("quinta feira\n"); 
    break;
    }

    case 6:{ 
     printf("sexta feira\n"); 
    break;
    }

    case 7:{ 
     printf("sabado\n"); 
    break;
    }

    default: {
     printf("dia da semana invalido\n");
    }
  

    }
  return FROG;
  }