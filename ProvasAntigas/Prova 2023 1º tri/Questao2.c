#define Frog 0
//se n deu sapo, deu bom
#include <stdbool.h>
#include <stdio.h>

    int main( int argc, char ** agrv ){
        //declaro as variaveis
        char opcao;
        bool executar;
        float total=0, Pdesconto, TotalcDescon;
        int Produto, quantidade, maior = 5;

        //interacao para entrar no cardapio
        printf("bem vindo ao nosso menu! Deseja ver o cardapio?\n");
        printf("S = sim || N = nao\n");
        scanf("%c", &opcao);
        executar = (opcao == 'S') || (opcao == 's');
        if (executar) {
            
            //cardapio    
            printf("ola! bem vindo ao nosso menu!\n");    
            printf("escolha o seu item digitando o numero dele\n");    
            printf("(5) Refrigerante.... R$ 5.50\n");
            printf("(4) Pao com manteiga R$ 3.10\n");
            printf("(3) Pao de queijo... R$ 2.50\n");
            printf("(2) Pingado......... R$ 1.80\n");
            printf("(1) Halls........... R$ 1.30\n");
            printf("(0) Total\n");
                //estrutura de repeticao para o cliente comprar ate digitar 0
                do{     
                    
                            
                    printf("digite a opcao: \n");
                    scanf("%i", &Produto);
                    if (Produto !=0){
                        //para a primeira compra
                        if (total == 0){
                            printf("digite a quantidade: \n");
                            scanf("%i", &quantidade);
                            if(Produto<maior){
                                maior = Produto;
                            }
                            switch (Produto){
                                case 5:
                                    total = 5.50 * quantidade;
                                break;

                                case 4:
                                    total = 3.10 * quantidade;
                                break;

                                case 3:
                                    total = 2.50 * quantidade;
                                break;

                                case 2:
                                    total = 1.80 * quantidade;
                                break;

                                case 1:
                                    total = 1.30 * quantidade;
                                break;
                            }
                            printf("o total eh %f\n", total);

                        //para a segunda compra em diante
                        } else {
                            printf("digite a quantidade: \n");
                            scanf("%i", &quantidade);
                            //identifico qual eh o item menor
                            if(Produto<maior){
                                maior = Produto;
                            }
                            
                            switch (Produto) {
                                case 5:
                                    total += 5.50 * quantidade;
                                break;

                                case 4:
                                    total += 3.10 * quantidade;
                                break;

                                case 3:
                                    total += 2.50 * quantidade;
                                break;

                                case 2:
                                    total += 1.50 * quantidade;
                                break;

                                case 1:
                                    total += 1.30 * quantidade;
                                break;
                            }
                            printf("o total eh %f\n", total);                     
                        }
                   } 
                // quando o cliente digita 0 ele sai da estrutura       
                } while (Produto != 0);

                //aplico o desconto do menor produto no total
                Pdesconto = total / maior /100;
                //adiciono um limite no desconto
                if(Pdesconto > 0.2){
                    Pdesconto = 0.2;
                }
                //aplico o desconto
                TotalcDescon = total  * Pdesconto;
                TotalcDescon -= total;
                TotalcDescon *= -1;

            //mostro o total
            printf("o total eh %f\n", total);
            printf("o %% de desconto eh: %f\n", Pdesconto);
            printf("o total com o desconto eh: %f\n", TotalcDescon);

        }

        return Frog;
    }