/* Done by Shakirul Islam leeon
    student ID - 2111728642
    Program that finds the highest and second highest value
*/

#include <stdio.h>

int main(){
    int i, max1 = 999999, max2 = 999999, size = 10;
    int arr[size];
    printf("Enter the values: \n");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < size; i++){
        if (arr[i] < max1){
            max2 = max1;
            max1 = arr[i];

        }else if(arr[i] < max2 && arr[i] > max1){
            max2 = arr[i];
        }
    }

    printf("Largest = %d\n", max1);
    printf("Second largest = %d\n", max2);
    return 0;
}

