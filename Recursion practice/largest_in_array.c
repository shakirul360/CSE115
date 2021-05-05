/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
int maximum(int arr[]);
#define SIZE 6

int main(){
    int arr[SIZE] = {10,2,6,4,3,7}, res;
    res = maximum(arr);
    printf("Largest in arr: %d\n", res);
    return 0;
}
int maximum(int arr[]){
    static int i = 0, highest = -9999;
    if (i < SIZE){
        if (highest < arr[i]){
            highest = arr[i];
        }
        i++;
        maximum(arr);
    }
    return highest;
}

