#include <stdio.h>
#include <stdlib.h>

int main(){
    int* v;
    int quanto, tamanho, um_inteiro;
    um_inteiro = sizeof(int);
    scanf("%d",&quanto);
    tamanho = um_inteiro * quanto;

    v = (int*)malloc(quanto * sizeof(int)); //malloc(BITS_A_SER_DESLOCADO) -> O tanto de bits que eu preciso para o meu *quanto*
    free(v);
}