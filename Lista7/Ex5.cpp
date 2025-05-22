#include<stdio.h>
#include<stdlib.h>

void inverterArray(int *array, int tamanho) {
    int *inicio = array;               // Ponteiro para o primeiro elemento
    int *fim = array + tamanho - 1;    // Ponteiro para o último elemento

    while (inicio < fim) {
        int temp = *inicio; //temp elemento intermediario
        *inicio = *fim;
        *fim = temp;

        inicio++;   //avança para o próximo elemento
        fim--;      //retrocede para o elemento anterior
    }
}

int main(){
    int size;
    printf("Qual a tamanho desejado da array: ");
    scanf("%d",&size);

    int vetor[size];
    printf("Digite os valores da array: \n");
    for (int i = 0; i < size; i++)
        scanf("%d",&vetor[i]);

    inverterArray(vetor,size);

    printf("A array invertida fica: \n");
    for (int j = 0; j < size; j++)
        printf("%d ",vetor[j]);
    
    getchar();
    return 0;
}