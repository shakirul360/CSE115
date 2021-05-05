/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
int fibonacci(int n);

int main(){
    int terms, res, i;
    printf("Enter the number of Fibonacci terms: ");
    scanf("%d", &terms);
    for (i = 1; i <= terms; i ++){
        res = fibonacci(i);
        printf("%d ", res);

    }
    return 0;
}

int fibonacci(int n){
    int ans;
    if (n == 1 || n == 2){
        //printf("%d ", 1);
        return 1;
    }
    else{
        ans = fibonacci(n - 1) + fibonacci(n - 2);
        return ans;
    }
}
