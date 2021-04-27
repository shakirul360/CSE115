/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>

void getOddEvenAvg(int size, int arr[], int *oddNumber, int *evenAvg);

int main(){
    int size = 10;
    int arr[size];

    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int oddNumber = 999, evenAvg;

    getOddEvenAvg(size, arr, &oddNumber, &evenAvg);
    printf("Even average = %d\n", evenAvg);
    printf("Odd number = %d\n", oddNumber);
    return 0;
}

void getOddEvenAvg(int size, int arr[], int *oddNumber, int *evenAvg){
    int evnsum = 0, evn_count = 0;
    int i;

    for (i = 0; i < size; i++){
        if (arr[i] % 2 == 0){
            evnsum += arr[i];
            evn_count++;
        } else{
            if (arr[i] < *oddNumber){
                *oddNumber = arr[i];
            }
        }
    }
    *evenAvg = evnsum / evn_count;
}
