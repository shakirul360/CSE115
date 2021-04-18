#include <stdio.h>

int main(){
    int i, j, x = (6 * 2) - 1;

    for (i = 1; i <= 6; i++){

        for(j = 1; j < x; j++){
            printf(" ");
        }

        for (j = 1; j <= i; j++){
            printf("%d ", j);
        }

        for (j = i - 1; j >= 1; j--){
            printf("%d ", j);
        }

    printf("\n");

    x -= 2;
    }

    return 0;
}
