#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};
//Usar o typedef torna desnecessario usar (struct) antes da variavel

//typedef struct{
//    float x;
//    float y;
//} Ponto;

//Para recursividade
typedef struct no{
    char valor[100];
    struct no *proximo;
}No;


struct Ponto {
    float x;
    float y;
};

void imprime_ponto(struct Ponto p) {
    printf("(%.2f, %.2f)\n", p.x, p.y);
}
//Soma o ponto v em p
void move_ponto(struct Ponto *p, struct Ponto *v) {
p->x += v->x;
p->y += v->y;
}

int main() {
    struct Ponto p1, p2;
    p1 = {2.5, 3.7};
    p2 = {1.8, 4.2};
    move_ponto(&p1, &p2);
    imprime_ponto(p1);
    imprime_ponto(p2);
    return 0;
}