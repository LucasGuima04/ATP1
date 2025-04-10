#include<stdio.h>
#include<stdlib.h>

int main(){
    //Variaveis Definidas para armazenar números
    int a, b;

    //Pedindo o primeiro numero
    printf("Insira o primeiro numero. N: ");
    scanf("%d", &a);

    //Pedidindo o segundo numero
    printf("Insira o segundo numero N: ");
    scanf("%d", &b);

    //Operação com as variaveis
    a = a+b;

    //Output do resultado
    printf("A soma dos numeros: %d",a);
    getchar();
    return(0);
}