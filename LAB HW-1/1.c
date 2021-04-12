#include <stdio.h>

int main(){
    int i, j, total = 0;

    for (i = 1; i <= 100; i++){
        if ((i % 2 != 0) || (i % 3 != 0)){
            printf("%d ", i);
            total++;
        }
    }
    printf("\nThe total numbers are: %d", total);
    return 0;
}
