#include<stdio.h>
#include<stdlib.h>

int main(){
    //Variaveis Definidas para armazenar números
    int a, b;
    int intermediario;

    //Pedindo o primeiro numero
    printf("Insira o primeiro numero. N: ");
    scanf("%d", &a);

    //Pedidindo o segundo numero
    printf("Insira o segundo numero N: ");
    scanf("%d", &b);

    //Operações numericas
     intermediario = a;
     a = b;
     b = intermediario;

     //Output do resultado
     printf("Agora a = %d\n Agora b = %d", a,b);
     getchar();
    return(0);
}