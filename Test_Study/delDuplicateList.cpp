#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista{
    char elementos[16];
    struct lista *proximo;
}Lista;

Lista* IniciarLista(){
    return NULL;
}

void AdicionarLista(Lista** L, const char elemento[16]) {
    Lista* novo_no = (Lista*)malloc(sizeof(Lista));
    if (novo_no == NULL) {
        printf("Erro ao alocar memoria!\n");
        return;
    }
    strcpy(novo_no->elementos, elemento);
    novo_no->proximo = NULL;

    // Se a lista está vazia, o novo nó se torna a cabeça da lista.
    if (*L == NULL) {
        *L = novo_no;
    } else {
        // Senão, percorre até o último nó.
        Lista* atual = *L;
        while (atual->proximo != NULL) {
            atual = atual->proximo;
        }
        // Adiciona o novo nó no final.
        atual->proximo = novo_no;
    }
}


void ChecarDuplicata(Lista *L){
    Lista* atual = L;
    while (atual != NULL) {
        Lista* corredor = atual;
        while (corredor->proximo != NULL) {
            if (strcmp(atual->elementos, corredor->proximo->elementos) == 0) {
                Lista* no_para_remover = corredor->proximo;
                corredor->proximo = no_para_remover->proximo;
                free(no_para_remover);
            } else {
                corredor = corredor->proximo;
            }
        }
        atual = atual->proximo;
    }
}

void imprimirLista(Lista *L){
    Lista* atual = L;
    printf("Elementos nao duplicados:\n");
    while(atual != NULL){
        printf("%s",atual->elementos);
        atual = atual->proximo;
    }
}

void LiberarLista(Lista* L){
    Lista *atual = L;
    while(atual != NULL){
        Lista* temp = atual;
        atual = atual->proximo;
        free(temp);
    }
}

int main(){
    Lista *lista_elementos = IniciarLista();
    AdicionarLista(&lista_elementos,"Lucas\n");
    AdicionarLista(&lista_elementos,"Lucas\n");
    AdicionarLista(&lista_elementos,"Guima\n");
    AdicionarLista(&lista_elementos,"Jorge\n");
    AdicionarLista(&lista_elementos,"Lista\n");
    AdicionarLista(&lista_elementos,"Lista\n");
    ChecarDuplicata(lista_elementos);
    imprimirLista(lista_elementos);
    LiberarLista(lista_elementos);

    return 0;
}
