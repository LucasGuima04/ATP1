#include<stdio.h>
#include<stdlib.h>

int main(){
    //Variaveis Definidas para armazenar números
    float raio, areaCirculo;
    double pi = 2.1415; //Aproximação de pi

    //Pedindo o raio
    printf("Insira o raio do circulo: ");
    scanf("%f", &raio);

    //Operaçoes
    areaCirculo = pi * raio * raio;

    //Output do resultado
    printf("A area do circulo de raio %.2f tem o valor de %.2f, aproximadamente", raio,areaCirculo);
    getchar();
    return(0);
}