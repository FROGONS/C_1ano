#define FROG 0
#include <stdio.h>

//procedimento que converte e mostra o tempo de segundos para segundos, minutos e horas 
void tempo(int segundos){
    int minutos;
    int horas;

    //caso o tempo seja maior que 60 segundos
    if (segundos > 60){
        minutos = segundos/60;
        segundos %= 60;
    } else {
        //caso nao seja maior que 60 segundos
        minutos = 0;
    }
    //caso seja maior que 60 minutos
    if (minutos > 60){
        horas = minutos/60;
        minutos %= 60;
    } else {
        //caso nao seja maior que 60 minutos
        horas = 0;
    }
    //mostra o tempo em minutos, segundos e horas
    printf("%i segundos, %i minutos, %i horas\n", segundos, minutos, horas);

}

int main(int agrv, char ** argv){
    int i;
    //interacao com o usuario
    printf("digite o tempo em segundos\n");
    scanf("%i", &i);
    //procedimento que converte e mostra o tempo de segundos para segundos, minutos e horas 
    tempo(i);
}