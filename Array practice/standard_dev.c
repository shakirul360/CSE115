#include <stdio.h>
#include <math.h>

#define SIZE 10

void st_div_mean(int arr[], int sum, int sum_sq);

int main(){
    int arr[SIZE], i, sum = 0, sum_sq = 0;

    for (i = 0; i < SIZE; i++){
        printf("Enter data: ");
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < SIZE; i++){
        printf("arr[i] = %d\n", arr[i]);
        sum += arr[i];
        sum_sq += arr[i] * arr[i];
    }
    printf("Sum = %d\n", sum);
    printf("Sum_sq = %d\n", sum_sq);
    st_div_mean(arr, sum, sum_sq);

    return 0;
}
void st_div_mean(int arr[], int sum, int sum_sq){

    double mean, st_div;
    printf("Sum = %d\n", sum);
    printf("Sum_sq = %d\n", sum_sq);
    mean = (double)sum / SIZE;
    st_div = sqrt((double)sum_sq / SIZE - mean * mean);

    printf("the mean of the data is %f.\n", mean);
    printf("The standard deviation of the data is %f.\n", st_div);
}
