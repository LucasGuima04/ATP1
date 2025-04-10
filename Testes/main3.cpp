#include<stdio.h> //bibliotecas
#include<stdlib.h>

int main(){ 
    char nome[30]; //Guardar o nome inputado
    printf("Diga seu nome: "); //pedir nome
    scanf("%s", nome); //armazenar nome na variavel
    printf("Saudações, %s! Bem Vindo a Unesp ",nome); //
    return 0;
}
