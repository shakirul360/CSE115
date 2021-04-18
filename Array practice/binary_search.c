#include <stdio.h>

int binary_search(int arr[], int value, int size);

int main(){
    int arr[] = {4,7, 8, 10, 14, 21, 22, 36, 54, 71, 85, 92}, value, size, res;
    size = 12;
    printf("Enter a value to search in array: ");
    scanf("%d", &value);

    res = binary_search(arr, value, size);
    if (res == -1)
        printf("Not found");
    else
        printf("%d found", res);

    return 0;
}

int binary_search(int arr[], int value, int size){
    int first = 0,

        last, mid;

    last = size - 1;

    while (first <= last){
        mid = (first + last) / 2;

        if (arr[mid] == value){
            return arr[mid];
        } else if (arr[mid] < value){
            first = mid + 1;
        } else {
            last = mid - 1;
        }
    }

    return -1;


}
