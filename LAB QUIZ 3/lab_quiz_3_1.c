/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
#define SIZE 10

int main(){
    int arr[SIZE], i, secondMin;
    printf("Enter the array values: ");
    for (i = 0; i < SIZE; i++){
        scanf("%d", &arr[i]);
    }
    findMinArr(SIZE, arr, &secondMin);
    printf("Second minimum = %d\n", secondMin);
    return 0;
}

void findMinArr(int size, int arr[], int *secondMin){
    int i, min1 = 999999, min2 = 999999, j;

    for (i = 0; i < size; i++){
        if (arr[i] < min1){
            min2 = min1;
            min1 = arr[i];

        }else if(arr[i] < min2 && arr[i] > min1){
            min2 = arr[i];
        }
    }
  *secondMin = min2;
}

