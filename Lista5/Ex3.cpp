#include<stdio.h>
#include<stdlib.h>

//Conversão de celsius para F
float celsius_para_fahrnheit(float c){
    return(( c *9.0f / 5.0f) + 32.0f);    
}


int main(){
    float f = 0; //Definição de variavel
    printf("Qual a temperatura em celsius: "); //Input de Temperatura
    scanf("%f",&f);

    //Resposta convertida para gahrnheit
    printf("%.2f",celsius_para_fahrnheit(f));
    getchar();
    return 0;
}