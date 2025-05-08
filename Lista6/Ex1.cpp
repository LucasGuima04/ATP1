#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    // Inicializa o gerador de números aleatórios com o tempo atual
    srand(time(NULL)); 

    // Gera um número aleatório
    int numero = rand() % 11 + 2;
    printf("Numero aleatorio: %d\n",numero);
    getchar();
    return 0;
}