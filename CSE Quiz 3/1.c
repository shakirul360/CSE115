/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/
int get_output(int rows, int cols, int arr[][cols]);
void print_2d_array(int rows, int cols, int arr[rows][cols]);
#include <stdio.h>

int main(){
    int rows = 3;
    int cols = 4;
    int arr[][4] = {{1,1,0,1}, {1,0,0,1}, {1,1,1,1}, {1,1,1,1}};
    int res = get_output(3,4,arr);
    printf("The number of boundary 1s is %d\n", res);
    print_2d_array(3,4, arr);
    return 0;
}

int get_output(int rows, int cols, int arr[][cols]){
    int i, j, count = 0;

    for (i = 0; i < rows; i++){
        for (j = 0; j < cols; j++){
            if (i == 0 || j == 0 || i == rows - 1 || j  == cols - 1){
                if (arr[i][j] ==  1){
                    count += 1;
                }
            }
        }
    }
    return count;
}

void print_2d_array(int rows, int cols, int arr[rows][cols]){
    for (int i = 0; i < rows; i++){             /* printing array loop*/

        for (int j = 0; j < cols; j++){
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
}
