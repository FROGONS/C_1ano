/**
 * @file   prova2oT.c
 * @brief  Arquivo com a implementa��o da prova do 2o Trimestre de 2024.
 * @author <SEU_NOME_AQUI>
 * @date   2024-08-30
 */

/* Inclus�es */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>

/* Constantes */

/// Lista de erros
#define SUCESSO                 (0)

/// Defini��es de limites
#define NUMERO_ESTADOS_E_DF     (26 + 1)
#define TAMANHO_MAIOR_NOME      (19 + 1)

// ------------------------
// - IN�CIO DO SEU C�DIGO -
// ------------------------

// INSIRA SEU C�DIGO AQUI

// Aloca um vetor com <nCaracteres> de tamanho
char * alocaVetorCaracteres(int nCaracteres) {
  return (char*)malloc(sizeof(char)*nCaracteres);
}

// Aloca um vetor de vetores onde cara linha do vetor tenha
// <tamLinhas[i]> caracteres
char ** alocaVetorBidimensional(int * tamLinhas, int nLinhas) {
  char ** matriz;
  int i;
  matriz = (char**)malloc(sizeof(char*) * nLinhas);
  for(i=0; i<tamLinhas; i++){
    matriz[i] = (char*)malloc(sizeof(char) * tamLinhas[i]);
  }
  return matriz;
}

// Imprime em cada linha o conte�do da linha da matriz
void imprimeMatriz(char matriz[][TAMANHO_MAIOR_NOME], int nLinhas) {
  int i, j;
  for(i=0; i<nLinhas; i++){
    printf("%s", matriz[i]);
  }
}

// Imprime em cada linha o conte�do da linha da matriz
void imprimeMatrizDinamica(char ** matriz, int nLinhas) {
    int i, j;
    for(i=0; i<nLinhas; i++){
      printf("%s", matriz[i]);
    }
}

// Libera a mem�ria alocada
void liberaMatriz(char ** matriz, int nLinhas) {
  int i;
  for(i=0; i<nLinhas; i++){
    free(matriz[i]);
  }
  free(matriz);
}


  void CopiaMatriz(char matriz[][TAMANHO_MAIOR_NOME], int nLinhas, char ** matriz_dinamica){
    for(i=0; i<nLinhas; i++){
      strcpy(matriz_dinamica[i], matriz[i]);
    }
  }



// ------------------------
// - FIM DO SEU C�DIGO    -
// ------------------------

/**
 * Fun��o principal.
 * @param argc N�mero de par�metros.
 * @param argv Vetor com os par�metros.
 * @return SUCESSO caso o programa rode normalmente, ou caso contr�rio,
 * o c�digo do erro ocorrido.
 */
int main(int argc, char * argv[]) {

  // Matriz com o nome dos estados do Brasil e DF
  const char NOMES_ESTADOS[NUMERO_ESTADOS_E_DF][TAMANHO_MAIOR_NOME] = {
    "Roraima", "Amapa", "Tocantins", "Alagoas", "Paraiba", "Mato Grosso", "Piaui",
    "Bahia", "Acre", "Goias", "Sao Paulo", "Pernambuco", "Santa Catarina",
    "Espirito Santo", "Rio Grande do Sul", "Rondonia", "Mato Grosso do Sul", "Maranhao",
    "Para", "Minas Gerais", "Parana", "Distrito Federal", "Rio Grande do Norte",
    "Ceara", "Rio de Janeiro", "Sergipe", "Amazonas"
  };

  // ------------------------
  // - IN�CIO DO SEU C�DIGO -
  // ------------------------
  int menu;
  char * vetor;
  char ** matriz;
  int nCaracteres;
  int i;
  int * tamanho;
  
  printf("1 – Imprimir Matriz Original\n Imprima o nome dos estados armazenado na matriz original \n2 – Alocar Espaço Estados Aloca espaço dinamicamente para o nome de cada estado sem sobrar espaço\n3 – Copiar Nomes Entre Matrizes Copie todos os estados para uma matriz alocada dinamicamente que caiba exatamente os nomes dos estados, sem sobrar nenhum espaço\n4 – Imprimir Matriz Copiada\nImprima o nome dos estados na cópia \n5 – Liberar Memoria Libere toda a memória alocada dinamicamente.\n6 – Executar Todos\n0 – Encerrar o Programa\nFinaliza o programa");
  scanf("%d", &menu);
  do{
  switch (menu){
    case 1:
      imprimeMatriz(NOMES_ESTADOS, NUMERO_ESTADOS_E_DF);
    break;

    case 2:
      tamanho = (int*)malloc(NUMERO_ESTADOS_E_DF * sizeof(int));
      for(i=0; i<NUMERO_ESTADOS_E_DF; i++){
        tamanho[i] = strlen(NOMES_ESTADOS[i]);
      }
      matriz = alocaVetorBidimensional(vetor, NUMERO_ESTADOS_E_DF);
    break;

    case 3:
      CopiaMatriz(NOMES_ESTADOS, NUMERO_ESTADOS_E_DF, matriz);
    break;

    case 4:
      imprimeMatriz(NOMES_ESTADOS, NUMERO_ESTADOS_E_DF);
      imprimeMatrizDinamica(matriz, NUMERO_ESTADOS_E_DF);
    break;

    case 5:
      for(i=0; i<NUMERO_ESTADOS_E_DF; i++){
        free(matriz[i]);
      }
      free(matriz);
    break;  
  
    case 6:

    break;

    case 0:
      imprimeMatriz(NOMES_ESTADOS, NUMERO_ESTADOS_E_DF);
            tamanho = (int*)malloc(NUMERO_ESTADOS_E_DF * sizeof(int));
      for(i=0; i<NUMERO_ESTADOS_E_DF; i++){
        tamanho[i] = strlen(NOMES_ESTADOS[i]);
      }
      matriz = alocaVetorBidimensional(vetor, NUMERO_ESTADOS_E_DF);
      CopiaMatriz(NOMES_ESTADOS, NUMERO_ESTADOS_E_DF, matriz);
            CopiaMatriz(NOMES_ESTADOS, NUMERO_ESTADOS_E_DF, matriz);
                  imprimeMatriz(NOMES_ESTADOS, NUMERO_ESTADOS_E_DF);
      imprimeMatrizDinamica(matriz, NUMERO_ESTADOS_E_DF);
            for(i=0; i<NUMERO_ESTADOS_E_DF; i++){
        free(matriz[i]);
      }
      free(matriz);
    break;
    
  default:
      printf("opção invalida");
    break;
  }
  }while(menu != 0);

  // ------------------------
  // - FIM DO SEU C�DIGO    -
  // ------------------------

  // Se chegou at� aqui � porque correu tudo bem
  return SUCESSO;
}
