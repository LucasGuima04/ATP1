#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s <numero1> <operador><numero2>\n", argv[0]);
        printf("Operadores disponiveis: + - * /\n");
        return 1;
    }
    double num1 = atof(argv[1]);
    double num2 = atof(argv[3]);
    char operador = argv[2][0];
    double resultado;
    if (operador == '+') {
        resultado = num1 + num2;
    }
    else if (operador == '-') {
        resultado = num1 - num2;
    }else if (operador == '*') {
        resultado = num1 * num2;
    }
    else if (operador == '/') {
    if (num2 == 0) {
        printf("Erro: Divisao por zero!\n");
        return 1;
    }
    resultado = num1 / num2;
    }
    else {
        printf("Operador invalido: %c\n", operador);
        printf("Operadores disponiveis: + - * /\n");
    return 1;
    }
    printf("Resultado: %.2lf %c %.2lf = %.2lf\n", num1,operador, num2, resultado);
    getchar();
    return 0;
}