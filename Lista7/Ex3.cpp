#include<stdio.h>
#include<stdlib.h>

int verificaElemento(int A[], int T, int x) {
    for (int i = 0; i < T; i++) {
        if (A[i] == x) {
            return 1;
        }
    }
    return 0;
}

