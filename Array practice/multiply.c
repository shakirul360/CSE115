/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>

void multiply_2d_array(int rows,int cols,int arr_a[rows][cols],int arr_b[rows][cols], int total_arr[rows][cols]);

int main(){
    int rows = 3, cols = 4;

    int arr_a[3][4] = {{2,3,4,5}, {6,7,8,9}, {10,11,12,13}},
        arr_b[3][4] = {{2,3,4,5}, {6,7,8,9}, {10,11,12,13}},
        total_arr[3][4];

    multiply_2d_array(rows, cols, arr_a, arr_b, total_arr);
    printf("Array 1- \n");
    print_2d_array(rows, cols, arr_a);
    printf("\n");
    printf("Array 2- \n");
    print_2d_array(rows, cols, arr_b);
    printf("\n");
    printf("Multiply of array 1 and array 2\n");
    print_2d_array(rows, cols, total_arr);
    return 0;
}


void multiply_2d_array(int rows,int cols,int arr_a[rows][cols],int arr_b[rows][cols], int total_arr[rows][cols]){
    int i, j;

    for(int i; i < rows; i++){

        for (j = 0; j < cols; j++)
            total_arr[i][j] = arr_a[i][j] * arr_b[i][j];
    }
}

void print_2d_array(int rows, int cols, int arr[rows][cols]){
    for (int i = 0; i < rows; i++){             /* printing array loop*/

        for (int j = 0; j < cols; j++){
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }

}
