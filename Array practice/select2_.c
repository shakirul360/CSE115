#include <stdio.h>
#define COL 4

void print_2d_array(int arr[][COL],int row,int col);
void read_2d_array(int row, int col);

int main(){
    int arr_a[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}},
        row = 3, col = 4;

    print_2d_array(arr_a, row, col);
    read_2d_array(4,4);
    return 0;
}

void print_2d_array(int arr[][COL],int row,int col){
    for (int i = 0; i < row; i++){

        for (int j = 0; j < col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void read_2d_array(int row, int col){
    int arr[row][col], i, j;

    for (i = 0; i < row; i++){

        for (j = 0; j < col; j++){
            printf("Enter a number: ");
            scanf("%d", &arr[i][j]);
        }
    }
    print_2d_array(arr, row, col);


}
