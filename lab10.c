#include <stdio.h>
#include <math.h>

void fact(int *n);
void add (int *a, int *b);
void sub(int *a, int *b);
void mult(int *a, int *b);
void div(int *a, int *b);
int main(){

    int a, b, res, x;

    printf("Please enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("The results are based on the numbers %d and %d.\n", a,b);

    add(&a, &b);
    sub(&a, &b);
    mult(&a, &b);
    div(&a, &b);
    fact(&a);
    fact(&b);

    return 0;
}

void fact(int *n){

    int f = 1, i;

    for (i = 1; i <= *n; i++){
        f *= i;
    }
    printf("factorial of %d: %d\n", *n, f);

}

void add (int *a, int *b){
    int sum;

    sum = *a + *b;
    printf("Addition: %d.\n", *a, *b, sum);
}

void sub(int *a, int *b){
    int res;
    res = *a - *b;
    res = abs(res);

    printf("Substraction: %d.\n", *a, *b, res);
}

void mult(int *a, int *b){
    int res;

    res = *a * *b;

    printf("Multiplication: %d\n", res);
}

void div(int *a, int *b){
    float res;

    res = *a / *b;

    printf("Division: %f\n", res);
}
