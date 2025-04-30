#include<stdio.h>
#include<stdlib.h>

int main(){
    int linhas;
    printf("Numero de Linhas da Piramide: ");
    scanf("%d",&linhas);

    for(int i = 1; i<=linhas ; i++){

        for (int a = 1; a <= linhas - i; a++)
        {
            printf(" ");
        }
        
        for(int a=1; a<=(2 * i - 1); a++){
            printf("*");
        }

        printf("\n");
    }
    getchar();
    return 0;
}