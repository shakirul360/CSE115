/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
int *fibonacci_N (int n);
int fast_fib(int n, int Prev, int Current);

int main(){
    int n = 5, fib;
    fib = fibonacci_N(n);

    printf("Fibonacci term = %d\n", fib);
    return 0;
}

int *fibonacci_N (int n){

    int *fib_pair=(int *)malloc(sizeof(int)*2);

    if(n==1){
        fib_pair[0]=1;

        fib_pair[1]=1;
    } else {
        fib_pair[0]=fast_fib(n, 0, 1);
        fib_pair[1]=fib_pair[0]+fast_fib(n-1,0,1);

        }

    return fib_pair;

}

int fast_fib(int n, int Prev, int Current) {
     if (n == 1)
        return Current;
     else
        return fast_fib(n-1, Current, Prev + Current);
}
