#include <stdio.h>

void read_arr(int arr[]);
void find_largest(int arr[]);

int main(){

    int arr[10];

    read_arr(arr);
    find_largest(arr);

    return 0;
}

void read_arr(int arr[]){
    int i;

    for (i = 0; i < 10; i++){
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }
}


void find_largest(int arr[]){

    int i, largest = arr[0];

    for (i = 1; i < 10; i++){
        if (arr[i] > largest)
            largest = arr[i];
    }

    printf("Largest value in the arr is %d.\n", largest);
}
