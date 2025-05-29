#include <stdio.h>
#include <stdlib.h>

int main(){
    int* v = NULL;
    int i = 10;
    v = (int*)calloc(i, sizeof(int));
    if (v == NULL){
        printf("Erro na alocacao de memoria!\n");
        return 1;
    }
    for(int j = 0; j<i;j++)
        printf("%d ",v[j]);
    free(v);
    
    getchar();
    return 0;
}