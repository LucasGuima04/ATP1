#include<stdio.h>
#include<stdlib.h>

int main(){
    //Variaveis Definidas para armazenar números
    int a, b;
    int resultado;

    //Pedindo o primeiro numero
    printf("Insira o primeiro numero. N: ");
    scanf("%d", &a);

    //Pedidindo o segundo numero
    printf("Insira o segundo numero N: ");
    scanf("%d", &b);

    //Operação com as variaveis
    resultado= a + b;
    printf("A soma dos numeros: %d",resultado);
    getchar();
    return(0);
}