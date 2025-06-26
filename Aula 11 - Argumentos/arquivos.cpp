#include <stdio.h>
#include <stdlib.h>
int main() {
FILE*f= fopen("log.txt", "w");

if (f) {
fprintf(f, "Ola Mundo!");

fclose(f);
} else {
return 1;
}
getchar();
return 0;

}
