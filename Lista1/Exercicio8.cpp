#include<stdio.h>
#include<stdlib.h>
#include <math.h>  // Biblioteca matemática para usar M_PI

int main(){
    //Variaveis Definidas para armazenar números
    float raio, areaCirculo;

    //Pedindo o raio
    printf("Insira o raio do circulo: ");
    scanf("%f", &raio);

    //Operaçoes
    areaCirculo = M_PI * raio * raio; //M_PI é a função matematica para representar o pi

    //Output do resultado
    printf("A area do circulo de raio %.2f tem o valor de %.2f, aproximadamente", raio,areaCirculo);
    getchar();
    return(0);
}