#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int *ponteiro = &matriz[0][0];

    for(int i = 0;i < 6; i++){
        printf("%d ", *ponteiro);
        ponteiro++;
    }
    getchar();
    return 0;
}