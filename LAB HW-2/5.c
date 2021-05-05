/* Done by Shakirul Islam leeon
    student ID - 2111728642
    program that finds evens and odds in an array to store them in respective arrays
*/

#include <stdio.h>
#define SIZE 12

void findEvenOddNumber(int size, int originalArr[], int evenArr[], int oddArr[]);
int main(){
    int originalArr[SIZE] = {0,2,3,4,5,6,7,8,9,10, 11, 12};
    int evenArr[SIZE], oddArr[SIZE];

    findEvenOddNumber(SIZE, originalArr, evenArr, oddArr);
    return 0;
}

void findEvenOddNumber(int size, int originalArr[], int evenArr[], int oddArr[]){
    int i, odd_count = 0, even_count = 0;
    for (i = 0; i < size; i++){
        if ((originalArr[i] % 2) == 0){
            evenArr[even_count] = originalArr[i];
            even_count++;
        } else {
            oddArr[odd_count] = originalArr[i];
            odd_count++;
        }
    }

    printf("The odd numbers in the array are: \n");
    for (i = 0; i < odd_count; i++){
        printf("%d ", oddArr[i]);
    }
    printf("\n");
    printf("The even numbers in the array are: \n");
    for (i = 0; i < even_count; i++){
        printf("%d ", evenArr[i]);
    }
}
