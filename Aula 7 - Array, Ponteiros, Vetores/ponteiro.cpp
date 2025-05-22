#include<stdio.h>
#include<stdlib.h>

int main(){
    int vetor[5] = {10,20,30,40,50};
    int *pont ;

    for(pont = vetor; *pont != 50;pont++)
    printf("%d ",*pont);

    getchar();
    return 0;
}