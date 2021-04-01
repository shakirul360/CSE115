#include <stdio.h>
#include <math.h>

void sum_check(int n);

int main(){
   int n;

   printf("Please enter a number: ");
   scanf("%d", &n);
   sum_check(n);
}

void sum_check(int n){
    int sum, i;

    for (i = 1; i <= n; i++){
        sum += i;
        if (sum == (n * (n + 1) / 2)){
            printf("The values and match when adding %d.\n", i);
        }
    }
    printf("The sum of terms till %d is %d.\n", n, sum);
}

