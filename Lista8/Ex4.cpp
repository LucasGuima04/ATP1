//Dado um vetor dinâmico V de n inteiros, crie uma função que retorne um novo vetor
//S alocado dinamicamente que contenha apenas os elementos pares de V.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int* v = NULL;
    int* s = NULL;
    int n, j = 0;

    printf("Qual a tamanho desejado do vetor: ");
    scanf("%d",&n);

    v = (int*) calloc(n,sizeof(int));
    if(n%2 ==0){
        s = (int*) calloc(n/2,sizeof(int)); //caso o vetor tenha numero par de espaços
    } else {
        s = (int*) calloc(n/2 + 1,sizeof(int)); //caso o vetor tenha numero impar de espaços
    }

    if (v == NULL || s == NULL){
        printf("Erro na alocacao de memoria!\n"); //Verificação de espaço de memoria
        return 1;
    }

    printf("Digite os valores do vetor: \n");
    for (int i = 0; i < n; i++)
        scanf("%d",&v[i]);

    for(int i = 0;i<n;i++){ //s recebe valores pares de v
        if(v[i] % 2 == 0){
            s[j] = v[i];
            j++;
        }
    }
    if(n%2 ==0 || v[0] % 2 != 0){    //caso o vetor tenha numero par de espaços
        for(int i = 0;i<n/2;i++)
            printf("%d ",s[i]);
    } else {    //caso o vetor tenha numero impar de espaços
        for(int i = 0;i<n/2+1;i++)
            printf("%d ",s[i]);
    }

        free(v);
        free(s);
        getchar();
        return 0;
}