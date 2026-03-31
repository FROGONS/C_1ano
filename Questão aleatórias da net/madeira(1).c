#include <stdio.h>
#include <math.h>
#define TRINTA_EM_RADIANDO 0.5236
#define AISIM 0

void pecaPO_PIsimetrica(float escala){
    
    int opcao;
    float L, Q, a;
    float b, c;
    float distanciaX; 

    printf("Opcao 1-PI\nOpcao 2-PO\n: ");
    scanf("%i", &opcao);
    printf("***DIGITE TUDO EM MILIMETROS***\n");

    if (opcao == 1)
    {
        printf("Digite L: ");
        scanf("%f", &L);
        printf("Digite 'a'  (lado da peça): ");
        scanf("%f", &a);
        //calculo de 'c'
        c = (L - (2 * a)) / 2;

        printf("Digite o valor de Q: ");
        scanf("%f%*c", &Q); 
        //calculo de 'b'
        b = Q - (a * sqrt(3)); /*calculo achado*/
        printf("b = %f mm\nc = %f mm\n", (b * escala), (c * escala));
        

    }
    
    else if(opcao == 2)
    {
        printf("Digite L: ");
        scanf("%f", &L);

        printf("Digite Q: ");
        scanf("%f", &Q);

        printf("Digite a distancia x que voce escolheu para sua PO: ");
        scanf("%f", &distanciaX);

        printf("Digite 'a' (lado da peça): ");
        scanf("%f", &a);
        //calculo de c'
        c = (L - (2*a) - distanciaX) / 2;
        //calculo de b'
        b = (Q - (2*a) - distanciaX) / 2;
        printf("b' = %f mm\nc' = %f mm\n", (b * escala), (c * escala));
    }
    
    else
    {
        printf("opcao invalida\n\n");
    }
    
}

void pecaPO_PIassimetrica(float escala){

int opcao;
float Q, L, b_Largura, distanciaX, a_espessura, c_comprimento;
float b, c;
float k, w, u, t;

printf("Opcao 1-PI\nOpcao 2-PO\n: ");
    scanf("%i", &opcao);
    printf("***DIGITE TUDO EM MILIMETROS***\n");

    if(opcao == 1)
    {
        printf("Digite seu Q: ");
        scanf("%f", &Q);

        printf("Digite seu L: ");
        scanf("%f", &L);

        printf("Digite seu a(espessura/altura da peça): ");
        scanf("%f", &a_espessura);

        printf("Digite seu b(largura da peça): ");
        scanf("%f", &b_Largura);

        //calculo das variaveis k, w, u, t

        k = cos(TRINTA_EM_RADIANDO) * b_Largura;
        w = sin(TRINTA_EM_RADIANDO) * b_Largura;
        u = sin(TRINTA_EM_RADIANDO) * b_Largura;
        t = cos(TRINTA_EM_RADIANDO) * b_Largura;
        
        //calculo de b" e c"

        b = (Q - k - t) / 2;
        c = (L - w - u - a_espessura) / 2;

        printf("b\" = %f mm\nc\" = %f mm\n\a", (b * escala), (c * escala));
        printf("k: %f mm\nw: %f mm\nu: %f mm\nt: %f mm\n\n", k, w, u, t);
    }
    else if (opcao == 2)
    {
        printf("Digite seu Q: ");
        scanf("%f", &Q);

        printf("Digite seu L: ");
        scanf("%f", &L);

        printf("Digite sua distancia x: ");
        scanf("%f", &distanciaX);

        printf("Digite c(comprimento da peça): ");
        scanf("%f", &c_comprimento);

        printf("Digite seu b(largura da peça): ");
        scanf("%f", &b_Largura);

        printf("Digite seu a(espessura/altura da peça): ");
        scanf("%f", &a_espessura);
        //calculo de b"
        b = (Q - b_Largura - distanciaX - c_comprimento) / 2;
        //calculo de c"
        c = (L - a_espessura - distanciaX - c_comprimento) / 2;

        printf("b\" = %f mm\nc\" = %f mm\n\a", (b * escala), (c * escala));
    }
    
    else
    {
        printf("Opção inválida\n\n");
    }
}

int main(int argc, char const *argv[])
{
    int opcao;
    float escala[3];//posicao 1 e 2 digitos da escala e a escala igual a terceira posiçao

    printf("Ola, eu sou a calculadora do madeira, selecione a escala e o que deseja\n\n");

    printf("Digite a escala[os dois digitos, tantos para tantos ex: 1:1, 2:1 etc]\a\n: ");
    scanf("%f", &escala[0]);
    printf("Para:  ");
    scanf("%f", &escala[1]);
    escala[2] = escala[0] / escala[1]; // colocar opcao para mudar escala

    do
    {   
        printf("1-Calculo de uma Peça simetrica\n2-Calculo de uma peça assimetrica\n0-Sair\n");
        scanf("%d%*c", &opcao);

        if(opcao == 1){
        
            pecaPO_PIsimetrica(escala[2]);
            }

        else if (opcao == 0)
            {
            printf("Ok, boa sorte desenhando\n\n");
            }
    
        else if(opcao == 2)
            {
            pecaPO_PIassimetrica(escala[2]);
            }
        
        else {
        printf("Opcao invalida\n");
            }
    
    }while (opcao != 0);

    return AISIM;
}