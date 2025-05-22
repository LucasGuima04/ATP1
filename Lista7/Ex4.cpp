#include<stdio.h>
#include<stdlib.h>

void imprimeElementosComuns(int A[], int B[], int T) {
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            if (A[i] == B[j]) {
                int repetido = 0;
                for (int k = 0; k < i; k++) {
                    if (A[k] == A[i]) {
                        repetido = 1;
                        break;
                    }
                }
                if (repetido == 0 ) {
                    printf("%d ", A[i]);
                }
                break;
            }
        }
    }
    printf("\n");
}

int main(){
    int vetor1[5];
    int vetor2[5];

    printf("Digite 5 numeros para formar a primeira lista: \n");
    for (int i = 0; i < 5; i++)
        scanf("%d",&vetor1[i]);
    
    printf("Digite mais 5 numeros para formar a segunda lista: \n");
    for (int i = 0; i < 5; i++)
        scanf("%d",&vetor2[i]);

    int size = sizeof(vetor1) / sizeof(vetor1[0]);

    printf("O(s) numero(s) comun(s) entre as listas: ");
    imprimeElementosComuns(vetor1,vetor2,size);

    return 0;
}