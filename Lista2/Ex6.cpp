#include <stdlib.h>
#include <stdio.h>

int main()
{
    //Declarar variaveis
    int n1,n2,n3,temp;
    
    //Input dos 3 lados do triangulo
    printf("Inserir lados do triangulo:\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    
    //Operacoes de verificacao como condição de existencia do triangulo
    //A soma dos dois lados menores tem que ser maior que o maior lado
    //n3 -> maior lado | n1 e n2 menores
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

    //condicional para verificar se o triangulo e valido
    //equilatero, isoceles ou escaleno
    if(n3>n1+n2){
        printf("Nao e possivel formar um tringulo!\n");
    }else if ((n3 == n1) && (n3 == n2) && (n1==n2)){
        printf("O triangulo e equilatero!\n");
    }else if ((n3 == n1) || (n2==n3) || (n1==n2)){
        printf("O triangulo e isoceles!\n");
    }else{
        printf("O tringulo e escaleno!\n");
    }
    
    getchar();
    return 0;
}