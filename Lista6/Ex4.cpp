#include <stdio.h>
#include <stdlib.h>

int potencia(int base,int expoente){
    if(expoente <= 0) return 1;
    return base * potencia(base, expoente -1);
}

int main(){
    int num1;
    int num2;
    printf("Digite um numero: ");
    scanf("%d",&num1);
    printf("Qual a potencia dele: ");
    scanf("%d",&num2);
    
    printf("O resultado: %d\n",potencia(num1,num2));

    getchar();
    return 0;
}