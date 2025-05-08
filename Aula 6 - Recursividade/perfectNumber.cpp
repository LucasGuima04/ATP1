//numero perfeito é aquele que tem seus fatores incluido o 1 como soma dão origem ao próprio numero
#include<stdio.h>
#include<stdlib.h>

int perfect(int number){
    int soma = 0;
    for(int i = 1;i<number;i++){
        if(number % i == 0){
            soma += i;
        }

    }
    if(soma == number){
        return 1; //É perfeito 
    }else{
        return 0; //Não é perfeito
    }
}