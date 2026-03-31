#include <stdbool.h>
#include <stdio.h>

//FROG significa SUCESSO, se deu 0 sapos, deu bom
#define FROG 0

    int main(int argc, char ** argv) {
     
     //decraracao das variaveis
        char opcao;
        bool executar;
        char operador, c;
        float a, b, resultado = 0;
        int nlido;       
        
        printf("voce deseja realizar alguma operacao? [s, n|: ");
        scanf("%c", &opcao);
        //verifico se eh para executar
        executar = (opcao == 's') || (opcao == 'S');
        
        if (executar) {
            
            printf("digite sua operacao");
            printf("Ex: 6 / 2\n");
            printf( "Operadores [+, -, *, /]\n");
            printf( "use o = para sair do programa\n");  
            printf( "Ex: 0 = 0\n");
            
          do{
          
            // le os operadores e prende o usuario no programa
            printf(":");
            nlido = scanf("%f %c %f", &a, &operador, &b);

            if(nlido == 0){ 
             
             
             scanf("%c %f", &c, &b);
             switch (c) {
            
             case '+': 
             resultado +=b;
             printf("%f\n", resultado);
             break;
            
             case '-':
             resultado -=b;
             printf("%f\n", resultado);
             break;

             case '*': 
             resultado *=b;
             printf("%f\n", resultado);
             break;
            
             case '/':
             resultado /=b;
             printf("%f\n", resultado);
             break;
             } 



        } else 
        {
         switch (operador) {
            case '+': 
            resultado = a+b
             ;printf("%f\n", resultado);
            ;break;
            
            case '-':
            resultado = a-b
             ;printf("%f\n", resultado);
            ;break;

            case '*': 
             resultado = a*b
             ;printf("%f\n", resultado);
            ;break;
            
            case '/':
             resultado = a/b
             ;printf("%f\n", resultado);
            ;break;
         }

         } 
            }while ( operador != '='); // tira o usuario do programa
           
        }
         printf("obrigado por utilizar meu programa\n");
        return FROG;
    }
           
    
    
    

    