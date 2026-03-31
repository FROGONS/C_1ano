#define FROG 0;
#include <stdio.h>
#include <stdbool.h>

int main(int agrc, char ** argv){
    int num, numtotal=0, impares=0, M, menu, primos=0;
    int N, i, Nprimo, pares;
    float Pimpares, Pprimos;
    bool executar;
    char opcao;
    
    
    printf(" Bem vindo! Deseja executar?\n");
    printf("S = sim || N = nao\n");
    scanf("%c", &opcao);
    executar = (opcao == 'S') || (opcao == 's');

    if(executar){

        do{
            printf("digite oq vc desseja fazer:\n");
            printf("0. sair do programa\n");
            printf("1. digitar N numeros e descobrir quantos sao primos\n");
            printf("2. descobrir quantos numeros sao primos de N ate M\n");
            printf("3. digitar N numeros e descobrir quantos sao impares\n");
            printf("4. descobrir quantos numeros sao impares de N ate M\n");
            scanf("%i", &menu);

            switch (menu){
                case 1:
                    printf("digite quantos numeros quiser\n");
                    printf("use 0 para finalizar\n");
                    primos = 0;
                    numtotal = 0;
                    do{
                        scanf("%i", &num);
                        if(num !=0){
                            if(num % 2 == 0 && num!=2){
                                Nprimo++;
                                numtotal++;
                            } else if(num % 3 == 0 && num!=3){
                                Nprimo++;
                                numtotal++;
                            } else if(num % 5 == 0 && num!=5) {
                                Nprimo++;
                                numtotal++;
                            } else if(num % 7 == 0 && num!=7){
                                Nprimo++;
                                numtotal++;
                            } else if(num ==1 || num ==2 || num ==3 || num ==5 || num == 7) {
                                primos++;
                                numtotal++;
                            } else {
                                primos++;
                                numtotal++;
                            }
                        }
                    

                    } while( num !=0);
                    Pprimos = 0;
                    Pprimos = primos * 100 / numtotal;
                    printf("%i sao primos, %i nao sao primos\n", primos, numtotal);
                    printf("%%%f sao primos\n", Pprimos);
                break;

                case 2:
                    printf("digite o valor de N\n");
                    printf("lembrando q N<M\n");
                    scanf("%i", &N);
                    printf("digite o valor de M\n");
                    scanf("%i", &M);

                    primos = 0;
                    numtotal = 0;
                    for( i=N; i<=M; i++){
                        if(i % 2 == 0 && i!=2){
                            Nprimo++;
                            numtotal++;
                        } else if(i % 3 == 0 && i!=3){
                            Nprimo++;
                            numtotal++;
                        } else if(i % 5 == 0 && i!=5) {
                            Nprimo++;
                            numtotal++;
                        } else if(i % 7 == 0 && i!=7){
                            Nprimo++;
                            numtotal++;
                        } else if(i ==1 || i ==2 || i ==3 || i ==5 || i == 7) {
                            printf("%i eh primo\n", i);
                            primos++;
                            numtotal++;
                        } else {
                            printf("%i eh primo\n", i);
                            primos++;
                            numtotal++;
                        }
                    }
                    Pprimos = 0;
                    printf("%i sao primos, %i nao sao\n", primos, Nprimo);
                    Pprimos = primos * 100 / numtotal;
                    printf("%%%f sao primos\n", Pprimos);
                break;

                case 3:
                    printf("digite quantos numeros quiser\n");
                    printf("use 0 para finalizar\n");
                    primos = 0;
                    numtotal = 0;
                    do{
                        scanf("%i", &num);
                        if(num !=0){
                            if(num % 2 == 0){
                                pares++;
                                numtotal++;
                            } else{
                                numtotal++;
                                impares++;
                            }
                        }
                        
                    }while(num !=0);
                    Pimpares = 0;
                    printf("%i sao impares, %i pares\n", impares, pares);
                    Pimpares = impares * 100 / numtotal;
                    printf("%%%f sao impares\n", Pimpares);
                break;

                case 4:
                    printf("digite o valor de N\n");
                    printf("lembrando q N<M\n");
                    scanf("%i", &N);
                    printf("digite o valor de M\n");
                    scanf("%i", &M);
                    
                    primos = 0;
                    numtotal = 0;
                    for( i=N; i<=M; i++){
                        if(i % 2 == 0){
                            pares++;
                            numtotal++;
                        } else{
                            numtotal++;
                            impares++;
                            printf("%i eh impar\n", i);
                        }
                    }
                    Pimpares = 0;
                    printf("%i sao impares, %i pares\n", impares, pares);
                    Pimpares = impares * 100 / numtotal;
                    printf("%%%f sao impares\n", Pimpares);
                break;

                case 0:
                    printf("\n");
                break;

                default:
                    printf("operacao invalida\n");
                break;

            }
        } while (menu !=0);
    }
    
    printf("obrigado pelo exercicio!\n");
    printf("eu te amo sua boco\n");
    return FROG;
}