#include <stdio.h>
#include <stdlib.h>

void receberLinhasColunasQuadradica(int *rowcol){
    printf("Digite o numero de linhas/colunas da matriz: ");
    scanf("%d", rowcol);
}

int **alocarMatrizQuadratica(int rowcol){
    int **matriz = NULL;
    matriz = (int**)malloc(rowcol * sizeof(int*));
    if (matriz == NULL){
            printf("Erro de alocacao!");
            return NULL;
        }
        
    for (int i = 0;i < rowcol;i++) {
        matriz[i] = (int*)malloc(rowcol*sizeof(int));
        if(matriz[i]==NULL){
            printf("Erro de alocacao!");
            return NULL;
        }}
    return matriz;
}

void valoresMatrizQuadratica(int **matriz,int rowcol){
    for(int i =0; i<rowcol;i++){
        printf("Digita os numeros da linha %d.\n",i+1);
        for(int j =0; j<rowcol;j++)
            scanf("%d",&matriz[i][j]);
    }
}

void somarMatrizes(int **A, int**B, int**Resultado, int rowcol){
    for (int i = 0; i < rowcol; i++) {
        for (int j = 0; j < rowcol; j++) {
            Resultado[i][j] = A[i][j] + B[i][j];
        }
    }
}
