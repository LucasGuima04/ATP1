#include<stdio.h>
#include<stdlib.h>

int main(){
    //Variaveis Definidas para armazenar números
    float a, b, resultado;

    //Pedindo o primeiro numero
    printf("Insira o primeiro numero fracionado. N: ");
    scanf("%.3f", &a);

    //Pedidindo o segundo numero
    printf("Insira o segundo numero fracionado N: ");
    scanf("%.3f", &b);

    //Operação com a e b
    resultado = a +b;

    //Output do valor esperado
    printf("A soma: %.3f", resultado);
    getchar();
    return(0);
}