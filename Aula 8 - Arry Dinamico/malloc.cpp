#include <stdio.h>
#include <stdlib.h>

int main() {
    int* v = (int*) malloc(10 * sizeof(int));
    v[0] = 100;
    v[1] = 50;
    v[2] = 3;
    for(int i = 0; i < 5; i++) 
        printf("%d ", v[i]);

    free(v);
    getchar();
    return 0;
}