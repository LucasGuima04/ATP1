#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // Para usar a função sqrt

int main() {
    int numero, i, flag = 0;
    char c;
    // Solicitar ao usuário para digitar um número
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Número menor que 2 não é primo
    if (numero <= 1) {
        printf("%d nao e um numero primo.\n", numero);
    } else {
        // Verificar se o número é divisível por algum número entre 2 
        //sqrt(numero) -> não ha necessidade de i ser maior que a raiz do numero(garante que não tera divisor)
        //usa menos memoria 
        for (i = 2; i <= sqrt(numero); i++) {
            if (numero % i == 0) {
                flag = 1;  // Número não é primo
                break;
            }
        }

        // Se flag for 0, o número é primo, caso contrário, não é primo
        if (flag == 0) {
            printf("%d e um numero primo.\n", numero);
        } else {
            printf("%d nao e um numero primo.\n", numero);
        }
    }
    scanf("%c", &c);
    return 0;
}