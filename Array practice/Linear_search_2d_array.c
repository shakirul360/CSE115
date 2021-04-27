/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
#define ROWS 50
#define COLS 4

void lin_search_2d(int rows, int cols, int arr[][cols], int target, int *r, int *c);

int main(){
    int arr[][COLS] = {{2,3,4,5}, {6,7,8,9}, {10,11,12,13}};
    int target, r, c;
    printf("Enter target: ");
    scanf("%d", &target);
    lin_search_2d(ROWS, COLS, arr, target, &r, &c);
    if (r == - 1 && c == -1)
        printf("Target not found in 2D array\n");
    else
        printf("The target was found at %d row %d column\n", r + 1, c + 1);

    return 0;
}

void lin_search_2d(int rows, int cols, int arr[][cols], int target, int *r, int *c){
    int i, j, flag = 0;

    for (i = 0; i < rows; i++){
        if (flag == 1) break;
        for (j = 0; j < cols; j++){
            //printf("arr[%d][%d] = %d, target = %d\n", i, j, arr[i][j], target);
            if (arr[i][j] == target){
                *r = i;
                *c = j;
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0){
        *r = -1;
        *c = -1;
    }

}
