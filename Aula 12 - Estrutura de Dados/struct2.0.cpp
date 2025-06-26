#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no {
    char valor[100];
    struct no *proximo;
} No;

No* iniciar() {
    No *lista = (No*)malloc(sizeof(No));
    lista->proximo = NULL;
    return lista;
}

void liberar_lista(No *lista) {
    No *atual = lista;
    while (atual != NULL) {
        No *temp = atual;
        atual = atual->proximo;
        free(temp);
    }
}

void adicionar(No *lista, char valor[100]) {
    if (lista->proximo == NULL) {
        strcpy(lista->valor, valor);
        lista->proximo = iniciar();
    } else {
        adicionar(lista->proximo, valor);
    }
}

void imprimir(No *lista) {
    No *atual = lista;
    if (lista->proximo != NULL) {
        while (atual->proximo != NULL) {
            printf("- %s\n", atual->valor);
            atual = atual->proximo;
        }
    }
}

int main(){
    No* lista = iniciar();
    adicionar(lista,"Cafe");
    adicionar(lista,"Arroz");
    adicionar(lista,"Feijao");

    imprimir(lista);

    liberar_lista(lista);
    return 0;
}