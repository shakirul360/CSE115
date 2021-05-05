/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
#define SIZE 5

void place_largest(int array[], int n);
void select_sort(int array[], int n);

int main(){
    int  i;
    int array[SIZE] = {2,1,4,3,5};
    for (i = 0; i < SIZE; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    select_sort(array, SIZE);
    for (i = 0; i < SIZE; i++){
        printf("%d ", array[i]);
    }
    return 0;
}


void place_largest(int array[], int n){
    int temp, j, max_index;

    max_index = n - 1;
    for(j = n - 2; j >= 0; --j){
        if (array[j] > array[max_index])
            max_index = j;
    }
    if (max_index != n - 1){
        temp = array[n - 1];
        array[n - 1] = array[max_index];
        array[max_index] = temp;
    }
}

 void select_sort(int array[], int n) {
    if (n > 1){
        place_largest(array,n);
        select_sort(array, n - 1);
    }
 }
