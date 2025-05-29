#include <stdio.h>
#include <stdlib.h>

int main(){
    int*v = NULL;
    int n;
    printf("Digite um inteiro: ");
    scanf("%d",&n); //Recebe n

    v = (int*) calloc(n, sizeof(int)); //Aloca n espaços no vetor
    if (v == NULL){
        printf("Erro na alocacao de memoria!\n"); //Verificação de espaço de memoria
        return 1;
    }

    for(int i = 0;i <= n;i++){ //Imprime vetor
    v[i] = i;
    printf("%d ", v[i]);
    }
    free(v); //Libera espaços de memoria
    getchar();
    return 0;
}