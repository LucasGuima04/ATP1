#include <stdio.h>
#include <stdlib.h>

int main(){
    int*vetor = NULL;
    int size;
    int newsize = -1;
    printf("Qual a tamanho desejado do vetor: ");
    scanf("%d",&size);

    vetor = (int*) calloc(size,sizeof(int));
    if (vetor == NULL){
        printf("Erro na alocacao de memoria!\n"); //Verificação de espaço de memoria
        return 1;
    }

    printf("Digite os valores do vetor: \n");
    for (int i = 0; i < size; i++){
        scanf("%d",&vetor[i]);
        newsize++;
        if(vetor[i]== -1)
        break;
    }

    vetor = (int*)realloc(vetor, newsize * sizeof(int));

    for (int i = 0; i < newsize; i++)
        printf("%d ",vetor[i]);
    free(vetor);
    getchar();
    return 0;   
    
}