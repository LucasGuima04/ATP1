#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("Recebi %d argumentos:\n",argc);
    for (int i = 0; i < argc; i++)
        printf("[%d] %s\n", i, argv[i]);
    
    getchar();
    return 0;
}