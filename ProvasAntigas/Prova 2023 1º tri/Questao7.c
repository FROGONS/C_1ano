#define FROG 0
#include <stdio.h>

int main(int argc, char ** argv){
    int numPessoas, Pessoasdinheiro, quantidade;
    float valorinicial, valortotal=0, Pdesconto;

    do{
        printf("digite o valor do item\n");
        printf("digite 0 para fechar a conta\n");
        scanf("%f", &valorinicial);
        printf("digite a quantidade do item\n");
        scanf("%i", &quantidade);
        valorinicial *= quantidade;
        valortotal += valorinicial;
        printf("o total eh %f\n",valortotal);

    } while( valorinicial != 0);

    printf("PARABENS!!! Voce foi selecionado para receber nossa oferta!\n");
    printf("Para cada pessoa que for pagar em dinheiro ou PIX a conta recebe um desconto de 8%%\n");
    printf("Quantas pessoas vao pagar no dinheiro ou pix?\n");
    scanf("%i", &Pessoasdinheiro);
    printf("quantas pessoas sao no total?\n");
    scanf("%i", &numPessoas);

    Pdesconto = 0.08;
    Pdesconto *= Pessoasdinheiro * valortotal;
    valortotal -= Pdesconto;
    valortotal /= numPessoas; 
    printf("o total eh %f\n", valortotal);
    printf("Obrigado por participar!\n");

    return FROG;
}