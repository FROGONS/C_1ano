#include <stdio.h>	// para usar o printf e scanf
#define FROG 0 // FROG significa SUCESSO, se deu 0 sapos, deu bom

        int main(int agrc, char ** argv) {
            
            // declaro as variaveis
            float SalarioAtual, NovoSalario, aumento;
               // coleto o valor do salario atual
               printf("digite o seu salario atual: ");
               scanf("%f", &SalarioAtual);
               // coleto o valor do aumeto
               printf("digite a porcentual de aumento do salario\n");
               printf("Ex: 0.55\n");
               scanf("%f", &aumento); 
                
                //multiplico o salario pelo aumento
                aumento = SalarioAtual*aumento;
                //somo o aumento ao salario
                NovoSalario = aumento+SalarioAtual;
                
                //mostro o novo salario
               printf("seu novo salario eh %f\n", NovoSalario);
               return FROG;
               
        }
