#include <stdio.h>
#include <stdlib.h>
#include "perfectNumber.cpp"

int main(){
    int numero= 0;
    printf("Digite um numero: ");
    scanf("%d",&numero);

    if(perfect(numero) == 1){
        printf("Numero perfeito");
    }else{
        printf("Numero nao e perfeito ");
    }
    
}