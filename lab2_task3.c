#include<stdio.h>
#include<conio.h>

int main(){
    int a, b, sum, prod, diff,quot, rem;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    sum = a + b;
    prod = a * b;
    diff = b - a;
    quot = b / a;
    rem = b % a;


    printf("\t____________________________________________________________\n");
    printf("\t|%-29s", "Sample Input");
    printf("|%-28s", "Sample Output");
    printf("|\n");

    printf("\t____________________________________________________________\n");
    printf("\t|%-29s", "");
    printf("|Sum = %d %19s", sum, " ");
    printf("|\n");

    printf("\t____________________________________________________________\n");
    printf("\t|Insert first number: %d %6s", a, "");
    printf("|Product = %d %15s", sum, " ");
    printf("|\n");

    printf("\t____________________________________________________________\n");
    printf("\t|Insert second number: %d %4s", b, "");
    printf("|Difference = %d %13s", diff, " ");
    printf("|\n");

    printf("\t____________________________________________________________\n");
    printf("\t|%-29s", "");
    printf("|Quotient = %d %15s", quot, " ");
    printf("|\n");

    printf("\t____________________________________________________________\n");
    printf("\t|%-29s", "");
    printf("|Remainder = %d %14s", quot, " ");
    printf("|\n");

    printf("\t____________________________________________________________\n");
    return 0;
}
