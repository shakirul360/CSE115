#include <stdio.h>

int main(){
    int n, i, x, sum;

    printf("Please enter a number: ");
    scanf("%d", &n);
    x = n;

    sum = 0;

    while (n > 0){
        i = n % 10;
        printf("%-2d", i);
        sum += i;
        n /= 10;

    }
    printf("\n");

    if (sum % 9 == 0){
        printf("Number %d is divisible by 9.\n", x);
    }
    else{
        printf("Number %d is not divisible by 9.\n", x);
    }
    return 0;
}
