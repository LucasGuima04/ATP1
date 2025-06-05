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

    //inteiro a achar no meio das matrizes
    int finder = 3;
    bool achou = false;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz1[i][j] == finder){
                printf("Numero %d encontrando!\n",finder);
                printf("Linha : %d !\n",i+1);
                printf("Coluna: %d !\n",j+1);
                achou = true;
            }
        }
    }
    //caso não ache o número na matriz
    if(achou == false) printf("Numero nao encontrado!\n");


    //Libera matriz 
    liberarMatriz(matriz1,3);
    printf("\nMemoria das matrizes liberada com sucesso.\n");
    return 0;
}