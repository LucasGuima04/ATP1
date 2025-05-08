#include<stdio.h>
#include<stdio.h>

int counter = 0;
int quantidadeDigitos(int inteiro){
    if(inteiro < 10){
        counter++;
        return counter;
    }else{
        quantidadeDigitos(inteiro/10);
        counter++;
    }
}

int main(){
    int num = 10240;
    printf("A quantidade de algarismo: %d",quantidadeDigitos(num));
}