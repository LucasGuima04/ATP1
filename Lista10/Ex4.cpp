//Escreva um programa que aloque um array de inteiros dinamicamente. O tamanho do array deve ser
//fornecido por meio do teclado. Os elementos do array devem ser valores atribuídos a partir da entrada
//pelo teclado. Imprima os valores do array. Em seguida, realoque a memória do array à metade do
//número atual de elementos. Imprima os valores restantes do array para confirmar se eles correspondem
//aos valores da primeira metade do array original.

#include <stdio.h>
#include <stdlib.h>

int main(){
    //definir tamanho do vetor
    int size;
    printf("Defina o tamanho da array: ");
    scanf("%d",&size);

    //alocar vetor
    int* vetor = NULL;
    vetor = (int*)malloc(size*sizeof(int));
    if(vetor == NULL){
        printf("Erro: Falha na alocação da memoria!");
        free(vetor);
        return 1; //Codigo de erro
    }

    //valor de cada elemento do vetor
    printf("Defina cada valor inteiro da array: \n");
    for(int i= 0;i<size;i++)
        scanf("%d",&vetor[i]);

    //Imprime os valores do vetor
    printf("O valores da array sao: \n");
    for(int i= 0;i<size;i++)
        printf("%d ",vetor[i]);

    //Realocar para apenas a primeira metade dos elementos
    int newsize = size/2;
    realloc(vetor,newsize*sizeof(int));

    //Imprime o vetor realocado
    printf("\nOs novos valores da array: \n");
    for(int i =0;i<newsize;i++)
        printf("%d ",vetor[i]);

    //Libera a memoria do vetor
    free(vetor);
    return 0;
}