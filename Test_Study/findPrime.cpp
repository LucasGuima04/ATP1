#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int numero,flag = 0;
    printf("Digite um numero: ");
    scanf("%d",&numero);

    if(numero <= 1){
        printf("Esse numero nao e valido!\n Tente novamente!");
    }else{
        for(int i = 2;i<=sqrt(numero);i++){
            if(numero % i == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            printf("Numero nao e primo.\n");
        }else{
            printf("Numero e primo.\n");
        }
    }
    getchar();
    return 0;
}