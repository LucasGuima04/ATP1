#include <stdio.h>
#include <stdlib.h>
float y(float x) {
    float a = 2.0f;
    float b = 3.0f;
    return a * x + b;
    }
int main() {
    float x;
    printf("Entre com x: ");
    scanf("%f", &x);
    getchar(); // primeiro '\n'
    printf("y(%.2f) = %.2f\n", x, y(x));
    getchar(); // segundo '\n'
    return 0;
}