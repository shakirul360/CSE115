#include <stdio.h>


int main(){
    int i, j;

    for (i = 1; i < 7; i++){
        for (j = 0; j< i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

    for (i = 5; i > 0; i--){
        for (j = 0; j< i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
 }
