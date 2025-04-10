#include<stdio.h> //bibliotecas
#include<stdlib.h>

int main(){
    int i = 1;
    do {
        printf("%d\n",i);
        i= i+2;
    } while (i != 11);

    return 0;
}