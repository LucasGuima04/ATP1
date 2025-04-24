#include<stdlib.h>
#include<stdio.h>

void dobrar(int *numero) {
    *numero = *numero * 2;
}

int main(){
    int x = 0;
    int i = 0;

    printf("Digite um numero para dobrar: ");
    scanf("%d",&x);
    printf("Agora digite a quantitade de vezes que ira dobrar: ");
    scanf("%d",&i);

    for (int j = 0; j < i; j++){
        printf("%d ", x);
        dobrar(&x);
    }
    getchar();
    return 0;
}