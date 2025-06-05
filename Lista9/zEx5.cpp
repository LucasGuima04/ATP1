#include <stdio.h>
#include <stdlib.h>
#include "matriz_utils.cpp"

void multiplicarMatrizes(int **matrizA, int **matrizB, int **matrizResultado, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            int soma = 0;
            // O terceiro loop calcula o produto escalar da linha i de A e coluna j de B
            for (int k = 0; k < colunas; k++) { // Assumindo matrizes quadradas
                soma += matrizA[i][k] * matrizB[k][j];
            }
            matrizResultado[i][j] = soma;
        }
    }
}

int main(){
    int **A;
    int **B;
    int **matrizResulatado;
    A = alocarMatriz(3,3);
    B = alocarMatriz(3,3);
    matrizResulatado = alocarMatriz(3,3);

    // Dados para preencher A
    int valorA[3][3] = {
        {3, 2, 3},
        {4, 5, 1},
        {5, 1, 4}
    };
    //Dados para preencher B
    int valorB[3][3] = {
        {1, 2, 4},
        {3, 1, 1},
        {2, 2, 3}
    };

    //Preencher A
    preencherMatrizComValores(A,valorA,3,3);
    preencherMatrizComValores(B,valorB,3,3);

    //Multiplicar as matrizes
    multiplicarMatrizes(A,B,matrizResulatado,3,3);

    //Imprime a matriz resultado de AxB
    imprimirMatriz(matrizResulatado,3,3);

    //Libera matriz 
    liberarMatriz(A,3);
    liberarMatriz(B,3);
    liberarMatriz(matrizResulatado,3);
    printf("\nMemoria das matrizes liberada com sucesso.\n");
    return 0;

}