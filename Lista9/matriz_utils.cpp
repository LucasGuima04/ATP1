#include <stdio.h>
#include <stdlib.h>
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
    //Liberar a memória de cada linha
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

void imprimirMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void preencherMatrizComValores(int **matrizDestino, const int (*matrizOrigem)[COLUNAS],int linhas, int colunas) {
    //Apenas matrizes 3x3
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrizDestino[i][j] = matrizOrigem[i][j];
        }
    }
}

void receberLinhasColunas(int *linhas, int *colunas){
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", linhas); // Modifica o valor no endereço apontado por 'linhas'
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", colunas); // Modifica o valor no endereço apontado por 'colunas'
}

void valoresMatriz(int **matriz,int linhas, int colunas){
    for(int i =0; i<linhas;i++){
        printf("Digita os numeros da linha %d.\n",i+1);
        for(int j =0; j<colunas;j++)
            scanf("%d",&matriz[i][j]);
    }
}

