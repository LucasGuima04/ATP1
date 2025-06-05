#include <stdio.h>
#include <stdlib.h>
#include "matriz_utils.cpp"

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
    preencherMatrizComValores(matriz1,valoresIniciais,3,3);

    //soma da diagonal
    int somaDiagonal = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j){
                somaDiagonal += matriz1[i][j];
            }
        }
    }
    printf("A soma da diagonal principal: %d\n",somaDiagonal);

    //Libera matriz 
    liberarMatriz(matriz1,3);
    printf("\nMemoria das matrizes liberada com sucesso.\n");
    return 0;
}