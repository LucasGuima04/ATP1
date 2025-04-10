#include<stdio.h> //bibliotecas
#include<stdlib.h>

int main(){
    //Defeinindo Variaveis
    int fat, n;
    char c;
    //Input de um numero
    printf("Insira um numero: ");
    scanf("%d", &n);

    //Fazendo o fatorial no numero por "for"
        for(fat = 1; n > 1; n = n - 1){
            fat = fat * n;
        }
    printf("O fatorial desse numero = %d", fat);
    scanf("%c",&c);
    return 0;
}