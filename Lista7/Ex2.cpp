#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[5];
    int B[5];

    printf("Digite 5 numeros: \n");
    for (int i = 0; i < 5; i++)
        scanf("%d",&A[i]);
    
    printf("Digite mais 5 numeros: \n");
    for (int i = 0; i < 5; i++)
        scanf("%d",&B[i]);

    for (int i = 0; i < 5; i++)
        printf("%d %d ",A[i],B[i]);

    getchar();
    return 0;
}