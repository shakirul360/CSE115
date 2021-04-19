#include <stdio.h>

int get_min_index(int arr[], int first, int last);
int select_sort(int arr[], int size);
void print_array(int arr[],int size);

int main(){

    int arr[] = {22, 92, 7, 85, 8, 71, 10, 54, 14, 36, 21, 4}, size;
    size = sizeof(arr) / sizeof(int);
    printf("Printing array: \n");
    print_array(arr, size);

    select_sort(arr, size);
    printf("Printing array: \n");
    print_array(arr, size);
    return 0;
}


int select_sort(int arr[], int size){
    int index_of_min, i, temp;

    for (i = 0; i < size - 1; i++){
        index_of_min = get_min_index(arr, i, size - 1);

        if (i != index_of_min){
            temp = arr[index_of_min];
            arr[index_of_min] = arr[i];
            arr[i] = temp;
        }
    }
}


int get_min_index(int arr[], int first, int last){

    int i;
    int index_min = first;
    for(i = first; i <= last; i++){
        if (arr[i] < arr[index_min])
            index_min = i;
    }
    return index_min;
}

void print_array(int arr[], int size){
    int i;
    for (i = 0; i < size; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}
