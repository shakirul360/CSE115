#include <stdio.h>

void number_pattern(int rows);
int main(){
    int rows;

    printf("Enter a number of rows: ");
    scanf("%d",&rows);
    number_pattern(rows);
    return 0;
}

void number_pattern(int rows){
    int i, j, x ;

    x = (rows * 2) - 1;

    for (i = 1; i <= rows; i++){

        for (j = 1; j < x; j++){
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


}

