#include <stdio.h>
#include <stdlib.h>

int main(){
    int* matriz = NULL;
    int j,n = 0;
    matriz = (int*)calloc(9,sizeof(int));

    for (int i = 0; i < 9; i=i+3){
        for(j = 0;j < 3;j++){
            printf("%d ",matriz[n]);
            n++;
        }
        printf("\n");
        j = 0;
    }
    free(matriz);
    getchar();
    return 0;
}