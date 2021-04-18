#include <stdio.h>
void diamond_maker(int n);

int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    diamond_maker(rows);
    return 0;
}

void diamond_maker(int row){

    int r, col;

    for (r = 1; r < row; r++){

        for (col = row; col > r; col--){
            printf(" ");
        }
        for (col = 1; col <= r; col++){
          printf("*");
        }

        for (col = 1; col < r; col++){
            printf("*");
        }
        printf("\n");
    }

    for (r = row; r >= 1; r--){
       for (col = row; col > r; col--){
            printf(" ");
        }
        for (col = 1; col <= r; col++){
          printf("*");
        }

        for (col = 1; col < r; col++){
            printf("*");
        }
        printf("\n");

    }



    printf("\n");
}
