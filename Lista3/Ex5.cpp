#include<stdio.h> //bibliotecas
#include<stdlib.h>

int main() {
    //Definir variaveis
    int n, a = 0, b = 1, d;
    char c;

    //Input do tamanho desejado da sequencia
    printf("Digite o termo da sequencia de Fibonacci: ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci:\n");

    for (int i = 0; i < (n+1) ; i++) {
        printf("%d ", a);  // Output o termo atual (comeca no 0)
        if(d> n){
            break;
        }
        d = a + b;  // Calcula o próximo termo
        a = b;  // Atualiza 'a' para o próximo
        b = d;  // Atualiza 'b' para o próximo
    }
    scanf("%c",&c);
    return 0;
}