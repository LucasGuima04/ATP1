#include<stdio.h> //bibliotecas
#include<stdlib.h>

int main() {
    //Definir variaveis
    int n, a = 0, b = 1, c;
    char d;

    //Input do tamanho desejado da sequencia
    printf("Digite a quantidade de termos da sequencia de Fibonacci: ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", a);  // Output o termo atual (comeca no 0)
        c = a + b;  // Calcula o próximo termo
        a = b;  // Atualiza 'a' para o próximo
        b = c;  // Atualiza 'b' para o próximo
    }
    scanf("%c",&d);
    return 0;
}