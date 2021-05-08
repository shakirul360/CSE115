/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
int binary_search(int arr[], int first, int last, int target);

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int res;

    res = binary_search(arr, 0, 6, 3);
    printf("res = %d\n", res);
    return 0;
}

int binary_search(int arr[], int first, int last, int target){

    int mid, index;

    if (first <= last){
        printf("first = %d, last = %d\n", first, last);
        mid = (first + last) / 2;
        printf("arr[first] = %d, arr[last] = %d, arr[mid] = %d\n", arr[first], arr[last], arr[mid]);

        if (arr[mid] == target){
            printf("Matched\n");
            index = mid;
            return mid;

        } else{
            if (arr[mid] < target)
                binary_search(arr , mid + 1, last, target);
            else
                binary_search(arr , first, mid - 1, target);
        }
    }
}
