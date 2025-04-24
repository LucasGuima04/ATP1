#include<stdio.h>
#include<stdlib.h>

float celsius_para_fahrnheit(float c){
    return(( c *9.0f / 5.0f) + 32.0f);    
}

int main(){
    float f = 0;
    printf("%.2f",celsius_para_fahrnheit(f));
}