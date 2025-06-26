#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    //int size_matriz = sizeof(matriz) / sizeof(int);
    //printf("%d", matriz[0][0]);

    for(int i = 0;i < 2; i++){
        for(int j = 0;j < 3;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    getchar();
    return 0;
}