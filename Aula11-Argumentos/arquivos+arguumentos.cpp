#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    char linha[1000];
    if (argc < 2) {
        return 1;
    }
    FILE *f = fopen(argv[1], "r");
    if (!f) {
        return 1;
    }
    printf("%s:\n", argv[1]);
    while (fgets(linha, sizeof(linha), f)) {
        printf("%s", linha);
    }
    fclose(f);
    return 0;
}