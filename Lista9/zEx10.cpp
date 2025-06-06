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
    int **A = NULL, linhasA, colunasA;
    int **B = NULL, linhasB, colunasB;
    int **matrizResulatado = NULL;
    
    //Receber linhas e colunas
    printf("\n----Matriz A----\n");
    receberLinhasColunas(&linhasA,&colunasA);
    printf("\n----Matriz B----\n");
    receberLinhasColunas(&linhasB,&colunasB);

    //verificar se é possivel a multiplicação
    if(colunasA != linhasB){
        printf("\nNao e possivel multiplicar as matrizes!\n");
        printf("O numero de colunas de A(%d) deve ser igual ao numero de linhas de B(%d).\n", colunasA, linhasB);
        return 1; //Não é possivel concluir
    }
    //Alocar matrizes
    A = alocarMatriz(linhasA,colunasA);
    B = alocarMatriz(linhasB,colunasB);
    matrizResulatado = alocarMatriz(linhasA,colunasB);

    //Atribuir valores a A e B
    valoresMatriz(A,linhasA,colunasA);
    valoresMatriz(B,linhasB,colunasB);

    
    //Multiplicar as matrizes AxB -> diferente de BxA
    multiplicarMatrizes(A,B,matrizResulatado,linhasA,colunasB);
    
    //Imprime a matriz resultado
    printf("\nO resultado da multiplicacao de AxB: \n");
    imprimirMatriz(matrizResulatado,linhasA,colunasB);

    //Libera matriz 
    liberarMatriz(A,linhasA);
    liberarMatriz(B,linhasB);
    liberarMatriz(matrizResulatado,linhasA);
    printf("\nMemoria das matrizes liberada com sucesso.\n");

    return 0;
}