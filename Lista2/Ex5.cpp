#include <stdlib.h>
#include <stdio.h>

int main()
{
    //Declarar variaveis
    int n1,n2,n3,temp;
    
    //Input dos 3 numeros
    printf("Inserir 3 numeros:\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    
    //Operacoes de verificacao
    if(n1>n2){
        temp =n1;
        n1 = n2;
        n2 = temp;
    }
    if(n1>n3){
        temp = n1;
        n1 = n3;
        n3 = temp;
    }
    if(n2>n3){
        temp=n2;
        n2=n3;
        n3=temp;
    }
    printf("Numeros ordenados: %d %d %d \n", n1,n2,n3);
    
    getchar();
    return 0;
}