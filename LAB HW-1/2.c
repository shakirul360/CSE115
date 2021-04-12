#include <stdio.h>
#include <math.h>

void printPattern(int n);

int main(){
    int n;

    scanf("%d", &n);
    printPattern(n);
    return 0;
}

void printPattern(int n){
    int i,j;
    int flag = 0;
    if (n % 2 == 0){
        flag = 1;
    }

    for (i = 1; i <= n; i++){

        if (i == ((n + 1)/ 2)){
            for (j = 1; j < ((n + 1)/ 2); j++){
                printf("S ");
            }
            printf("O ");
            for (j = 1; j < ((n + 1)/ 2); j++){
                printf("S ");
            }
            if (flag == 1){
                printf("S ");
            }

        } else {

           for (j = 1; j <= n; j++){
                printf("S ");
           }
        }
        printf("\n");
    }
}
