#include <stdio.h>
#include <stdlib.h>
#include "matriz_utils.cpp"


void transpostaMatriz(int **matrizA, int **matrizResultado, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrizResultado[j][i] = matrizA[i][j];
        }
    }
}

int main(){
    int **matriz1;
    matriz1 = alocarMatriz(3,3);

    // Dados para preencher matriz1
    int valoresIniciais[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Preencher matriz1
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz1[i][j] = valoresIniciais[i][j];
        }
    }

    //Matriz a receber a transposta
    int **matrizTransposta = alocarMatriz(3,3);

    //Transpondo matriz
    transpostaMatriz(matriz1,matrizTransposta,3,3);

    //Imprime matriz transposta
    imprimirMatriz(matrizTransposta,3,3);

    //Libera matrizes
    liberarMatriz(matrizTransposta,3);
    liberarMatriz(matriz1,3);
    printf("\nMemoria das matrizes liberada com sucesso.\n");

    return 0;
}