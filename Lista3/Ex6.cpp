#include <stdio.h> //bibiliotecas
#include <stdlib.h>

int main() {
    //Definindo variavel
    int n;
    char c;
    //Input da quantidade de linhas no triangulo
    printf("Digite o tamanho do triangulo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Loop para as linhas
        for (int a = 0; a < i;a++) {  // Output da quantidade de '*' de acordo com a linha
            printf("*");
        }
        printf("\n");  //Output de cada linha
    }
    scanf("%c",&c);
    return 0;
}