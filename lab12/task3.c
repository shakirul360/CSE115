/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
void print_2d_array(int rows, int cols, int arr[rows][cols]);

int main(){
    int rows, cols, i, j;

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
    print_2d_array(rows, cols, arr);

    printf("Transpose: \n");
    for (j = 0; j < cols; j++){

        for (i = 0; i < rows; i++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }



    return 0;
}


void print_2d_array(int rows, int cols, int arr[rows][cols]){
    for (int i = 0; i < rows; i++){             /* printing array loop*/

        for (int j = 0; j < cols; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}

