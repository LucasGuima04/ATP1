#include<stdio.h>
#include<stdlib.h>

int soma(int n){
    if(n<=1){
        return 1;
    }else{
        return(n+soma(n-1));
    }
}

int main(){
    int num = 5;
    printf("%d",soma(num));
    getchar();
    return 0;
}