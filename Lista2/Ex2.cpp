#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //Declaracao de variaveis
    int numero;
    
    //input do numero desejado
    printf("Qual o numero a ser analizado: ");
    scanf("%d",&numero);
    
    //condicional para devolver em modulo
    if(numero >=0){
        printf("O numero em modulo: %d", numero); //caso seja positivo
    } else{
        numero = numero*(-1); //tornando o numero negativo em positivo
        printf("O numero em modulo: %d", numero); //caso seja negativo
    }

    getchar();
    return 0;
}