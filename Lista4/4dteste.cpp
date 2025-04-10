#include <stdio.h>

int main(){
    int a = 1;
    int x = 1;
    while (x <= 20) {
        while(a != 6){
            printf("%d ",x);
            x++;
            a++;
        }
    printf("\n");
    a=1;
    }
    return 0;
}