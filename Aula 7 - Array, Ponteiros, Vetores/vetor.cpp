//Logica Virtual

#include<stdio.h>
#include<stdlib.h>

void duble(int *n){
    *n = *n * *n;
}

int main(){
    int vetor[5] = {1,2,3,4,5};

    for(int i=0; i<5; i++)
        duble(&vetor[i]);

    for(int i=0; i<5; i++)
        printf("%d ",vetor[i]);

    getchar();
    return 0;
}