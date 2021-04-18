#include <stdio.h>

void cross_check(int arr_a[], int arr_b[], int size);

int main(){
    int arr_a[5] = {1,2,3,4,5}, arr_b[5] = {1,2,3,4,5}, size = 5;

    cross_check(arr_a, arr_b, size);


    return 0;
}

void cross_check(int arr_a[], int arr_b[], int size){
    int i, flag = 1;

    for (i = 0; i < size; i++){

        if (arr_a[i] != arr_b[i])
            flag = 0;
            break;
    }

    if (flag == 1)
        printf("the arrays are identical.\n");
    else
        printf("the arrays are not identical.\n");
}
