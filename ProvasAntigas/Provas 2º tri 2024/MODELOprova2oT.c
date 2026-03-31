/**
 * @file   prova2oT.c
 * @brief  Arquivo com a implementação da prova do 2o Trimestre de 2024.
 * @author <SEU_NOME_AQUI>
 * @date   2024-08-30
 */

/* Inclusões */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>

/* Constantes */

/// Lista de erros
#define SUCESSO                 (0)

/// Definições de limites
#define NUMERO_ESTADOS_E_DF     (26 + 1)
#define TAMANHO_MAIOR_NOME      (19 + 1)

// ------------------------
// - INÍCIO DO SEU CÓDIGO -
// ------------------------

// INSIRA SEU CÓDIGO AQUI

// Aloca um vetor com <nCaracteres> de tamanho
char * alocaVetorCaracteres(int nCaracteres) {
  return NULL;
}

// Aloca um vetor de vetores onde cara linha do vetor tenha
// <tamLinhas[i]> caracteres
char ** alocaVetorBidimensional(int * tamLinhas, int nLinhas) {
  return NULL;
}

// Imprime em cada linha o conteúdo da linha da matriz
void imprimeMatriz(char matriz[?][?], int nLinhas) {

}

// Imprime em cada linha o conteúdo da linha da matriz
void imprimeMatrizDinamica(char ** matriz, int nLinhas) {

}

// Libera a memória alocada
void liberaMatriz(char ** matriz, int nLinhas) {

}

// ------------------------
// - FIM DO SEU CÓDIGO    -
// ------------------------

/**
 * Função principal.
 * @param argc Número de parâmetros.
 * @param argv Vetor com os parâmetros.
 * @return SUCESSO caso o programa rode normalmente, ou caso contrário,
 * o código do erro ocorrido.
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
  // - INÍCIO DO SEU CÓDIGO -
  // ------------------------


  // ------------------------
  // - FIM DO SEU CÓDIGO    -
  // ------------------------

  // Se chegou até aqui é porque correu tudo bem
  return SUCESSO;
}
