#include <stdio.h>
#include <stdlib.h>
int **alocar_matriz(int linhas, int colunas){
    int **matriz = NULL;
    matriz = (int**)malloc(linhas * sizeof(int*));
    if (matriz == NULL){
            printf("Erro de alocação!");
            return NULL;
        }
        
    for (int i = 0;i < linhas;i++) {
        matriz[i] = (int*)malloc(colunas*sizeof(int));
        if(matriz[i]==NULL){
            printf("Erro de alocação!");
            return NULL;
        }}
    return matriz;
}

int **somaMatriz(int **A,int **B){
    int **c = (int**)malloc(3*sizeof(int*));
    for(int i=0;i<3;i++) c[i] = (int*)malloc(3*sizeof(int));
    for(int i = 0; i<3; i++){
        for(int j= 0;i<3;j++){
        c[i][j] = A[i][j] + B[i][j];
    }}
    return c;
}

int main(){
   int size = 8;
    int **A = alocar_matriz(size,size);

    for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) 
    A[i][j] = 1;
    }
    int **B = alocar_matriz(size,size);

    for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) 
    B[i][j] = 1;
    }
    int **c = somaMatriz(A,B);

    for(int i = 0; i<3; i++){
        for(int j= 0;i<3;j++){
            printf("%d ", c[i][j]);
        }
    }

    return 0;
}
