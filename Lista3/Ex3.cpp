#include<stdio.h> //bibliotecas
#include<stdlib.h>

int main(){
    //Defeinindo Variaveis
    int result,opcao = 0;
    int num1 = 0;
    int num2 = 0;
    char c;

    while (opcao  != 9){
        if (opcao == 0){
            //input dos valores dos numeros
            printf("Numero 1: ");
            scanf("%d",&num1);
            printf("Numero 2: ");
            scanf("%d",&num2);
            //modelo da calculadora para pedir as operacoes
            printf("(0)Novos numeros \n");
            printf("(1)Soma \n");
            printf("(2)Subtracao \n");
            printf("(3)Multiplicacao \n");
            printf("(4)Divisao \n");
            printf("(9)Finalizar:\n");
            printf("Digite: ");
            scanf("%d", &opcao);
        }else{
            //modelo da calculadora para pedir as operacoes
            printf("(0)Novos numeros \n");
            printf("(1)Soma \n");
            printf("(2)Subtracao \n");
            printf("(3)Multiplicacao \n");
            printf("(4)Divisao \n");
            printf("(9)Finalizar:\n");
            printf("Digite: ");
            scanf("%d", &opcao);
            printf(" \n");
        }
            //Condicionais para operacoes dos numeros
            if(opcao == 1){
                result = num1 + num2;
                printf("\nA soma = %d\n",result);
                printf(" \n");
            } else if(opcao == 2){
                result = num1 - num2;
                printf("\nA subtracao = %d\n",result);
                printf(" \n");
            } else if(opcao == 3){
                result = num1 * num2;
                printf("\nA multiplicacao = %d\n",result);
                printf(" \n");
            } else if(opcao == 4){
                result = num1 / num2;
                printf("\nA divisao = %d\n",result);
                printf(" \n");
            } else if(opcao != 9 && opcao != 0) {
                printf("\nDigite um numero valido!\n");
                printf(" \n");
            }
            
    }
    //Fim do codigo
    printf("Calculadora Finalizada!\n");
    scanf("%c",&c);
    return 0;
}