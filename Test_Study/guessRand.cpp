#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializa o gerador de números aleatórios com o tempo atual
    srand(time(NULL)); 

    // Gera um número aleatório
    int numero = rand() % 101;
    int escolha;

    //Input da tentativa
    printf("Tente adivinhar o numero de 0 a 100!\n");
    printf("Insira a primeira tentativa: ");
    scanf("%d",&escolha);

    //Verificação da igualdade entre o aleatorio e a escolha
    while (numero != escolha){
        if(numero > escolha){
            printf("Tente adivinha novamente \nO numero e MAIOR!\n");
            scanf("%d",&escolha);
        }else{
            printf("Tente adivinha novamente \nO numero e MENOR!\n");
            scanf("%d",&escolha);
        }
    }
    printf("Parabens! Voce acertou.\nO numero era %d",numero);
    return 0;
}