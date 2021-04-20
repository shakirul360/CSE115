/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>

int main(){
    int rows, cols, i, j, col_add, col_sum;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];
    printf("Enter matrix elements: \n");

    for (i = 0; i < rows; i++){
        for (j = 0; j < cols; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter which column to find sum of: ");
    scanf("%d", &col_add);

    col_sum = 0;

    for (i = 0; i < rows; i++){
        col_sum += arr[i][col_add - 1];
        printf("arr[%d][%d] = %d\n", i, col_add - 1, arr[i][col_add - 1]);
    }
    printf("Sum of column %d: %d\n",col_add, col_sum);
    return 0;
}
