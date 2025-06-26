#include <stdio.h>  
#include <stdlib.h> 

void imprimirNome(const char *nome = "ninguem") {
    printf("Saudacoes, %s!\n", nome);
}

int main() {
    
    imprimirNome();
    imprimirNome("Lucas");

    printf("\nPressione Enter para sair...");
    getchar();
    return 0;
}