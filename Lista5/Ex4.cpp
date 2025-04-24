#include<stdio.h>
#include<stdlib.h>


int eh_primo(int numero) {
    if (numero <= 1) return 0;
    for (int i = 2; i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 0;
}