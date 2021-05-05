#include <stdio.h>
int fibonacci(int n);
int main(){
    int fib;
    int n;
    n = 10;
    printf("Printing first 10 Fibonacci: \n");
    for (int i = 1; i < n; i++){
        fib = fibonacci(i);
    printf("%dth term of fibonacci is %d\n", i,  fib);
    }
    return 0;
}

int fibonacci(int n){
    int term;

    if (n == 1 || n == 2)
        return 1;
    else
        term = fibonacci(n - 2) + fibonacci(n - 1);

    return term;
}
