/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
int factorial(int arr[], int n);

int main(){
    int arr[50];

    for (int i = 0; i < 50; i++)
        arr[i] = 0;


    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");

    factorial(arr, 10);
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    return 0;
}

int factorial(int arr[], int n){
    if (n == 0){
        arr[n] = 1;
        return 1;
    }else{
        arr[n] = factorial(arr, n - 1) * n;
    }

}
