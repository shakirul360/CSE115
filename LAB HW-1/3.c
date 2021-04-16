/* LAB HW - 1,
   done by Shakirul Islam Leeon
   student ID: 2111728642
*/

#include <stdio.h>

int countEvenNumbers(int num);

int main(){
    int n, res;
    printf("Enter a 5 digit number: ");
    scanf ("%d", &n);
    while (n <= 9999 || n > 99999){
        printf("Enter a 5 digit number: ");
        scanf ("%d", &n);
    }
    res = countEvenNumbers(n);
    printf("The number of evens in %d is %d.\n", n, res);

    return 0;
}

int countEvenNumbers(int num){
    int i, digit, count = 0;
    for (i = 1; i <= 5; i++){
        digit = num % 10;
        if (digit % 2 == 0){
            count++;
        }
        num = num / 10;
    }
    return count;
}
