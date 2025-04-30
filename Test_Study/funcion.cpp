#include<stdio.h>
#include<stdlib.h>

void duble(int *x){
    *x = *x * 2;
}

int main(){
    int numero;
    int res;

    printf("Numero: ");
    scanf("%d",&numero);

    res  = numero;
    duble(&numero);

    printf("O dobro de %d = %d",res, numero);
}