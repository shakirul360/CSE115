/* Done by Shakirul Islam leeon
    student ID - 2111728642
    Program that adds two matrices
*/

#include <stdio.h>
void addMatrix(int rowSize, int colSize, int matA[rowSize][colSize], int matB[rowSize][colSize]);
void input_array(int rowSize, int colSize, int mat[rowSize][colSize]);

int main(){
    int rowSize = 3, colSize = 3, i, j;
    int matA[rowSize][colSize], matB[rowSize][colSize];
    /* Using the function input_array to reuse code */
    printf("Enter matrix A's elements: \n");
    input_array(rowSize, colSize, matA);
    printf("Enter matrix B's elements: \n");
    input_array(rowSize, colSize, matB);

    addMatrix(rowSize, colSize, matA, matB);

    return 0;
}
void addMatrix(int rowSize, int colSize, int matA[rowSize][colSize], int matB[rowSize][colSize]){
    int i, j;
    int matRes[rowSize][colSize];
    for (i =0; i < rowSize; i++){
        for (j = 0; j < colSize; j++){
            matRes[i][j] = matA[i][j] + matB[i][j];
        }
    }

    /* printing the resulting array */
    printf("\nThe resulting array of addition of arrays: \n");
    for (i =0; i < rowSize; i++){
        for (j = 0; j < colSize; j++){
            printf("%2d ", matRes[i][j]);
        }
        printf("\n");
    }

}

void input_array(int rowSize, int colSize, int mat[rowSize][colSize]){
    int i, j;
    for(i = 0; i < rowSize; i++){
        for (j = 0; j <colSize; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}
