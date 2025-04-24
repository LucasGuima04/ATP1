#include<stdio.h>
#include<stdlib.h>

int eh_palidromo(int *numero){
    int original, invertido = 0;
    int resto;

    original = *numero;

    //processo para inverter o numero
    while (numero != 0) {
        resto = *numero % 10;
        invertido = invertido * 10 + resto;
        *numero /= 10;
    }

    if(original == invertido){
        return 1;
    } else {
        return 0;
    }
}