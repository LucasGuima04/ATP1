#include <stdio.h>

int main(){
    for(int x=1;x<21;x++){
        if (x%5==0){
           printf("%d \n",x);
        }else{
            printf("%d ",x);
        }
        
    }
    getchar();
    return 0;
}