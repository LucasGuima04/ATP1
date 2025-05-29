#include <stdio.h>
#include <stdlib.h>

int main(){
    int*vetor = NULL;
    int size;
    printf("Qual a tamanho desejado da array: ");
    scanf("%d",&size);

    vetor = (int*) calloc(size,sizeof(int));
    printf("Digite os valores da array: \n");
    for (int i = 0; i < size; i++)
        scanf("%d",&vetor[i]);

    for (int i = 0; i < size; i++)
        printf("%d ",vetor[i]);
    free(vetor);
    getchar();
    return 0;   
    
}