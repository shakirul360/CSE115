/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/
#include <stdio.h>
#include <math.h>
#define ROWS 3
#define COLS 4

void mean_Sumsqr(int rows, int cols, int arr[][cols], double *mean, int *sum_sq);
void std_dev_2d(double mean, int sumsq, double *std_dev, int n);

int main(){
    int arr[][COLS] = {{2,3,4,5}, {6,7,8,9}, {10,11,12,13}};
    int  sum_sq = 0, n = ROWS * COLS;
    double mean = 0, std_dev = 1;

    mean_Sumsqr(ROWS, COLS, arr, &mean, &sum_sq);
    printf("The mean is %.3f\n", mean);
    printf("The sum of squares is %d\n", sum_sq);
    std_dev_2d(mean, sum_sq, &std_dev, n);
    printf("The standard deviation of the 2D array is %f\n", std_dev);

    return 0;
}

void mean_Sumsqr(int rows, int cols, int arr[][cols], double *mean, int *sum_sq){
    int i, j, sum = 0;

    for (i = 0; i < rows; i++){
        for (j = 0; j < cols; j++){
            sum += arr[i][j];
            *sum_sq += (arr[i][j] * arr[i][j]);
        }
    }
    printf("Sum = %d\n", sum);
    *mean = sum / (double)(rows * cols);
}

void std_dev_2d(double mean, int sumsq, double *std_dev,int n){
//    printf("Mean = %f\n", mean);
//    printf("sumsq = %d\n", sumsq);
//    printf("n = %d\n", n);
    //printf("Std_div = %f\n", *std_dev);
    *std_dev = sqrt((sumsq / n) - (pow(mean, 2)));
}
