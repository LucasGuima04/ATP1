#include <stdio.h>
#include <stdlib.h>

// Define o tamanho da matriz
#define LINHAS 3
#define COLUNAS 3

int **alocarMatriz(int linhas, int colunas){
    int **matriz = NULL;
    matriz = (int**)malloc(linhas * sizeof(int*));
    if (matriz == NULL){
            printf("Erro de alocacao!");
            return NULL;
        }
        
    for (int i = 0;i < linhas;i++) {
        matriz[i] = (int*)malloc(colunas*sizeof(int));
        if(matriz[i]==NULL){
            printf("Erro de alocacao!");
            return NULL;
        }}
    return matriz;
}

void liberarMatriz(int **matriz, int linhas) {
    if (matriz == NULL) {
        return; // Nada a liberar se a matriz for NULL
    }
    // 1. Liberar a memória de cada linha
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]); // Libera o array de inteiros da linha i
    }
    // 2. Liberar a memória do array de ponteiros
    free(matriz); // Libera o array de ponteiros para as linhas
}

void somarMatrizes(int **matrizA, int **matrizB, int **matrizResultado, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrizResultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

void imprimirMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int **matriz1, **matriz2, **resultado;

    //Alocar memória para as matrizes
    matriz1 = alocarMatriz(LINHAS, COLUNAS);
    matriz2 = alocarMatriz(LINHAS, COLUNAS);
    resultado = alocarMatriz(LINHAS, COLUNAS);

    //Matriz 1
    int matriz1[LINHAS][COLUNAS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz1[i][j] = matriz1[i][j];
        }
    }

    //Matriz 2
    int matriz2[LINHAS][COLUNAS] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz2[i][j] = matriz2[i][j];
        }
    }

    printf("Matriz A:\n");
    imprimirMatriz(matriz1, LINHAS, COLUNAS);

    printf("\nMatriz B:\n");
    imprimirMatriz(matriz2, LINHAS, COLUNAS);

    //Somar as matrizes
    somarMatrizes(matriz1, matriz2, resultado, LINHAS, COLUNAS);

    printf("\nSoma das Matrizes (A + B):\n");
    imprimirMatriz(resultado, LINHAS, COLUNAS);

    //Liberar a memória alocada
    liberarMatriz(matriz1, LINHAS);
    liberarMatriz(matriz2, LINHAS);
    liberarMatriz(resultado, LINHAS);

    printf("\nMemoria das matrizes liberada com sucesso.\n");

    return 0;
}