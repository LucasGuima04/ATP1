#include <stdlib.h>
#include <stdio.h>
int count =0;

int main(){
    count++;
    printf("%d ",count);
    if(count < 20)
        return(main());
    else
        return 0;
}