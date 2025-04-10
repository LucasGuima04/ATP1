#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //Declaracao de variaveis
    int numero;
    
    //input do numero desejado
    printf("Qual o numero a ser analizado: ");
    scanf("%d",&numero);
    
    //condicional para devolver em modulo
    if(numero%2 == 0){
        printf("O numero %d e par.\n", numero); //caso seja par
    } else{
        printf("O numero %d e impar.\n", numero); //caso seja impar
    }

    getchar();
    return 0;
}