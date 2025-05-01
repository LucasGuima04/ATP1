#include<stdio.h>
#include<stdlib.h>

int main(){
    float litros, kilometros;
    float consumoAtual,soma,consumoGeral = 0;
    int counter = 1;

    while (litros != -1)
    {
        printf("Digite (-1) para finalizar!\n");
        printf("Quantos Litros foram abastecidos: ");
        scanf("%f",&litros);
        if(litros == -1){
            break;
        }
        printf("Quantos kilometros foram rodados: ");
        scanf("%f",&kilometros);

        consumoAtual = kilometros/litros;
        soma += consumoAtual;
        consumoGeral = soma/counter;

        printf("O consumo atual foi de: %.2f\n",consumoAtual);
        counter++;
    }
    printf("O consumo geral foi de: %.2f\n",consumoGeral);

    getchar();
    return 0;
}