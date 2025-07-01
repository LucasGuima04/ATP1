#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

typedef char nome[16];
typedef struct noh noh;
typedef noh *lista;
typedef noh *posicao;
struct noh{
    nome elem;
    noh *proximo;
};

void FormarLista (lista*);
void EscreverLista(lista);
void LiberarLista(lista *L);

int main(){
    lista L;
    FormarLista(&L);
    printf("\nConfirmacao:"); EscreverLista(L);
    LiberarLista(&L);

    return 0;
}

void FormarLista(lista *L){
    posicao p; int i,n;
    printf("Numero de elementos da lista: "); scanf("%d",&n);
    printf("\nElementos:\n");
    for(p = *L = (noh*)malloc(sizeof(noh)),i = 1;i<= n;i++){
        p->proximo = (noh*)malloc(sizeof(noh));
        p = p->proximo;scanf("%15s",p->elem);
    }
    p->proximo = NULL;
}

void EscreverLista(lista L){
    posicao p;
    printf("\n");
    for(p =L;p->proximo !=NULL;p = p->proximo)
        printf("\n%s",p->proximo->elem);  
}

void LiberarLista(lista *L){
    posicao p, q;
    p = *L;
    while(p != NULL){
        q = p;
        p = p->proximo;
        free(q);
    }
    *L = NULL; // Garante que a lista está vazia
}