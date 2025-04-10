#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //Declaracao de variaveis
    int numero;
    
    //input do numero desejado
    printf("Qual o numero a ser analizado: ");
    scanf("%d",&numero);
    
    //condicional para saber se é negativo ou não
    if (numero >= 0){
        printf("O numero %d e positivo.\n", numero); //caso seja positivo
    } else {
        printf("o numero %d e negativo.\n", numero); //caso seja negativo
    }

    getchar();
    return 0;
}