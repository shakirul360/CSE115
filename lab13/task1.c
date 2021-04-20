/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>

int main(){

    int arr[3][3], i, j, target, flag = 0;
    printf("Enter matrix elements: \n");

    for (i = 0; i < 3; i++){

        for (j = 0; j < 3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter a number to search in 2D array: ");
    scanf("%d", &target);

    for(i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (arr[i][j] == target){
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
        printf("Found");
    else
        printf("Not found");

    return 0;
}
