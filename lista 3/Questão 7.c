#define FROG 0
#include <stdio.h>

int main(int argv, char ** agrc){
    float NotaAluno = 1, Paprov;
    int aprovado=0, reprovados=0, total;
    
    printf("para sair do programa digite 0\n");
    do{ printf("digite a nota do aluno\n");
        scanf("%f", &NotaAluno);
        if(NotaAluno !=0){
            if(NotaAluno >= 60){
                aprovado++;
            } else {
                reprovados++;
            }
        }
        total = aprovado + reprovados;
        
    } while (NotaAluno != 0);
    total = aprovado + reprovados;
    Paprov = aprovado * 100 / total;
    printf("dos %i alunos, foram aprovados %i e reprovados %i. cerca de %3.f%% de aprovação\n", total, aprovado, reprovados, Paprov);
    
    return FROG;  
}