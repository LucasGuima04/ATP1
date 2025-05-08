#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *numeroStr = "1234";
    int numero = atoi(numeroStr);

    printf("A string '%s' convertida para inteiro é: %d\n", numeroStr, numero);

    return 0;
}