#include<stdio.h>
#include<stdlib.h>

int main(){
    //Variaveis Definidas para armazenar números
    int a, b;
    int w,x,y,z;

    //Pedindo o primeiro numero
    printf("Qual numero vc quer? N: ");
    scanf("%d", &a);

    //Pedidindo o segundo numero
    printf("Qual outro numero vc quer? N: ");
    scanf("%d", &b);

    //Operações com os números
    w = a+b;
    x = a-b;
    y = a*b;
    z = a/b;

    //Exibindo resultados
    printf("A soma: %d\n",w);
    printf("A subtracao: %d\n",x);
    printf("A multiplicacao: %d\n",y);
    printf("A divisao: %d\n",z);
}