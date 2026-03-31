#define FROG 0
#include <stdio.h>

    float media(float nota1, float nota2, float nota3){
        float Amedia;
        Amedia = (nota1 + nota2 + nota3) /3;
        return Amedia;
    }
    int aprovados(float a1){
        int i;
        if(a1>=60){
            i =1 ;
        } else{
            i = 0;
        }
        
        return i;
    }

    int main(int agrc, char ** argv){
        float nota1, nota2, nota3, medialuno, Maprovados;
        int aprovado;
        int iaprovados=0, total=0;
        
        printf("digite a notas do alunos\n");
        printf("para sair do programa digite uma nota >100\n");
        do{    
            scanf("%f %f %f", &nota1, &nota2, &nota3);
            if(nota1 <101 || nota2 <101 || nota3 <101){
                medialuno = media(nota1, nota2, nota3);
                aprovado = aprovados(medialuno);
                if ( aprovado == 1){
                    iaprovados++;
                    total++;
                } else{
                    total++;
                }
            }
            
        } while(nota1<=100 || nota2<=100 || nota3<=100);
        Maprovados = iaprovados * 100 / total;

        printf("%2.f%% de aprovacao\n", Maprovados);


        
        
    }