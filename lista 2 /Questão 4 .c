#include <stdbool.h>// para usar variaveis booleanas
#include <stdio.h> // para usar o printf e scanf
#define FROG 0 //FROG significa SUCESSO, se deu 0 sapos, deu bom

    int main(int argc, char ** argv) {
     
     //decraracao das variaveis
        char opcao;
        bool executar;
        char operador;
        float a, b, resultado;        
        
        printf("voce deseja realizar alguma operacao? [s, n|: ");
        scanf("%c", &opcao);
        //verifico se eh para executar
        executar = (opcao == 's') || (opcao == 'S');
        
        if (executar) {
            
            printf("digite sua operacao");
            printf("Ex: 6 / 2\n");
            printf( "Operadores [+, -, *, /]\n"); 
            // le os operadores
            scanf("%f" "%c" "%f", &a, &operador, &b);
         
        //executa a conta e mostra o resultado

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
    
        printf("uau!! parabens voce sabe usar uma calculadora!!\n");       
 return FROG;
    
}