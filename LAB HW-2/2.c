/* Done by Shakirul Islam leeon
    student ID - 2111728642
    Program that finds the transpose matrix and subtracts the transpose from the original matrix
*/

#include <stdio.h>
void input_array(int rowSize, int colSize, int mat[rowSize][colSize]);
void transpose(int rowSize, int colSize, int mat[rowSize][colSize], int trans_mat[colSize][rowSize]);
void subtractMatrix(int rowSize, int colSize, int mat[rowSize][colSize], int trans_mat[rowSize][colSize]);
void print_2d_array(int rows, int cols, int arr[rows][cols]);

int main(){
    int rowSize = 4, colSize = 4;
    int mat[rowSize][colSize];
    int trans_mat[colSize][rowSize];

    printf("Enter matrix's elements: \n");
    input_array(rowSize, colSize, mat);
    printf("The matrix: \n");
    transpose(rowSize, colSize, mat, trans_mat);
    print_2d_array(rowSize, colSize, mat);
    printf("\n");
    printf("The transposed matrix: \n");
    print_2d_array(colSize, rowSize, trans_mat);
    subtractMatrix(rowSize, colSize, mat, trans_mat);

    return 0;
}

void input_array(int rowSize, int colSize, int mat[rowSize][colSize]){
    int i, j;
    for(i = 0; i < rowSize; i++){
        for (j = 0; j <colSize; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

void transpose(int rowSize, int colSize, int mat[rowSize][colSize], int trans_mat[colSize][rowSize]){
    int i, j;
    for (j = 0; j < colSize; j++){
        for(i = 0; i < rowSize; i++){
            trans_mat[j][i] = mat[i][j];
        }
    }
}

void print_2d_array(int rows, int cols, int arr[rows][cols]){
    for (int i = 0; i < rows; i++){             /* printing array loop*/

        for (int j = 0; j < cols; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}

void subtractMatrix(int rowSize, int colSize, int mat[rowSize][colSize], int trans_mat[rowSize][colSize]){
    int i, j;
    int matRes[rowSize][colSize];
    for (i =0; i < rowSize; i++){
        for (j = 0; j < colSize; j++){
            matRes[i][j] = mat[i][j] - trans_mat[i][j];
        }
    }

    /* printing the resulting array */
    printf("\nThe resulting array of substraction of arrays: \n");
    for (i =0; i < rowSize; i++){
        for (j = 0; j < colSize; j++){
            printf("%2d ", matRes[i][j]);
        }
        printf("\n");
    }
}
