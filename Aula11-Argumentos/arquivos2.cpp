#include <stdio.h>
#include <stdlib.h>
int main() {
char linha[100];
FILE *f = fopen("log.txt", "r");
if (f) {
while (fgets(linha, sizeof(linha), f)) {
printf("%s", linha);
}
fclose(f);
} else {
return 1;
}
getchar();
return 0;
}