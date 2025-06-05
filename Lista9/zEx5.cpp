#include <stdio.h>
#include <stdlib.h>
#include "matriz_utils.cpp"

int main(){
    int **matriz1;
    int **matriz2;
    matriz1 = alocarMatriz(3,3);
    matriz2 = alocarMatriz(3,3);

    // Dados para preencher matriz1
    int valoresIniciais[3][3] = {
        {3, 2, 3},
        {4, 5, 1},
        {5, 1, 4}
    };
    //Dados para preencher matriz2
    int valoresIniciais2[3][3] = {
        {1, 2, 4},
        {3, 1, 1},
        {2, 2, 3}
    };

    // Preencher matriz1
    preencherMatrizComValores(matriz1,valoresIniciais,3,3);
    preencherMatrizComValores(matriz2,valoresIniciais2,3,3);

    for(int i = 0;i<3;i++){
        for(int i = 0;i<3;i++){
            
        }
    }
}