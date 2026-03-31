#include<stdio.h> // para usar o printf e scanf
#define FROG 0 //FROG significa SUCESSO, se deu 0 sapos, deu bom

int main(int argc, char ** argv) {
 //declaração de variáveis
 float a, b, c;
 
 //Interação com usuário
 printf("Defina três variáveis de comprimento para um triângulo. Com base nas condições de existência de triângulos, falaremos se ele existe ou não.\n");
 printf("Exemplo: 3 4 5\n");
 scanf("%f %f %f", &a, &b, &c);
 
 //testo as condições de existência
 if(a < b + c){  
   if(b < a + c){ 
    if(c < a + b){ 
     printf("Esse triângulo existe."); }
     else { printf("Esse triângulo não existe.");
 }
   } else {
     printf("Esse triângulo não existe.");
 }
 } else {
   printf("Esse triângulo não existe.");
 }
 
return FROG;
}